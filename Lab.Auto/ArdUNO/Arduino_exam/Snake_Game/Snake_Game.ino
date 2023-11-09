#include "initialize.h"
#include "GameOver.h"
byte pic[8] = {0,0,0,0,0,0,0,0};//8 righe della matrice di led 8x8


//variabile per gestire il tempo di refresh dei led
float oldTime = 0;
float timer = 0;
float updateRate = 3;


int i,j;//contatori
void setup() {
  //il max7219 ha bisogno di uno stato per capire che deve funzionare
  Serial.begin(9600);
  lc.shutdown(0,false);
  ///gestisce l'intensità generale dei led
  lc.setIntensity(0,3);
  //spegne tutti i led dello schermo quando lo inizializza
  lc.clearDisplay(0);
  //pin digitale del joystick che controlla lo stato del bottone
  pinMode(JOYSTICK_Button, INPUT_PULLUP);
}

void loop() {
  float deltaTime = calculateDeltaTime();
  timer += deltaTime;         //aggiorno la variabile timer con il valore corrente del tempo trascorso tra un refresh e l'altro

  getDirection();              //chiamo la funzione che gestisce il movimento e il cambio direzione
  
  //Update
  if(timer > 1000/updateRate){  //se il timer è maggiore di un certo valore allore aggiorno lo schermo 
    timer = 0;                  //quando faccio l'update dello schermo resetto il timer
    Update();                   //chiamo update che aggiorna la posizione del serpente in base alla direzione e movimento
    }
  
  //Render
  Render();                     //rendo quindi nota la nuova posizione del serpente 
  
}

float calculateDeltaTime(){
  float currentTime = millis();              //assegno a current time il valore del tempo da quando arduino è stato acceso
  float dt = currentTime - oldTime;          //nel caso del primo refresh assegno a dt il valore di currentTime, poi aggiorno oldTime per avere sempre un idea di quanto tempo è passato tra un refresh e l'altro  
  oldTime = currentTime;
  return dt;
}


void Update(){
  reset();                          //ogni aggiornamento spengo tutti i led e li riaccendo poi con la posizione aggiornata
  getDirection();                   //ottengo posizione e movimento desiderato per utilizzarlo                                  
  int newHead[2] = {snake.head[0]+snake.dir[0], snake.head[1]+snake.dir[1]};        //controllo in base alla direzione e movimento dove dovrà essere la posizione della nuova testa

  //qui si gestisce il caso in cui la nuova testa avrà posizione fuori i bordi quindi fuori la matrice 8x8 se sì l'utente perde
  if(newHead[0]==8){
    while (is_button_pressed()==0){
        game_over();  
        
      }
      snake = {{1,5},{{0,5}, {1,5}}, 2, {1,0}};//reinizializzo l'oggetto strutturato snake 
      apple = {(int)random(0,8),(int)random(0,8)};//reinizializzo l'oggesto struttarto mela
      return;
  }else if(newHead[0]==-1){
    while (is_button_pressed()==0){
        game_over();  
      }
      snake = {{1,5},{{0,5}, {1,5}}, 2, {1,0}};
      apple = {(int)random(0,8),(int)random(0,8)};
      return;
  }else if(newHead[1]==8){
    while (is_button_pressed()==0){
        game_over();  
      }
      snake = {{1,5},{{0,5}, {1,5}}, 2, {1,0}};
      apple = {(int)random(0,8),(int)random(0,8)};
      return;
  }else if(newHead[1]==-1){
    while (is_button_pressed()==0){
        game_over();  
      }
      snake = {{1,5},{{0,5}, {1,5}}, 2, {1,0}};
      apple = {(int)random(0,8),(int)random(0,8)};
      return;
  }
  
  //Check If The Snake hits itself
   for(j=0;j<snake.len;j++){
    if(snake.body[j][0] == newHead[0] && snake.body[j][1] == newHead[1]){
      while (is_button_pressed()==0){
        game_over();  
      }
      snake = {{1,5},{{0,5}, {1,5}}, 2, {1,0}};
      apple = {(int)random(0,8),(int)random(0,8)};
      return;
    }
  }

  //controllo se il serpente avrà la posizione della nuova testa sulla mela
  if(newHead[0] == apple.rPos && newHead[1] ==apple.cPos){
    snake.len = snake.len+1;
    apple.rPos = (int)random(0,8);      //riassegno la posizione della mela
    apple.cPos = (int)random(0,8);
  }else{
    removeFirst();                      //se il serpente non mangia la mela sposto l'arrey simulando il movimento 
  }
  
  snake.body[snake.len-1][0]= newHead[0];       //gestisco il movimento spostando di uno tutti i led che costituiscono il serpente
  snake.body[snake.len-1][1]= newHead[1];       //dovendo specificare anche nella variabile body la posizione della testa la assegno qui
  
  snake.head[0] = newHead[0];                   //assegno a snake la posizione della nuova testa
  snake.head[1] = newHead[1];                   //questa volta agendo direttamente sulla variabile head
  
  
  for(j=0;j<snake.len;j++){                                //assegno ai led la posizione di mela e serpente
    pic[snake.body[j][0]] |= 128 >> snake.body[j][1];       
  }
  pic[apple.rPos] |= 128 >> apple.cPos;
  
}

void Render(){
  
   for(i=0;i<8;i++){                    //utilizzo il camando set Row per illuminare gli spazi occupati da serpente e mela dopo aver assegnato la loro posizione
    lc.setRow(0,i,pic[i]);
   }
}


//con questa funzione gestisco la simulazione del movimento assegnando la posizione del led avanti a quello dietro 
void removeFirst(){                             
  for(j=1;j<snake.len;j++){
    snake.body[j-1][0] = snake.body[j][0];                  
    snake.body[j-1][1] = snake.body[j][1];
  }
}


void reset(){
  for(int j=0;j<8;j++){              //resetta la matrice 8x8 portandola allo stato iniziale 
    pic[j] = 0;
  }
}
