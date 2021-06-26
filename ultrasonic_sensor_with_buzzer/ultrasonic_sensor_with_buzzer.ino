
const int trigPin = 2;
const int echoPin = 4;
const int buzzer = 9;
                            
long duration;
int distance;
int safetyDistance;
 
            
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT); 

pinMode(buzzer, OUTPUT);
Serial.begin(9600); 
}
 
 
void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(5);
 digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
 
duration = pulseIn(echoPin, HIGH);

 
distance= duration*0.034/2;
 
safetyDistance = distance;
if (safetyDistance <= 10)
{
  digitalWrite(buzzer, HIGH);
}
else{
  digitalWrite(buzzer, LOW);
}
 
Serial.print("Distance: ");
Serial.println(distance);
delay(1000);
}                                 
