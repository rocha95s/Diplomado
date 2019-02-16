
int ad=1700, vu=500;
void setup() {
  pinMode(7, OUTPUT);// put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);

  analogWrite(3,60);
  analogWrite(5,64);
  digitalWrite(7,0);
  digitalWrite(8,1);
  digitalWrite(13,0);
  digitalWrite(12,1); 
  delay(ad);
  
  //vuelta izquierda
  
  analogWrite(3,64);
  analogWrite(5,32);
  digitalWrite(7,0);
  digitalWrite(8,1);
  digitalWrite(13,0);
  digitalWrite(12,1); 
  delay(vu);

  //Adelante
  
  analogWrite(3,60);
  analogWrite(5,64);
  digitalWrite(7,0);
  digitalWrite(8,1);
  digitalWrite(13,0);
  digitalWrite(12,1); 
  delay(ad);

  //vuelta izquierda
  
  analogWrite(3,64);
  analogWrite(5,32);
  digitalWrite(7,0);
  digitalWrite(8,1);
  digitalWrite(13,0);
  digitalWrite(12,1); 
  delay(vu); 

  //Detente
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(13,0);
  digitalWrite(12,0); 
}

void loop() {
  }
