#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor RFM = motor(PORT16, ratio18_1, false);
motor RBM = motor(PORT13, ratio18_1, false);
motor LFM = motor(PORT3, ratio18_1, true);
motor LBM = motor(PORT10, ratio18_1, true);
encoder sideTrack = encoder(Brain.ThreeWirePort.E);
motor intake = motor(PORT20, ratio18_1, true);
motor cata = motor(PORT9, ratio36_1, true);
motor endgame = motor(PORT11, ratio18_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}