#include <LedControl.h> //libreria che gestisce le funzioni del max7219
#include "alphabet.h"   //libreria dove sono specificate tutte le lettere con variabili byte 
//inizializzo i pin dell'integrato max7219 

const int DIN =12;          //DIN == Digital input  
const int CS =11;           //pin di selezione del modulo  
const int CLK = 10;         //pin del clock
LedControl lc = LedControl(DIN, CLK, CS,1); //inizializzo l'oggetto lc, con parametri riportati 
int n; //contatore



//funzione che gestisce il caso in cui l'utente perde, facendo comparire una dopo l'altra le lettere che compongono la scritta game over

void game_over(){
  for (n=0;n<8;n++){
    lc.setRow(0,n,G[n]);
  }
  delay(400);
  for (n=0;n<8;n++){
    lc.setRow(0,n,A[n]);
  }
  delay(400);
  for (n=0;n<8;n++){
    lc.setRow(0,n,M[n]);
  }
  delay(400);
  for (n=0;n<8;n++){
    lc.setRow(0,n,E[n]);
  }
  delay(800);
  for (n=0;n<8;n++){
    lc.setRow(0,n,O[n]);
  }
  delay(400);
  for (n=0;n<8;n++){
    lc.setRow(0,n,V[n]);
  }
  delay(400);
  for (n=0;n<8;n++){
    lc.setRow(0,n,E[n]);
  }
  delay(400);
  for (n=0;n<8;n++){
    lc.setRow(0,n,R[n]);
  }
  delay(800);
}
