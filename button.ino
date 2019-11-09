int ButtonValue = 0;

int Button = 3;
int LED = 2;

void setup() {
  // put your setup code here, to run once:

  pinMode(Button, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ButtonValue = digitalRead(Button);

  if(ButtonValue !=0){
    digitalWrite(LED, HIGH);
    }
    else{
      digitalWrite(LED, LOW);
    }
  }
