//const int servo_1 = 11;
//const int servo_2 = 10;
//const int servo_3 = 9;
//const int servo_4 = 6;

#include <Servo.h>

Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;

const int pb_1_a = 13;
const int pb_1_b = 12;
const int pb_2_a = 8;
const int pb_2_b = 7;
const int pb_3_a = 5;
const int pb_3_b = 4;
const int pb_4_a = 3;
const int pb_4_b = 2;

const int potensio_1 = A0;
const int potensio_2 = A1;
const int potensio_3 = A2;
const int potensio_4 = A3;

int val_servo_1 = 0;
int val_servo_2 = 0;
int val_servo_3 = 0;
int val_servo_4 = 0;

int val_pb_1 = 0;
int val_pb_2 = 0;
int val_pb_3 = 0;
int val_pb_4 = 0;

int val_potensio_1 = 0;
int val_potensio_2 = 0;
int val_potensio_3 = 0;
int val_potensio_4 = 0;

// millis untuk val_pb
int interval_A = 300;
int interval_B = 300;
int interval_C = 300;
int interval_D = 300;

unsigned long waktuSebelum_A = 0;
unsigned long waktuSebelum_B = 0;
unsigned long waktuSebelum_C = 0;
unsigned long waktuSebelum_D = 0;

void setup() {
  Serial.begin(115200);
  
  pinMode(servo_1, OUTPUT);
  pinMode(servo_2, OUTPUT);
  pinMode(servo_3, OUTPUT);
  pinMode(servo_4, OUTPUT);

  pinMode(pb_1_a, INPUT);
  pinMode(pb_1_b, INPUT);
  pinMode(pb_2_a, INPUT);
  pinMode(pb_2_b, INPUT);
  pinMode(pb_3_a, INPUT);
  pinMode(pb_3_b, INPUT);
  pinMode(pb_4_a, INPUT);
  pinMode(pb_4_b, INPUT);

  pinMode(potensio_1, INPUT);
  pinMode(potensio_2, INPUT);
  pinMode(potensio_3, INPUT);
  pinMode(potensio_4, INPUT);

  servo_1.attach(11);
  servo_2.attach(10);
  servo_3.attach(9);
  servo_4.attach(6);
}

void loop() {
  unsigned long waktuSekarang_A = millis();
  if(waktuSekarang_A - waktuSebelum_A >= interval_A || waktuSekarang_A < waktuSebelum_A){
    waktuSebelum_A = waktuSekarang_A;
    pb_1();
  }

  unsigned long waktuSekarang_B = millis();
  if(waktuSekarang_B - waktuSebelum_B >= interval_B || waktuSekarang_B < waktuSebelum_B){
    waktuSebelum_B = waktuSekarang_B;
    pb_2();
  }

  unsigned long waktuSekarang_C = millis();
  if(waktuSekarang_C - waktuSebelum_C >= interval_C || waktuSekarang_C < waktuSebelum_C){
    waktuSebelum_C = waktuSekarang_C;
    pb_3();
  }

  unsigned long waktuSekarang_D = millis();
  if(waktuSekarang_D - waktuSebelum_D >= interval_D || waktuSekarang_D < waktuSebelum_D){
    waktuSebelum_D = waktuSekarang_D;
    pb_4();
  }
}

void pb_1(){
  if(digitalRead(pb_1_a) == 1){
    val_pb_1++;
    if(val_pb_1 >= 180){
      val_pb_1 = 180;
    }
  }
  if(digitalRead(pb_1_b) == 1){
    val_pb_1--;
    if(val_pb_1 <= 0){
      val_pb_1 = 0;
    }
  }
}

void pb_2(){
  if(digitalRead(pb_2_a) == 1){
    val_pb_2++;
    if(val_pb_2 >= 180){
      val_pb_2 = 180;
    }
  }
  if(digitalRead(pb_2_b) == 1){
    val_pb_2--;
    if(val_pb_2 <= 0){
      val_pb_2 = 0;
    }
  }
}

void pb_3(){
  if(digitalRead(pb_3_a) == 1){
    val_pb_3++;
    if(val_pb_3 >= 180){
      val_pb_3 = 180;
    }
  }
  if(digitalRead(pb_3_b) == 1){
    val_pb_3--;
    if(val_pb_3 <= 0){
      val_pb_3 = 0;
    }
  }
}

void pb_4(){
  if(digitalRead(pb_4_a) == 1){
    val_pb_4++;
    if(val_pb_4 >= 180){
      val_pb_4 = 180;
    }
  }
  if(digitalRead(pb_4_b) == 1){
    val_pb_4--;
    if(val_pb_4 <= 0){
      val_pb_4 = 0;
    }
  }
}
