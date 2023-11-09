#define JOYSTICK_X A0
#define JOYSTICK_Y A1
#define JOYSTICK_Button 2


void print_joystick_state() {
  
  int x=analogRead(JOYSTICK_X);
  int y=analogRead(JOYSTICK_Y);
  int button = !digitalRead(JOYSTICK_Button);
  x = map(x, 0, 1023, -100, 100);
  y = map(y, 0, 1023, -100, 100);
  
  Serial.print("X: "+String(x));
  Serial.println(",\tY: "+String(y));
  Serial.println(",\tP: "+String(button));
}

String getDirection(){
  int x = analogRead(JOYSTICK_X);
  int y = analogRead(JOYSTICK_Y);
  x = map(x, 0, 1023, -100, 100);
  y = map(y, 0, 1023, -100, 100);
  if ((x<-30) && (abs(x)>abs(y))){    //left
    return "left";  
  }
  if ((x>30) && (abs(x)>abs(y))){     //right
    return "right";
  }
  if ((y>30) && (abs(y)>abs(x)) && (x=y)){     //down
    return "down";
  }
  if ((y<-30) && (abs(y)>abs(x)) && (x=y)){    //up
    return "up";  
  }        
  if (x<=30 && x>=-30 && y<=30 && y>=-30 ){   //still
    return "still";
  }
  if (abs(x)==abs(y)){                      //gestione errore x=y agli estremi 
    Serial.println("diagonal");
    return getDirection();
  }  
}
//> <
bool is_button_pressed(){
  return !digitalRead(JOYSTICK_Button);
}
