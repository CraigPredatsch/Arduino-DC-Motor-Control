const int switchPin = 2;                            //Setting variable = 2. Later will be used to tie pin 2 to variable
const int motorPin = 9;                             //Setting variable = 9. Later will be used to tie pin 9 to variable
int switchState = 0;                                //Initial switch state set = 0

void setup() {

  pinMode(switchPin, INPUT);                        //Set pinMode of pin 2 to Input
  pinMode(motorPin, OUTPUT);                        //Set pinMode of pin 9 to Output
  // setup code here, to run once:

}

void loop() {

  switchState = digitalRead(switchPin);             //Have switchState read the digital High or Low coming from pin 2

  if(switchState == HIGH) {                         //If pin 2 is High (The switch is pressed).
    digitalWrite(motorPin, HIGH);                   //Output is high from pin 9 to the motor. The motor will turn on.
  }
  else {
    digitalWrite(motorPin, LOW);                    //If pin 2 is Low, Output is low from pin 9. The motor will stop.
  }
  // main code here, to run repeatedly:

}
