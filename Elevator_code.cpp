/*****************************************************************************/
// Copyright 2/28/2017 Richard L Tanner Jr
//
// System Design
//
// Program Name:  Program Challenge Elevator Dispatch program
//
// Purpose of Program:  To Illustrate coding and problem solving skills.
//
// Date Written: 02/28/2017
// 
// External Parameters: None at this time.
// 
// Program Return Code:  0 = Success,   -1 = Failure.
//
// Author: Richard L Tanner Jr.
//
// Modification History
//
//   Date:
//
// Name:
// 
// Modification Description:
//
//
/*************************************************************************************/

#include <iostream.h>
#include <string.h>
#include <stdio.h>
#inculde <iomanip.h>
#include “ip_link.h”


/***********************************************************************************/
//					Class Definition Block
// Classes are defined below
//
/***********************************************************************************/


/***********************************************************************************/
// Class name:  Elevator
//
// Functionality: To allow elevator instances in main code that will feed
//                information about the state of the elevator to be given 
//                back to the main controller so dispatch decsions based on
//                service requests can be addressed
//
// Parameters:
// 
// Modification History:
//
/***********************************************************************************/
Class Elevator
{  // Beginning of class definition
// Private class variables defined below
     Int current_floor;
     Int direction;  // 1 = up, -1 = down
     Int empty_state;  // 1 = Occupieed, 0 = Empty
     Stack path;   // This should be a stack where desried floors get pushed on/popped off.
                   // Flaw in this design it should be a FIFO rather than a LIFO. 
     Int next_floor;  // Value popped off path tells elevator where to go next.
     Int door_status;  // 1 = open, 0 = closed.
     Int floor_request;  // Receives a floor request from the controller.
     Int elevator_status: // 1 = In operations, 0 = Down for maintenance
     Int trip_cntr;    // Keeps track of trips
     Int trip_max;   // If trip_cntr = trip_max elevator_status = 0;
     
// Public class variables defined below
Public:
//  Public variables
Elevator()
{ // Begin Constructor
   current_floor = 1;  // Start at ground floor.
   direction = 1;      // Assume elevator needs to go up.
   empty_state = 0;    // Assume elevator is empty.
   next_floor = 1;     // Next floor should be same as bottom to start.
   door_status = 0;    // Doors start out closed.
   floor_request = 1;   // Initialize floor request to 1.
   elevator_status = 1; // Assume maintiance was peformed to get elevators running.
   trip_cntr = 0;       // Initializ trip_cntr to 0 for new day.
   trip_max = 100;
   
}; // End Constructor
~Elevator();

// Public inline functions
    int get_floor(void)  { return (current_floor); }
    int get_direction(void)  { return (direction); }
    int get_next_floor(void)  { return (next_floor); }
    int get_door_state(void)  { return (door_status); }
    int get_status(void)  { return (elevator_status); }
    int get_trip_cnt(void) { return (trip_cntr); }
    

// Class functions
int Elevator::floor_request(int service_call)
 { // Begin floor_request() Addressed controllers need to send empty elevator to new floor.
     if(elevator_status == 1 door_status == 0 && empty_state == 0 )
     { // Elevator Operational , door closed and empty, ok to address service request.
       floor_request = service_call;
       push(path, floor_request);
       return(0);  // Service request submitted
     }
     else
     {
       return(1); // Service request declined
     }
     Return(1);
 } // End floor_request()


int Elevator::new_floor(int next_floor,int Top_Floor, int Bottom_Floor)
 { // Begin new_floor() Addresses the customer request for a new floor within the elevator.
     if(elevator_status == 1 && next_floor < Top_Floor && next_floor > Bottom_Floor)
     { // Elevator Operational. and desired floor in range of building.
       push(path, next_floor);
       return(0);  // Service request submitted
     }
     else
     {
       return(1); // Service request declined
     }
     Return(1);
 } // End new_floor()
 
 int Elevator::move_to_next_floor(int next_floor)
 { // Begin move_to_next floor.
     if(elevator_status == 1 )
     { // Elevator Operational.
       current_floor = next_floor;
       pop(path, next_floor);
       door_status = 1;  // New floor open door.
       trip_cntr++;
       return(0);  // Service request submitted
     }
     else
     {
       return(1); // Service request declined
     }
     
 } // End new_floor()


} ; // End of class definition

/***********************************************************************************/
// Class name:  Dispatch
//
// Functionality: This object retrieves floor requests from elevator hardware and will
//                reconcile elevator paths to accomodate empty and passing-by 
//                elevators to addresse waiting clients.
//
// Parameters:
// 
// Modification History:
//
/***********************************************************************************/
Class Dispatch
{  // Beginning of class definition
// Private class variables defined below
    
// Public class variables defined below
Public:
//  Public variables

// Public inline functions
   

// Class functions
int Class_name::function_name1(const int d, cons tint m, …)
 { // Begin function_name1()

     Return(1);
 } // End function_name1()



} ; // End of class definition


/******************************************************************************/
//   Main Program
//
//
/******************************************************************************/
Void Main()
{ // Begin Main()
// Global Program variable definitions.
  int Elevator_cnt = 4;
  int Top_Floor = 4;
  int Bottom_Floor = 1;
  int loop_cntrl = 1;
  // Initialize Elevators: Assume building opens at 8:00 and you start with all on floor 1
  // Instantiate Elevators
  Elevator Ele_1;
  Elevator Ele_2;
  Elevator Ele_3;
  Elevator Ele_4;
  // Assume the object constructors initialize all Elevator Internals and sends them to ground floor.
  
// Central Control loop.
 While(loop_cntrl)
 { Primary loop control to manage elevator dispatch control
   
    // Query status of each elevator: Operational,Current_floor,direction,next_floor,Door Status?.
     //Get floor service requests from elevator hardware
    // From Direction, current floor and next floor and status determine which elevators get sent to another floor
    // Send service calls to priortized elevators.
    // Move elevators, update trip counters adjust operational status if needed
    // if operational, open elevator doors to allow people in.
    // Get internal elevator floor requests from occupants
    // close elevator doors.
    // Reconcile elevator paths to floor service requests and empty or passing-by elevators.
    // Upate prioritzed elevator paths
    // Move elevators to 'next floor', update trip counters  
   
    //  
 }

 ~Elevator();
// Terminate execution of the program.
Exit 0;
// End of Main()

