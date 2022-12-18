int TOUCH_Pin_1_VALUE; 
int TOUCH_Pin_2_VALUE; 
int TOUCH_Pin_3_VALUE; 
int TOUCH_Pin_4_VALUE; 
int TOUCH_Pin_5_VALUE;
#define Buzzer 26 
const int VALUE_THRESHOLD = 30;

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

  Serial.print("TOUCH_Pin_VALUE 1:");
  Serial.print(TOUCH_Pin_1_VALUE);
  Serial.print("  ");
  Serial.print("TOUCH_Pin_VALUE 2:");
  Serial.print(TOUCH_Pin_2_VALUE);
  Serial.print("  ");
  Serial.print("TOUCH_Pin_VALUE 3:");
  Serial.print(TOUCH_Pin_3_VALUE);
  Serial.println(" ");
  Serial.print("TOUCH_Pin_VALUE 4:");
  Serial.print(TOUCH_Pin_4_VALUE);
  Serial.println(" ");
  Serial.print("TOUCH_Pin_VALUE 5:");
  Serial.print(TOUCH_Pin_5_VALUE);
  Serial.println(" ");
  delay(500);
  
  if(TOUCH_Pin_1_VALUE < VALUE_THRESHOLD){
    for(int i=0; i<2; i++){
      digitalWrite(Buzzer, HIGH);
      delay(100);
      digitalWrite(Buzzer, LOW);
      delay(100);
    }
  }
  if(TOUCH_Pin_2_VALUE < VALUE_THRESHOLD){
     for(int i=0; i<5; i++){
      digitalWrite(Buzzer, HIGH);
      delay(50);
      digitalWrite(Buzzer, LOW);
      delay(50);
    }
  }
  if(TOUCH_Pin_3_VALUE < VALUE_THRESHOLD){
    for(int i=0; i<8; i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
    }
  }
  if(TOUCH_Pin_4_VALUE < VALUE_THRESHOLD){
    for(int i=0; i<12; i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
    }
  }  
  if(TOUCH_Pin_5_VALUE < VALUE_THRESHOLD){
    for(int i=0; i<15; i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
    }
  }  
  else{
    digitalWrite(2, LOW);
  }
  
}
