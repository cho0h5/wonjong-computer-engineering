#include <Servo.h>

Servo myservo;         // 서보모터 선언

void setup() {
  myservo.attach(9);   // myservo.attach(서보모터 연결한 핀) : 서보모터 초기화
}

void loop() {          //loop
  myservo.write(180);  // myservo.write(원하는 각도) : 원하는 각도로 설정
  delay(1000);         // delay(밀리 초) : 밀리 초만큼 delay (1000ms = 1s)
  
  myservo.write(0);
  delay(1000);
}
