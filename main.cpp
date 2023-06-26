/******************************************************************************
* AUTHOR             : Imraan Arbab
*******************************************************************************/

#include "MyHeader.h"

/******************************************************************************
* Boolean Expressions and Functions
* -----------------------------------------------------------------------------
* This Program will determine whether the user is eligible for a military
* academy based on the user's gender, height and weight.
* -----------------------------------------------------------------------------
* INPUT:
*     sex    - The user's sex
*     height - The user's height
*     weight - the user's weight
*
* OUTPUT:
*  acceptanceCount   - The number of candidates that were accepted in the
*  academy
*  acceptancePercent - The percent of candidates accepted.
*  The program will also output after each candidate whether they have been
*  accepted or not. If they have not been accepted, the program will inform the
*  user of what requirements the candidate did not meet.
*******************************************************************************/
int main()
{

	// VARIABLE DECLARATIONS
	int acceptanceCount;                   //CALC & OUTPUT  - The number of
	                                       //candidates accepted.
	int candidateCount;                    //CALC & CALC    - The number of
	                                       //candidates that applied
	char sex;                              // INPUT & CALC  - The user's sex
	int height;                            //INPUT & CALC   - The user's height
    int weight;                            //INPUT & CALC   - The user's weight
    bool acceptableHeight;                 //CALC & CALC    - The weight that
                                           //meets the requirements.
    bool acceptableWeight;                 //CALC & CALC    - The height that
                                           //meets the requirements
    float acceptancePercent;               //CALC & OUTPUT  - The percent of
                                           //candidates that met the
                                           //requirements

    //INITIALIZATIONS
    acceptanceCount = 0;
    candidateCount  = 0;
    //Outputs the print header
    PrintHeader("ASSIGNMENT #", 6, "Boolean Expressions and Functions");

	/**************************************************************************
	 * INPUT - The user will input the candidate's gender, it will be error
	 * checked and the gender will be returned into the sex variable. It will do
	 * the same thing for the candidate's height and weight. No arguments are
	 * needed for the GetGender Function, but arguments are needed for the
	 * GetInteger function for height and weight.
	 **************************************************************************/
     sex = GetGender();

	/**************************************************************************
	 * PROCESSING - The program will loop while the sex is not equal to x. While
	 * the sex is not equal to x, the program will ask for the user's height
	 * and weight and they will be error checked to ensure valid inputs are in
	 * place. The program will also see if the user's height and weight meet the
	 * requirements and their results are stored in the acceptableHeight, and
	 * the acceptableWeight variable. The arguments that must be passed in
	 * before determining if the height and weight meet the academy requirements
	 * are the user's sex, height/weight, minimum and maximum values for
	 * height/weight of men, and minimum and maximum values for height/weight
	 * of women. Once it has been checked, it will output to the user letting
	 * them know if the candidate was accepted or not and if not what
	 * requirements they didn't. The program will increment the number of
	 * candidates after the  height and weight has been checked by the program..
	 **************************************************************************/
     while(sex != 'x' && sex !='X')
     {
      //INPUT - The user's height and weight error checked
      height = GetInteger("Height: ", 24, 110, "***** Invalid height; please "
    		              " enter a height in inches between 24 and 110. "
    		              "*****\n");
      weight = GetInteger("Weight: ", 50, 1400, "***** Invalid weight; please"
    		              "enter a weight in lbs between 50 and 1400. *****\n");
      //PROCESSING
       acceptableHeight = CheckHeightAndWeight(sex, height, 65, 80, 62, 75);
       acceptableWeight = CheckHeightAndWeight(sex, weight, 130, 250, 110, 185);
       acceptanceCount  = CheckAcceptance(acceptableHeight, acceptableWeight,
    		                 acceptanceCount);
       candidateCount = candidateCount + 1;
       cin.ignore(1000,'\n');
       sex = GetGender();
     }

	/**************************************************************************
	 * OUTPUT - The program will check if the acceptanceCount is zero or not to
	 * ensure that the program does not divide by zero. Once that is done, the
	 * program will calculate the acceptancePercent and output the
	 * acceptancePercent along with the number of candidates accepted.
	 **************************************************************************/
     if(acceptanceCount == 0)
     {
    	 cout << endl;
     }
     else
     {
    	 acceptancePercent = float(acceptanceCount) / candidateCount * 100;
    	 cout << setprecision(0) << fixed;
    	 cout << endl;
    	 cout << acceptanceCount << " candidate(s) accepted!" << endl;
    	 cout << "That's " << acceptancePercent << "%" << "!";
     }

     //RESETTING TO DEFAULT
     cout << setprecision(6);
     cout.unsetf(ios::fixed);

    return 0;
}







