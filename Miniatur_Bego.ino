const int servo_1 = 11;
const int servo_2 = 10;
const int servo_3 = 9;
const int servo_4 = 6;

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
}

void loop() {
  // put your main code here, to run repeatedly:

}
