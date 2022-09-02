#define relay 7
char data;
void setup() {
  // put your setup code here, to run once:
pinMode(relay,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(Serial.available()>0){
    data=Serial.read();
    Serial.println(data);
    if(data==0){
    digitalWrite(relay,LOW);
    }

    else if(data==1){
      digitalWrite(relay,HIGH);
      }
  }
}
