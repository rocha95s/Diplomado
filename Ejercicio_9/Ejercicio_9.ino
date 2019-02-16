int i;
boolean d=0;
void setup() {
  pinMode(7,8, OUTPUT);// put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;;){
    if(i<255&&d==0){
      i++;
    }
    else{
      i--;
    }
    if(i==0&&d==1){
      d=0;
      delay(3000);  
    }
    if(i>=255){
      d=1;
      delay(2000);  
    }
    
    analogWrite(11,i);
    delay(10);
    }
  }

  
