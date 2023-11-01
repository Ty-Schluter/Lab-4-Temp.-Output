/*
Name: Ty Schluter
Lab Name : Lab 4 Temperature Output
• Description : Design and write a C++ program that inputs a series of hourly temperature
from a file, and outputs a bar chart(using stars) of the temperatures.The temperature
should be printed to the left of the corresponding bar, and there should be a heading
that gives the scale of the chart.The range of temperatures should be from - 30 to 120.
Because it is hard to display 150 characters on the screen, you should have each star
represent a range of 3 degrees.That way, the bars will be at most 50 characters wide.
Use meaningful variable names, proper indentation, and appropriate comments.
Thoroughly test the program using your own data sets.Make sure to vet the values from
the input file.Use good programming practices including, classes, comments, and
pre / post conditions.
• Total points possible : 20 points
*/

#include <iostream>
#include <cmath>
#include <fstream>
#include "TEMP_Out.h"
#include <string>


using namespace std;

// Temp Values MIXED : -24 -10 1 23 43 65 25 37 58 69 10 29 57 100 57 -26 -30 -1 98 120 130 -31 26 45

// Temp Values ORDERED: -31 -30 -26 -24 -10 -1 1 10 23 25 26 29 37 43 45 57 57 58 65 69 98 100 120 130


int main()
{
	TEMP_Out t; // gives the class an "operater"


	std::cout << "This is the file data: ";// outputs the data to the screen
	t.calcTemp(); // Calls the function
	t.EnterStars(); // Calls the function
	t.BarGraph(); // Calls the function
	return 0;
}