
int i=0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  attachInterrupt(0,Enciende,RISING);
  digitalWrite(LED_BUILTIN, HIGH); 
}

// the loop function runs over and over again forever
void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
}
   


void Enciende(){ 
   for(i=0;i<10;i++){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100000); 
}
}
