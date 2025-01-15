#include <ax12.h>
#include <BioloidController.h>

bool hoop; // this is the variable that shows if the hoop is on the camera 
int horizontalCenter
int verticalCenter
int idealLaunching
int launchRelease
void setup() {
  SetPosition(0, 512);// Sets ax12a with ID 0 to position 512 this is horizontal motor
  SetPosition(1, 512);//Sets ax12a with ID 1 to position 512 this is vertical motor
  SetPosition(2, 0);//Sets ax12a with ID 2 to position 0 this is the motor to pull launching mechanism
  SetPosition(3, 0);//Sets ax12a with ID 3 to position 0 this is the motor to release launching mechanism
}

void loop() {

  while (hoop == false){ // if the hoop is not detected by the camera the motors will turn starting at position 0 untill they find the hoop
    i = 0
      SetPosition(0,i) //
      SetPosition(1,i)
        i++

      }
      if (hoop = true){
        SetPosition(0,horizontalCenter);// the motors will move to line up the hoop with the center of camera 
        SetPosition(1,verticalCenter);// the motors will move to line up the hoop with the center of camera 
        SetPosition(2,idealLaunching);// motor pulls back launching mechanism to ideal positoin
        SetPosition(3,launchRelease);// motor release launching mechanism
        SetPosition(2,0); // motor goes back to orignal position before launching
        Setposition(3,0); // motor returns hinge to original position

      }
}


