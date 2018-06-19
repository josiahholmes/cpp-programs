#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	//Variables
	ofstream outputFile;
	ifstream inputFile;
	int temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12;
	float avgTemp;

	//Open file
	outputFile.open("tempdata.dat");

	//User prompt
	cout << "Enter twelve temperatures, either positive or negative," << endl;
	cout << "including a space between each one." << endl << endl;
	cin >> temp1 >> temp2 >> temp3 >> temp4 >> temp5 >> temp6 >> temp7 >> temp8 >> temp9 >> temp10 >> temp11 >> temp12;

	//Send data to file
	outputFile << temp1 << "\n";
	outputFile << temp2 << " " << temp2 - temp1 << "\n";
	outputFile << temp3 << " " << temp3 - temp2 << "\n";
	outputFile << temp4 << " " << temp4 - temp3 << "\n"; 
	outputFile << temp5 << " " << temp5 - temp4 << "\n"; 
	outputFile << temp6 << " " << temp6 - temp5 << "\n";
	outputFile << temp7 << " " << temp7 - temp6 << "\n"; 
	outputFile << temp8 << " " << temp8 - temp7 << "\n"; 
	outputFile << temp9 << " " << temp9 - temp8 << "\n";
	outputFile << temp10 << " " << temp10 - temp9 << "\n";
	outputFile << temp11 << " " << temp11 - temp10 << "\n";
	outputFile << temp12 << " " << temp12 - temp11 << "\n";

	//Close file
	outputFile.close();

	//Open file
	inputFile.open("tempdata.dat");

	//Read user input
	inputFile >> temp1;
	inputFile >> temp2;
	inputFile >> temp3;
	inputFile >> temp4;
	inputFile >> temp5;
	inputFile >> temp6;
	inputFile >> temp7;
	inputFile >> temp8;
	inputFile >> temp9;
	inputFile >> temp10;
	inputFile >> temp11;
	inputFile >> temp12;

	//Close file
	inputFile.close();

	//Calculate average
	avgTemp = ( temp1 + temp2 + temp3 + temp4 + temp5 + temp6 + temp7 + temp8 + temp9 + temp10 + temp11 + temp12 ) / 12;
	
	//Output average
	cout << "The average of your temperature values is " << avgTemp << " degrees." << endl;

	//Pause screen
	system("pause");
	return 0;
}