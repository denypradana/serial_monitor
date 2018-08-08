const int LED = 13;
int timeDelay = 3000;
void setup() {
Serial.begin(9600);
Serial.println("pin 13 as OUTPUT");
pinMode(LED, OUTPUT);
Serial.println("LED = ON, selama timeDelay = 3 detik");
digitalWrite(LED, HIGH);
delay(timeDelay);
}
void loop() {
if(timeDelay <= 100){
Serial.println("Reset timeDelay to 1000");
timeDelay = 1000;
}
Serial.println();
Serial.print("timeDelay = ");
Serial.println(timeDelay);

Serial.println("LED = OFF");
digitalWrite(LED, LOW);
delay(timeDelay);
Serial.println("LED = ON");
digitalWrite(LED, HIGH);
delay(timeDelay);
timeDelay = timeDelay - 100;
}
