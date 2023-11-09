int latchPin = 12;                   //pin collegato al ST_CP del 74hc595,se high aggiorna il dataoutput
int clockPin = 13;                   //pin collegato al SH_CP del 74hc595,se high il valore in data input viene shiftato
int dataPin = 11;                    //pic collegato al DS del 74hc595, Serial data input
int LEDPin[]={2,3,4,5,6,7,8,9};      //arrey pin delle colonne della matrice  

cont int smiliFace[]={0x1C, 0x22, 0x51, 0x45, 0x45, 0x51, 0x22, 0x1C}  //pattern da illuminare per fare la faccina felice


//pattern di lettere e numeri 
const int data[] PROGMEM = {                                     
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // " "
 0x00, 0x00, 0x21, 0x7F, 0x01, 0x00, 0x00, 0x00, // "1"
 0x00, 0x00, 0x23, 0x45, 0x49, 0x31, 0x00, 0x00, // "2"
 0x00, 0x00, 0x22, 0x49, 0x49, 0x36, 0x00, 0x00, // "3"
 0x00, 0x00, 0x0E, 0x32, 0x7F, 0x02, 0x00, 0x00, // "4"
 0x00, 0x00, 0x79, 0x49, 0x49, 0x46, 0x00, 0x00, // "5"
 0x00, 0x00, 0x3E, 0x49, 0x49, 0x26, 0x00, 0x00, // "6"
 0x00, 0x00, 0x60, 0x47, 0x48, 0x70, 0x00, 0x00, // "7"
 0x00, 0x00, 0x36, 0x49, 0x49, 0x36, 0x00, 0x00, // "8"
 0x00, 0x00, 0x32, 0x49, 0x49, 0x3E, 0x00, 0x00, // "9"
 0x00, 0x00, 0x3E, 0x41, 0x41, 0x3E, 0x00, 0x00, // "0"
 0x00, 0x00, 0x3F, 0x44, 0x44, 0x3F, 0x00, 0x00, // "A"
 0x00, 0x00, 0x7F, 0x49, 0x49, 0x36, 0x00, 0x00, // "B"
 0x00, 0x00, 0x3E, 0x41, 0x41, 0x22, 0x00, 0x00, // "C"
 0x00, 0x00, 0x7F, 0x41, 0x41, 0x3E, 0x00, 0x00, // "D"
 0x00, 0x00, 0x7F, 0x49, 0x49, 0x41, 0x00, 0x00, // "E"
 0x00, 0x00, 0x7F, 0x48, 0x48, 0x40, 0x00, 0x00 // "F"
};

void setup() {
// imposto tutti i pin come output
  pinMode(latchPin, OUTPUT);      
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  for (int i = 0; i < 8; i++) {
    pinMode(LEDPin[i], OUTPUT);
  }
}

void loop() {
  int cols;
  //faccina che ride
  for (int j = 0; j<500; j++){         //Ripeto per 500 volte la faccina sorridete 
    cols = 0x01;                       //imposto cols per la prima colonna 0x01== 00000001, colonna tutta a sinistra 
    for (int i = 0; i < 8; i++){
      matrixColsVal(cols);             
      matrixRowsVal(smilingFace[i]);     //assegno alle righe dell'ultima colonna i valori per far comparire la faccina che ride
      delay(1);                          //tempo per il quale mostro la faccina 
      matrixRowsVal(0x00);               //pulisco i dati del resto delle righe
      cols<<=1;                          //mi sposto di una colonna a sinistra e ricomincio per tutte e 8 le colonne

    }
  }

  //pattern di lettere e numeri 
  for(int i=0; i<128; i++){            //128 poichè il numero di colonne che occupano tutti e 26 gli elementi        
    for(int k=0; k<10 ; k++){          //ripeto per 10 volte ogni dato 
      cols = 0x01;                     //parto dalla prima colonna a sinistra 
      for(int j=i; j<8+i; j++){        //questo for funzione come quello di prima , cambiano solo i numeri che questa volta dovranno essere di più dato il numero di elementi 
        matrixColsVal(cols); 
        matrixRowsVal(pgm_read_word_near(data+j));  //controllo ogni valore di PROGMEM
        delay(1);
        matrixRowsVal(0x00);
        cols<<=1

      }
    }
  }

}

//assegno i led che si dovranno accendere per le righe 
void matrixRowsVal(int value) {
  //rendo il il livello del LatchPin basso, non triggherando quindi il ST_CP
  digitalWrite(latchPin, LOW);             
  //fa scorrere un byte di dati dal bit meno significato al più significativo 
  shiftOut(dataPin, clockPin, LSBFIRST, value);
  //datapin == pin al quale inviare i dati //clockPin == pin che invia l'inpulso dopo che il datapin è stato impostato correttamente
  //LSBFIRST == ordine nel quale far scorre i bit (less-significant) //vlaue=byte da scorrere
  digitalWrite(latchPin, HIGH); //faccio salire il livello del latchPin triggherando quindi il ST_CP,aggiornando il data output(RIGHE)

}

//assegno i led che si dovranno accendere per le colonne
void matrixColsVal(byte value) {
  byte cols = 0x01;                     //dichiaro cols come byte e parto dalla colonna più a sinsitra          
  for (int i = 0; i < 8; i++) {         //faccio un for per scorrere tutte le colonne
    digitalWrite(LEDPin[i], ((value & cols) == cols) ? LOW : HIGH);
    /*se il prodotto tra il valore del byte e il valore di cols è uguale a cols allora imposto quella determinata collona con un livello basaso 
    sennò con un livello alto */
    cols <<= 1;            //bitshift di cols per cambiare colonna 
  }
}

