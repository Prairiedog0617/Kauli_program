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
     Int path;   // This should be a stack where desried floors get pushed on/popped off.
     Int next_floor;  // Value popped off path tells elevator where to go next.
     Int door_status;  // 1 = open, 0 = closed.
     Int floor_request;  // Receives a floor request from the controller.
     Int elevator_status: // 1 = In operations, 0 = Down for maintenance
     Int trip_cntr;    // Keeps track of trips
     Int trip_max = 100;   // If trip_cntr = trip_max elevator_status = 0;
     
// Public class variables defined below
Public:
//  Public variables

// Public inline functions
    int get_floor(void)  { return (current_floor); }
    int get_direction(void)  { return (direction); }
    int get_next_floor(void)  { return (next_floor); }
    int get_door_state(void)  { return (door_status); }
    int get_status(void)  { return (elevator_status); }
    int get_trip_cnt(void) { return (trip_cntr); }
    void give_floor_request(int service_call) 
    { floor_request = service_call;}

// Class functions
int Class_name::function_name1(const int d, cons tint m, …)
 { // Begin function_name1()

     Return(1);
 } // End function_name1()

float Class_name::function_name2(const int d, cons tint m, …)
 { // Begin function_name2 ()

     Return(1.00);
 } // End function_name2()

} ; // End of class definition

/***********************************************************************************/
// Class name:  class_name
//
// Functionality:
//
// Parameters:
// 
// Modification History:
//
/***********************************************************************************/
Class class_name
{  // Beginning of class definition
// Private class variables defined below
     Int day;
     Int month;
     Int year;
// Public class variables defined below
Public:
//  Public variables

// Public inline functions
   Int get_day(void)
    { return (day); }

// Class functions
int Class_name::function_name1(const int d, cons tint m, …)
 { // Begin function_name1()

     Return(1);
 } // End function_name1()

float Class_name::function_name2(const int d, cons tint m, …)
 { // Begin function_name2 ()

     Return(1.00);
 } // End function_name2()

} ; // End of class definition
/***********************************************************************************/
//					Subroutine Block
// Normal subroutines are considered functions() in the mathematical sense. That is they only
// return a single value.  0 for success and -1 for error.
// 
// In the case of DBI (Database Interface) routines a database handle or statement handle will
// be returned from the appropriate subroutines or when appropriate the list of table rows.
//
// The ‘die’ command is used extensively in this template to force termination on error. This
// will be replaced by whatever error handling system is prescribed by the firm in question.
//
/***********************************************************************************/

/***********************************************************************************/
//  Program Name: sub_name1()
//
// Parameters:  x1 and x2
//
// Description:  General control flow template.
//
// Return values:  x3 and x4
//
/*********************************************************************************/
int sub_name1(int $x1, int $x2)
{ //  Begin 
  
  For ( $var_1 = 0: $var_1 <= 1000  : $var_1 = $var_1 + 1 )
  {  // This for() …

  } // End for()
Foreach  $test_val  (@list  )
{ // This foreach() …


   If ()
   {
      Next;
   }
  Else_if ( )
  {
      Last;
  }
} // End of foreach()

  While()
  { // This while() does …

  }  // End while()

  If ( ) 
   {   }
  Else if () 
  { }
  Else if ()
  { }
  Else
   { }  
 Return (0);
} // End of sub_name1()
 //----------------------------------------------------------------------------


/******************************************************************************/
//   Main Program
//
//
/******************************************************************************/
Void Main()
{ // Begin Main()
// Main Program variable definitions.
Int $rtn_cd;
char $output_file = “c:/documents/c++_file_out.txt”;
float rate;


// Terminate execution of the program.
Exit 0;
// End of Main()

