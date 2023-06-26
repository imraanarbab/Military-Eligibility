/******************************************************************************
* AUTHOR             : Imraan Arbab
*******************************************************************************/

#include "MyHeader.h"

/******************************************************************************
* FUNCTION CheckAcceptance
* -----------------------------------------------------------------------------
* This function will check if the user's height and weight meet the academy's
* requirements for height and weight. If the user is missing one or both of the
* requirements, then the program will output that the user had not met those
* specific requirements. If the user has met both requirements, then the program
* will output that the user has been accepted. It will also increment the
* acceptanceCount.
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
*     The arguments that need to be passed in are the acceptableHeight, and the
*     acceptableWeight. Both of these variables need to have defined values
*     before being passed in.
*
*     acceptableHeight - Results of comparison with the user's height. True
*     if it matches the requirements, and false if it doesn't.
*     acceptableWeight - Results of comparison with user's weight. True if
*     height entered fits requirements, and false if it doesn't.
*     acceptanceCount  - The number of candidates that meet the requirements.
*
* POST-CONDITIONS
*  The function will output whether or not the user has met the requirements or
*  not. If the user has not met the requirements, then it will inform the user
*  what requirements it did not meet. If the user has met the requirements, then
*  the acceptanceCount will be increased. The acceptanceCount will be returned
*  to main.
*******************************************************************************/
int CheckAcceptance         (bool acceptableHeight,   //IN  - Result of
		                                              //acceptableHeight
		                     bool acceptableWeight,   //IN  - Result of
							                          //acceptableWeight
		                     int  acceptanceCount)    //OUT - The number
                                                      //candidates accepted

{


   if(acceptableHeight && acceptableWeight)
   { //Beginning of IF THEN ELSE IF
	   cout << endl;
	   cout << "This candidate has been ACCEPTED!" << endl << endl;
	   cout << endl;
       acceptanceCount = acceptanceCount + 1;
   }
   else if(!acceptableHeight && !acceptableWeight)
   {
	   cout << "This candidate has been rejected based on the HEIGHT and ";
	   cout << "WEIGHT requirements." << endl << endl;
   }
   else if(!acceptableHeight)
   {
	   cout << "This candidate has been rejected based on the HEIGHT ";
	   cout << "requirement." << endl << endl;
   }
   else if(!acceptableWeight)
   {
   	   cout << endl;
   	   cout << "This candidate has been rejected based on the WEIGHT ";
   	   cout << "requirement." << endl << endl;
   } //END of IF THEN ELSE IF

   return acceptanceCount;
}









