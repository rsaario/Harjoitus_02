#define LED 5
#define LEDON LOW
#define LEDOFF HIGH

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  digitalWrite(LED, LEDON);
}
