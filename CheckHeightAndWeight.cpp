/******************************************************************************
* AUTHOR             : Imraan Arbab
*******************************************************************************/

#include "MyHeader.h"

/******************************************************************************
* FUNCTION CheckHeightAndWeight
* -----------------------------------------------------------------------------
* * This function will pass in the user's sex, the user value from the GetInteger
* function, the minimum value for height or weight for males or females, and
* the maximum values for height or weight for males or females. If the value
* passed in is weight then the maximum and minimum weights for weight will be
* passed in. The specific minimum and maximum values for weight will be
* dependent upon the user's sex. The minimum and maximum values are constants
* and will not be changed. The results of the compounded boolean expression
* will be returned to the user and stored in the acceptableHeight and
* acceptableWeight variables. Note that these values are used to check if the
* user meets the requirements of the academy or not.
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
*     The arguments that need to be passed in are the user's sex, the height or
*     weight value entered by the user, the minimum and maximum values for
*     height/weight for males, and the minimum and maximum values for height/
*     weight for females.
*
*     sex         - The user's sex
*     value       - The valid height/weight entered by the user
*     MIN_VALUE_M - The minimum value for height/weight for males
*     MAX_VALUE_M - The maximum value for height/weight for males
*     MIN_VALUE_F - The minimum value for height/weight for females
*     MAX_VALUE_F - The maximum value for height/weight for females
*
* POST-CONDITIONS
*  The function will return either true or false to the boolean variables
*  acceptableHeight and acceptableWeight depending if the height entered fits
*  the requirements or not.
*******************************************************************************/
bool CheckHeightAndWeight(char sex,                 //IN - The user's valid sex
		                  int value,                //IN - The user's valid
						                            //height/weight
						  const int MIN_VALUE_M,    //IN - The minimum value for
						                            //height/weight for males
		                  const int MAX_VALUE_M,    //IN - The maximum value for
						                            //height/weight for males
						  const int MIN_VALUE_F,    //IN - The minimum value for
						                            //height/weight for females
						  const int MAX_VALUE_F)    //IN - The maximum value for
                                                    //height/weight for females
{





	return             ((sex == 'M' || sex == 'm') && (value >= MIN_VALUE_M &&
                        value <= MAX_VALUE_M)) ||
						((sex == 'F' || sex == 'f') &&
			            (value >= MIN_VALUE_F && value <= MAX_VALUE_F));



}







