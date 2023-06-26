/******************************************************************************
* AUTHOR             : Imraan Arbab
*******************************************************************************/


#include "MyHeader.h"

/******************************************************************************
* FUNCTION GetInteger
* -----------------------------------------------------------------------------
* This function will prompt the user for their height/weight, and pass in
* the minimum and max values for height/weight. The
* error message passed in tells the user whether they have entered an invalid
* height or weight. If the value entered by the user is invalid, then the error
* message will pop up, and tell the user to enter a valid value between the
* ranges of the minimum and maximum value. The valid value will get returned to
* main and stored in the height and weight variable.
* -----------------------------------------------------------------------------
* PRE-CONDTIONS
*     The arguments must be defined before being passed in.
*     prompt: Prompts the user for their height/weight
*     MIN_VALUE : The minimum value for height/weight. The MIN_VALUE for weight
*     is different than the MIN_VALUE for height
*     MAX__VALUE: The maximum value for height/weight. The MAX_VALUE is
*     different for height and weight
*     errorMessage: The program will display an error message letting the user
*     know if their height or weight is out of the valid range
*
*
* POST_CONDITIONS
*  The function will return the userValue into the height and weight variables.
*******************************************************************************/
int GetInteger(string prompt,              //IN - The prompt for the user. Asks
		                                   //for height/weight
		       const int MIN_VALUE,        //IN - The minimum value for
			                               // height/weight
			   const int MAX_VALUE,        //IN - The maximum value for
			                               // height/weight
		       string errorMessage)        //IN - The error message. It will
                                           //either tell the user that their
                                           //weight entered is invalid or their
                                           //height is invalid
{ //Begin of Definition

   //VARIABLE DECLARATIONS
   int userValue;                     //INPUT & CALC - The user's height
   bool invalid;                      //CALC  & CALC - The result of whether the
                                      //height is valid or not

   do
   { //Begin Do While
	   cout << prompt;
	   cin  >> userValue;
	   invalid = (userValue < MIN_VALUE || userValue > MAX_VALUE);
	   if(invalid)
	   {
		   cout << errorMessage;
	   }

   }while(invalid); //END Do While

   return userValue;


} //End of Definition







