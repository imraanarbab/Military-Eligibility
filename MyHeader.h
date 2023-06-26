/******************************************************************************
* AUTHOR             : Imraan Arbab
*******************************************************************************/

//Name of the header file
#ifndef MYHEADER_H_
#define MYHEADER_H_

//Preprocessor Directives
#include <iostream>     /* cout, cin */
#include <iomanip>      /* setprecision(), fixed */
using namespace std;

//Function prototypes

/******************************************************************************
* PrintHeader
* This function will output the class heading, given,the assignment type,
* the assignment number, and the assignment name.
*******************************************************************************/

void PrintHeader(string asType,     //IN - Name of the assignment followed by #
		         int asNum,         //IN - Number of Assignment
		         string asName);    //IN - The name of the Assignment

/******************************************************************************
* GetGender
* This function will ask the user for their gender and error check it to ensure
* that the user has entered a valid gender. The input will the be stored in the
* sex variable.
*******************************************************************************/
char GetGender();

/******************************************************************************
* GetInteger
* This function will prompt the user for their height/weight, and pass in
* the minimum and max values for height/weight. The
* error message passed in tells the user whether they have entered an invalid
* height or weight. If the value entered by the user is invalid, then the error
* message will pop up, and tell the user to enter a valid value between the
* ranges of the minimum and maximum value. The valid value will get returned to
* main and stored in the height and weight variable.
*******************************************************************************/
int GetInteger(string prompt,         //IN - The prompt for the user. Asks for
		                              // height/weight.
		       const int MIN_VALUE,   //IN - The minimum value for height/weight
		       const int MAX_VALUE,   //IN - The maximum value for height/weight
		       string errorMessage);  //IN - The error message. It will either
                                      //tell the user that their weight entered
                                      // is invalid or their height is invalid.
/******************************************************************************
* CheckHeightAndWeight
* This function will pass in the user's sex, the user value from the GetInteger
* function, the minimum value for height or weight for males or females, and
* the maximum values for height or weight for males or females. If the value
* passed in is weight then the maximum and minimum weights for weight will be
* passed in. The specific minimum and maximum values for weight will be
* dependent upon the user's sex. The minimum and maximum values are constants
* and will not be changed. The results of the compounded boolean expression
* will be returned to the user and stored in the acceptableHeight and
* acceptableWeight variables. Note that these values are used to check if the
* user meets the requirements of the academy or not.
*******************************************************************************/

bool CheckHeightAndWeight(char sex,               //IN - The user's valid sex
		                  int value,              //IN - The user's valid height
						                          // /weight.
		                  const int MIN_VALUE_M,  //IN - The minimum value for
						                          // height/weight for males
		                  const int MAX_VALUE_M,  //IN - The maximum value for
						                          // height/weight for males
						  const int MIN_VALUE_F,  //IN - The minimum value for
						                          //height/weight for females
						  const int MAX_VALUE_F); //IN - The maximum value for
                                                  //height/weight for females.

/******************************************************************************
* CheckAcceptance
* This function will check if the user's height and weight meet the academy's
* requirements for height and weight. If the user is missing one or both of the
* requirements, then the program will output that the user had not met those
* specific requirements. If the user has met both requirements, then the program
* will output that the user has been accepted. It will also increment the
* acceptanceCount.
*******************************************************************************/
int CheckAcceptance(bool acceptableHeight,     //IN - True or false. Whether
		                                       // the user's height met the
		                                       //height requirements or not
		            bool acceptableWeight,     //IN - True or false. Whether the
					                           //user's weight met the
					                           //requirements or not.
		            int  acceptanceCount);     //IN - THe amount of users that
                                               //met the requirements


#endif /* MYHEADER_H_ */
