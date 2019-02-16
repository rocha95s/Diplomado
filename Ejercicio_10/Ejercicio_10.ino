int i;
boolean d=0;
void setup() {
  pinMode(11, OUTPUT);// put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

  // put your main code here, to run repeatedly:
  for(i=0;;){
    int sensorValue = analogRead(A0);
    if(i<255&&d==0){
      i++;
    }
    else{
      i--;
    }
    if(i==0&&d==1){
      d=0;
      delay(sensorValue*5);  
    }
    if(i>=255){
      d=1;
      delay(sensorValue*5);  
    }
    
    analogWrite(11,i);
    delay(10);
    }
  }
