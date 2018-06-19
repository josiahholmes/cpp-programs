//Bar Chart.cpp -- This program graphs 24 hourly temperatures on a graph,
// represented by stars (*), where each * is a range of 3 degrees.
// CSCI 111-004

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	//Variables
	ifstream inputFile;
	ofstream outputFile;
	string line = "|";
	string stars = "*";
	int number, count;

	//Open file
	inputFile.open("temp.txt");

	//Test to see if file works
	if (!inputFile){
		cout << "Failed to open input file.";
		return 1;
	}

	//Print heading and scale on screen
	cout << "Temperatures for 24 hours:" << endl;
	cout << setw(6) << "-30" << setw(10) << "0";
	cout << setw(10) << "30" << setw(10) << "60";
	cout << setw(10) << "90" << setw(10) << "120";
	cout << endl;

	//Print temperatures on left side of graph
	while (inputFile >> number){
		cout << number << "\t" << setw(8) << line << endl;
	}

	//Pause screen
	system("pause");
	return 0;
}