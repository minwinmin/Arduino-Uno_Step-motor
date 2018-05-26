#include <Arduino.h>
#include "Stepper_28BYJ_48.h"

// Circuit : https://github.com/thomasfredericks/Stepper_28BYJ_48/blob/master/examples/stepper_28BYJ_example/stepper_28BYJ_example.png


Stepper_28BYJ_48 stepper(13,12,11,10);

//////////////////////////////////////////////////////////////////////////////
void setup() {

}

//////////////////////////////////////////////////////////////////////////////
void loop() {
         stepper.step(-1);
}



