//-----------------------------------------------------------------------------

#include <iostream>
#include <time.h>		// Used for srand for number generation
#include <array>		// Used for array allocation and use
#include <algorithm>		// Used for sort() function
#include <limits>		// Used for Pause function

using namespace std;

//-----------------------------------------------------------------------------
// Usage

/*
Technical programming test given by S3 for comparing array numbers
to find min and max numbers. Written a few different ways for demonstration 
in C++.
*/

//-----------------------------------------------------------------------------

void Compare_1(array<int, 100> numbers)
{
	// Sort the array of numbers, output the first number as lowest, and
	// output the last number as highest of sorted list.

	sort(numbers.begin(), numbers.end());

	cout << "Compare Function 1" << endl;

	cout << "Min: " << numbers[0] << endl;
	cout << "Max: " << numbers[99] << endl;

}// End Compare_1

//-----------------------------------------------------------------------------

void Compare_2(array<int, 100> numbers)
{
	// Use for loop to iterate through array comparing and finding Min/Max
	// Array size of 100

	int Min = numbers[0];
	int Max = numbers[0];

	for (int i = 0; i < 100; i++)
	{
		if (Min > numbers[i])
		{
			Min = numbers[i];
		}
		else if (Max < numbers[i])
		{
			Max = numbers[i];
		}
	}// End for

	cout << "Compare Function 2" << endl;
	cout << "Min: " << Min << endl;
	cout << "Max: " << Max << endl;

}// End Compare_2

//-----------------------------------------------------------------------------

void fill_Array(array<int, 100>& numbers)
{
	for (int i = 0; i < 100; i++)	// Fill array
	{
		numbers[i] = rand() % 9999;
	}
}

//-----------------------------------------------------------------------------

int main()
{

	srand(time(NULL));			// Seed rand to clock time

	array<int, 100> numbers;		// Allocate an array

	fill_Array(numbers);			// Fill array with random numbers
	
	Compare_1(numbers);			// Output Min/Max
	cout << endl;

	Compare_2(numbers);			// Output Min/Max

	cout << endl;

//-----------------------------------------------------------------------------
	// Alternative for system("pause")
	// Requires #include <limits>
	
	cin.clear();
	cin.sync();

	if (cin.rdbuf()->in_avail())
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Press ENTER to continue . . .";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

//-----------------------------------------------------------------------------

	return 0; // Close program
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
