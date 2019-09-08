int data;
int fan_one = 9;
int fan_two = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  pinMode(fan_one, OUTPUT); 
  pinMode(fan_two, OUTPUT); 
  analogWrite(fan_one,0); //我們設定 9 pin 為 pwm 風扇速度輸出
  analogWrite(fan_two,0); //我們設定 11 pin 為 pwm 風扇速度輸出
}

void loop() {
  if ( Serial.available())
  {
    data = Serial.parseInt();
    analogWrite(fan_one,data); //我們設定 9 pin 為 pwm 風扇速度輸出
    analogWrite(fan_two,data); //我們設定 11 pin 為 pwm 風扇速度輸出
  }
}
