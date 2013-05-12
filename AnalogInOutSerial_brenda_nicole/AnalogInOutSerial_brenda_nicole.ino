/*
  Analog input, analog output, serial output
 
 Reads an analog input pin, maps the result to a range from 0 to 255
 and uses the result to set the pulsewidth modulation (PWM) of an output pin.
 Also prints the results to the serial monitor.
 
 The circuit:
 * potentiometer connected to analog pin 0.
   Center pin of the potentiometer goes to the analog pin.
   side pins of the potentiometer go to +5V and ground
 * LED connected from digital pin 9 to ground
 
 created 29 Dec. 2008
 modified 9 Apr 2012
 by Tom Igoe
 
 This example code is in the public domain.
 
 */

// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = A4; 
const int analogInPin2 = A3;// Analog input pin that the potentiometer is attached to
//const int analogOutPin = 9; // Analog output pin that the LED is attached to
const int tiltPin = 9;

int sensorValue = 0;
int sensorValue2 = 0;// value read from the pot
int sensorValue3 = 0;
int outputValue = 0;        // value output to the PWM (analog out)
int outputValue2 = 0;
int outputValue3 = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);  
  pinMode(tiltPin, INPUT);           // set pin to input
  digitalWrite(tiltPin, HIGH);       // turn on pullup resistors
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin); 
  sensorValue2 =   analogRead(analogInPin2);
  sensorValue3 = digitalRead(tiltPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 370, 25, 475);  
//  change the analog out value:
//  analogWrite(analogOutPin, outputValue);           

  // print the results to the serial monitor:
//  Serial.print("stretch sensor = " );                       
//  Serial.print(sensorValue);  
//  Serial.print(','); 
//  Serial.print("\t bend sensor = " );                       
//  Serial.print(sensorValue2);    
//  Serial.print(',');
//  Serial.print("\t tilt sensor = " );                       
//  Serial.print(sensorValue3);    
//  Serial.print(',');
 

//  Serial.print("\t output = ");      
  Serial.println(outputValue); 
//  Serial.print("\t output = ");      
//  Serial.println(outputValue2);     
//  Serial.print("\t output = ");      
//  Serial.println(outputValue3);     
  
  
  //if statement whatever range turn on and off
  //* mulipliziert den wert. zweimal sensor wert=frequency
  
  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(100);   
}
