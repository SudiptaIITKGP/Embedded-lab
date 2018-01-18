// int ledPinOrange = 7;

int ledPinRed = 2;
int Button = 7;
int flag  = 0;
int val = 0;

void setup() {
  // put your setup code here, to run once:
//pinMode(ledPinOrange, OUTPUT);
pinMode(ledPinRed, OUTPUT);
pinMode(Button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// digitalWrite(ledPinOrange, HIGH);
int val = digitalRead(Button);

//
if(val == HIGH)
{
flag = 1 - flag;
}

if(flag == 1)
{
  digitalWrite(ledPinRed, HIGH);
}
else
{
  digitalWrite(ledPinRed, LOW);
}
}
