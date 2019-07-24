/*
A simple program to print out chars and their corrosponding int values.

© D. Green 2019.
*/

#include"D:\Visual_Studio_Projects_Cpp_book\std_lib_facilities.h"

int main()
{
	// Set char to the start.
	char letter = 0;

	// Set charValue to zero.
	int charValue = 0;

	// As long as charValue is less than 128.
	/*while (charValue < 128)
	{
		cout << letter << " = " << charValue << '\n';

		++charValue;
		++letter;
	}*/

	/*
	Using a for loop.
	*/



	/*for (int i = 0; i < 128; ++i)
	{
		cout << letter << " = " << charValue << '\n';

		++charValue;
		++letter;
	}*/

	/*
	Uppercase letter and digits only.
	*/

	
	int startCharValue = '0';
	int finCharValue = '9';

	for (int i = startCharValue; i <= finCharValue; ++i)
	{
		cout << i << " = " << char(i) << '\n';
	}

	cout << "#####################################\n";

	int newStartChar = 'A';
	int newEndChar = 'Z';

	for (int i = newStartChar; i <= newEndChar; ++i)
	{
		cout << i << " = " << char(i) << '\n';
	}



	return 0;
}