int TOUCH_Pin_1_VALUE; 
int TOUCH_Pin_2_VALUE; 
int TOUCH_Pin_3_VALUE; 
int TOUCH_Pin_4_VALUE; 
int TOUCH_Pin_5_VALUE;

void setup(){
  
  pinMode(Buzzer, OUTPUT);
  Serial.begin(115200);
  delay(2000); 
  
  digitalWrite(Buzzer, LOW);
}


void loop() {
  // put your main code here, to run repeatedly:
  TOUCH_Pin_1_VALUE = touchRead(T5); 
  TOUCH_Pin_2_VALUE = touchRead(T6); 
  TOUCH_Pin_3_VALUE = touchRead(T7); 
  TOUCH_Pin_4_VALUE = touchRead(T8); 
  TOUCH_Pin_5_VALUE = touchRead(T9);

  Serial.print("TOUCH_Pin_Value 1:");
  Serial.print(TOUCH_Pin_1_Value);
  Serial.print("  ");
  Serial.print("TOUCH_Pin_Value 2:");
  Serial.print(TOUCH_Pin_2_Value);
  Serial.print("  ");
  Serial.print("TOUCH_Pin_Value 3:");
  Serial.print(TOUCH_Pin_3_Value);
  Serial.println(" ");
  Serial.print("TOUCH_Pin_Value 4:");
  Serial.print(TOUCH_Pin_4_Value);
  Serial.println(" ");
  Serial.print("TOUCH_Pin_Value 5:");
  Serial.print(TOUCH_Pin_5_Value);
  Serial.println(" ");
  delay(500);
  
  if(TOUCH_Pin_Value_1 < VALUE_THRESHOLD){
    for(int i=0; i<2; i++){
      digitalWrite(Buzzer, HIGH);
      delay(100);
      digitalWrite(Buzzer, LOW);
      delay(100);
    }
  }
  if(TOUCH_Pin_Value_2 < VALUE_THRESHOLD){
     for(int i=0; i<5; i++){
      digitalWrite(Buzzer, HIGH);
      delay(50);
      digitalWrite(Buzzer, LOW);
      delay(50);
    }
  }
  if(TOUCH_Pin_Value_3 < VALUE_THRESHOLD){
    for(int i=0; i<8; i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
    }
  }
  if(TOUCH_Pin_Value_4 < VALUE_THRESHOLD){
    for(int i=0; i<8; i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
  else{
    digitalWrite(2, LOW);
  }
  
}
