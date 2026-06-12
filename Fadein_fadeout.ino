
//const is used to make variables read-only, so its values can't be changed
const int pin = 11;
int Brightness = 0;
int fadevelocity = 2;



void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Output the current brightness value to the LED using PWM.
  analogWrite(pin, Brightness); 
  
  Brightness = Brightness + fadevelocity;
  
  
  //Prevent the value from exceeding PWM limits(255)
  if (Brightness >= 255) {
    Brightness = 255;             
    fadevelocity = -fadevelocity;  //Makes velocity negative. Next cycles will do: Brightness + (-fadevelocity), causing a Fade Out.
  }
  else if (Brightness <= 0) {
    Brightness = 0;               
    fadevelocity = -fadevelocity;  //Makes velocity positive. Next cycles will do: brightness + fadevelocity, causing a Fade In.
  }
  
  //Pause for 30ms to make the fading smooth and visible to the human eye.
  delay(30);
  
  

}
