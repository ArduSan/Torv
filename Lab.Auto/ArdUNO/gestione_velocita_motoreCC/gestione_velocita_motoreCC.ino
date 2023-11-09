int in1Pin=10;
int in2Pin=9;
int eneable1Pin=11;
bool rotationDir;
int rotationSpeed;

void setup() {
  pinMode(in1Pin,OUTPUT);
  pinMode(in2Pin,OUTPUT);
  pinMode(eneable1Pin,OUTPUT);

}

void loop() {
  int potenVal=analogRead(A0);
  rotationSpeed=potenVal-512;
  if (potenVal>512){
    rotatioDir=true;

  }
  else{
    rotatioDir=false;
  }
  rotationSpeed=abs(potenVal-512);
  driveMotor(rotationDir,map(rotationSpeed, 0, 512, 0, 255));

}

void driveMotor(bool dir, int spd){
  if (rotationDir){
    digitalWrite(in1Pin,HIGH);
    digitalWrite(in2Pin,LOW);
  }
  else {
    digitalWrite(in1Pin,LOW);
    digitalWrite(in2Pin,HIGH);

  }

  analogWrite(eneabe1Pin, constrain(spd, 0, 255));
}
