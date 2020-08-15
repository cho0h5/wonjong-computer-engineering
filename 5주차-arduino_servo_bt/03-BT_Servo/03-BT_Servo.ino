#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial BTSerial(2, 3);
Servo myservo;

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  myservo.attach(9);
}

void loop() {
  if(BTSerial.available()) {
    char data = BTSerial.read();  // 블루투스로 받은 값을 변수 data에 저장
    
    if(data == 'a') {             // data가 a면
      myservo.write(180);         // 서보모터 180도로 설정
    } else if(data == 'b') {
      myservo.write(0);
    }
    
  }
}
