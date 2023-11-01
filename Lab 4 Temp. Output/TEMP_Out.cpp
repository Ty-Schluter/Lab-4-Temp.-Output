#include "TEMP_Out.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

TEMP_Out::TEMP_Out()  
{
}

TEMP_Out::~TEMP_Out()
{
}

void TEMP_Out::calcTemp()
{
	std::ifstream TempValues("TempValues.dat");// Call the TempValues.dat file for data
	std::string TempScan; // string is for the storing
	int read; // also for storing
	
	TempValues >> read; // collects data
	//USE AT ALL TIMES Ty
	while (TempValues) // Loops for all appropiate TempValues
	{
		
		if (read > 120 || read < -30) // If either is true it will go with the true option. So any values more/less will be ignored.
		{
			TempValues >> read;
			continue; 
		}
		std::cout << read << " ";
		TempValues >> read;
	}
	TempValues.close(); // closes file
}

int TEMP_Out::getTemp()
{
	return 0;
}

void TEMP_Out::EnterStars()
{
	std::ifstream TempValues("TempValues.dat");// Call the TempValues.dat file for data
	std::string TempScan; // Takes a string for colllection
	int read; // something to store the values in
	int starAmount = 0;
	int i = 0;
	
	std::cout << std::endl << "This is Star count:     ";
	TempValues >> read;
	while (TempValues)
	{
		//getline(TempValues, TempScan);
		
		
		if (read > 120 || read < -30)
		{
			//TempValues.ignore(read, '\n');
			TempValues >> read;
			continue;
		}
		starAmount = read / 3; 
		std::cout << starAmount << " ";
		TempValues >> read;

		while (i < starAmount) // Should be giving me stars but isn't. Nearly made me punch a hole in my wall.
		{
			std::cout << "*";
			i++;
		}
	}
	
}

int TEMP_Out::getStars()
{
	return 0;
}

void TEMP_Out::BarGraph()
{
	std::ifstream TempValues("TempValues.dat");// Call the TempValues.dat file for data
	std::string TempScan;
	int read=0;
	int starAmount;
	int i = 0;
	std::cout << std::endl << std::endl <<"**NOTE** Each '*' represnts 3 degrees. This is the bar graph of the file data : " << std::endl;
		std::cout << std::setw(10) << "-30" << std::setw(10) << "0" /* 10+3+10+1 = 24 */ << std::setw(10) << "30" /* 24+10+2 = 36 */ <<  std::setw(10) << "60" << std::setw(10) << "90" << std::setw(9) << "120" << std::endl; // Makes the x axis of the graph
		TempValues >> read;
		
		while (TempValues)
		{
			
				if (read > 120 || read < -30)
				{
					TempValues >> read;
					continue;
				}

				std::cout << std::setw(4) << read << "}-" << std::setw(14) << "|" << "*" << std::endl; // Makes y axis of graph
				
				TempValues >> read;
        }

		// I'm really sorry but I just can't figre out how to get the stars to where they need to be.
		// I assume you use the loop below this comment in a seperate function to sort of confuse the reading marker.
		
}

/*while (i < starAmount)
			{
				std::cout << "*";
				i++;
			}*/
int TEMP_Out::getGraph()
{
	return 0;
}

