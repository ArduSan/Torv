int Led1=12;
int Led2=13;

void setup() {
    pinMode(Led1,OUTPUT);
    pinMode(Led2,OUTPUT);

}

void loop() {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led2,LOW);
    delay(1000);
    digitalWrite(Led1,LOW);
    digitalWrite(Led2,HIGH);
    delay(1000);
}
