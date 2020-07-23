#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor FrontRight = motor(PORT2, ratio18_1, true);
motor BackRight = motor(PORT3, ratio18_1, false);
motor BackLeft = motor(PORT8, ratio18_1, true);
motor FrontLeft = motor(PORT9, ratio18_1, false);
motor LeftLift = motor(PORT1, ratio18_1, true);
motor RightLift = motor(PORT10, ratio18_1, false);
motor LeftIntake = motor(PORT20, ratio18_1, true);
motor RightIntake = motor(PORT4, ratio18_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}