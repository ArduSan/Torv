
#define JOYSTICK_X A0
#define JOYSTICK_Y A1
#define JOYSTICK_Button 2


//costruisco la struttura dell'oggetto snake
typedef struct Snake Snake;
struct Snake{
  int head[2];         //gestisco la testa come un arrey formato da due elemeti, posizione x e posizione y sulla matrice di let
  int body[40][2];     //gestisto il corpo come un arrey bidimensionale formato da un massimo di 40 elementi (max lunghezza di snake) formati a loro volta da due elementi rappresentanti i valori di x e y
  int len;             //intero che devide quanto è grande l'arrei bidimensionale body, quindi indica la lunghezza attuale      
  int dir[2];          //gestisco la direzione come un arrey bidimensionale formato da y e x, il primo valore indica lo spostamento su y (1,-1) il secondo quello su x(1,-1)
};

//definisco la struttura dell'oggetto mela 
typedef struct Apple Apple;             
struct Apple{ 
  int rPos; //posizione in x(righe) della mela
  int cPos; //posizione in y(colonne) della mela 
};

Snake snake = {{1,5},{{0,5}, {1,5}}, 2, {1,0}};//valori con i quali inizializzo l'oggetto, quindi le posizioni dei vari elementi e la direzione di partenza
Apple apple = {(int)random(0,8),(int)random(0,8)};//valori con i quali inizializzo l'oggetto mela quindi la sua posizione iniziale randomizzata


//funzione per un  controllo in caso di problemi dello stato del joystick 
void print_joystick_state() {
  
  int x=analogRead(JOYSTICK_X);
  int y=analogRead(JOYSTICK_Y);
  int button = !digitalRead(JOYSTICK_Button);
  Serial.print("X: "+String(x));
  Serial.println(",\tY: "+String(y));
  Serial.println(",\tP: "+String(button));
}
//funzione che gestisce il cambio di direzione
void getDirection(){
  int x = analogRead(JOYSTICK_X);  //controllo il valore del'asse x del joystick 
  int y = analogRead(JOYSTICK_Y);  //controllo il valore dell'asse y del joystick
  if(x<100 && snake.dir[1]==0){    //se il joystick è inclinato verso sinistra e la direzione non è destra ma su o giù giro a sinistra
    snake.dir[0] = 0;              //y si azzera rendendo così il movimento orizzontale
    snake.dir[1] = -1;             //x diminuisce di uno intendendo quindi di andare verso sinistra 
  }else if(x >920 && snake.dir[1]==0){   //il ragionemneto è lo stesso del primo caso, cambiano solo le direzione in base ai casi 
    snake.dir[0] = 0;
    snake.dir[1] = 1;
  }else if(y<100 && snake.dir[0]==0){
    snake.dir[0] = -1;
    snake.dir[1] = 0;
  }else if(y >920 && snake.dir[0]==0){
    snake.dir[0] = 1;
    snake.dir[1] = 0;
  }
}
//funzione controllo stato bottone
bool is_button_pressed(){
  return !digitalRead(JOYSTICK_Button);           //controllo lo stato del bottone per poterlo utilizzare 
}