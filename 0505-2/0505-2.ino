int a = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A1,INPUT);
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a=analogRead(A1);
  Serial.println(a);
  if (a > 700) a = 700;
  else if (a < 20) a = 20;
  int b = map(a,20,700,0,255);
  analogWrite(3,b);
}
