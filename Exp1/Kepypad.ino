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

  // reading the statuts of the button
int val = digitalRead(Button);

// flag of the led is updated when we press the keypad...0 or 1
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
