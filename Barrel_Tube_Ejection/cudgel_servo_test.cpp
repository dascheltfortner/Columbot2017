/**
 * Cudgel Servo Test
 * 
 *  Outlines the ejection mechanism for the tube ejector.
 *  
 *  Author(s): Daschel, Philip
 *  Date:      10/1/16
 */
#include <Servo.h>

Servo ejectorServo;

// Starting and ending positions of the Servo
const int START = 70;
const int END   = 100;

void setup() {
  ejectorServo.attach( 9 );
  ejectorServo.write( START );
}

/*
 * Simple Loop:
 *      Ejects 1 barrel a second
 */
void loop() {
  clobberCudgel();
  delay( 1000 );
}

/**
 * Definition of the function for barrel ejection.
 */
void clobberCudgel() {

  delay( 200 );
  ejectorServo.write( END );
  delay( 200 );
  ejectorServo.write( START );
  
}

