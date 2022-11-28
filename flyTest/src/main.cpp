/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Ayush                                            */
/*    Created:      Thu Nov 24 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// fly1                 motor         3               
// fly2                 motor         2               
// distSense            distance      5               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;


bool flyon = false;

void tog(){
  flyon = !flyon;
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  Controller1.ButtonR2.pressed(tog);

  double flyPow = 100;

  while(true){
    


    if(flyon){
      fly1.spin(forward, flyPow, percent);
      fly2.spin(forward, flyPow, percent);
    } else {
      fly1.stop(coast);
      fly2.stop(coast);
    }


    wait(20, msec);
  }
  
}
