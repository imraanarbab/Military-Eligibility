/******************************************************************************
* AUTHOR             : Imraan Arbab
*******************************************************************************/

#include "MyHeader.h"

/******************************************************************************
* FUNCTION PrintHeader
* -----------------------------------------------------------------------------
* This function will output the class heading, given,the assignment type,
* the assignment number, and the assignment name.
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
*     The arguments that need to be passed in are the
*     asType: assignment type
*     asNum : assignment number
*     asName: assignment name
*
* POST-CONDITIONS
*  The function will output the print heading with the modified asType, asNum,
*  and asName.
*******************************************************************************/
//CONSTANT DECLARATIONS

string name    = "Imraan Arbab";
string CLASS   = "CS 1A";
string SECTION = "MW: 10:30 a - 1:00p";


void PrintHeader(string asType,      //IN - Name of the assignment followed by #
		         int asNum,          //IN - Number of Assignment
		         string asName)      //IN - The name of the Assignment
{
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << name << endl;
	cout << "*  "      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "      << setw(14) << "Section"  << ": " << SECTION  << endl;
	cout << "*  " << asType << setw(2)<< asNum   << ": " << asName << endl;
	cout << "**************************************************\n\n";
	cout << right;
}


