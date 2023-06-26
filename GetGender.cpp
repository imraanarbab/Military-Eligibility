/******************************************************************************
* AUTHOR             : Imraan Arbab
*******************************************************************************/

#include "MyHeader.h"

/******************************************************************************
* FUNCTION GetGender
* -----------------------------------------------------------------------------
* This function will ask the user for their gender and error check it to ensure
* that the user has entered a valid gender. The input will the be stored in the
* sex variable.
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
*     There are no arguments being passed in.
*
* POST_CONDTIONS
*  The function will return userGender, which is the user's gender once it has
*  been error checked.
*******************************************************************************/
char GetGender()
{   //Beginning of Definition

	//CONSTANT DECLARATIONS
	const int PROMPT_SIZE = 8;

	// VARIABLE DECLARATIONS
	char userGender;                    //INPUT & CALC - The user's gender
	bool invalid;                       //CALC  & CALC - The result of whether
	                                    //the gender is valid or not
	invalid = false;


    do
    {
    	cout << "Please enter the candidate's information (enter 'X' to exit)";
    	cout << endl;
    	cout << left << setw(PROMPT_SIZE) << "Sex: ";
    	cin.get(userGender);
    	cin.ignore(1000,'\n');

    	if(userGender == 'm' || userGender == 'M' || userGender == 'f' ||
    	   userGender == 'F' || userGender == 'x' || userGender == 'X')
    	{  //BEGINNING OF IF THEN ELSE STATEMENT
    		invalid = false;
    	}
    	else
    	{
    		invalid = true;
    	} //END OF IF THEN ELSE STATEMENT
    	if(invalid)
    	{
    		cout << "***** Invalid gender; please enter M or F *****" << endl;
    	}
    }while(invalid);

     return userGender;
}  //End of Definition










