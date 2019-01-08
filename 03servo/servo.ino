#include <Servo.h>
Servo servo;

int servo_Pin=9;
int min_value=544; //펄스폭 최소값 0도
int max_value=2400;//펄스폭 최대값 180도
int x;


void setup() {
   Serial.begin(9600);
   Serial.println("Servo Value = ? ");
   //x=servo.read();
   //Serial.println(x);
   //서보 모터 초기화
   servo.attach(servo_Pin,min_value,max_value); 
   servo.write(90);//서보모터 중심찾기
 
   
}

void loop() {
  
    int servo_value=Serial.parseInt();
    servo.write(servo_value);
    
    
   
    Serial.println(servo_value);
    
}
