//Enumerated Types.cpp -- This program prompts the user to enter his or her
//weight, as well as the name of a planet in the solar system. The program then
//calculates how much the user would weigh on the specified planet.
//CSCI 111-004
//Sources: N/A

#include <iostream>
#include <string>
using namespace std;

enum PlanetType{ MERCURY, VENUS, EARTH, MOON, MARS, JUPITER, SATURN, URANUS, NEPTUNE, PLUTO };
void PrintWeight(PlanetType planet, float weight);

int main(){
	//Define Variables
	PlanetType planet;
	string planetName;
	float weight;

	//Program Introduction and Prompting User to Enter Weight and Planet Name
	cout << "Welcome! This lab will determine how much you weigh\n";
	cout << "on any planet in our solar system, including the moon!\n\n";
	cout << "To begin, how much do you weigh? (Just the number): ";
	cin >> weight;
	cout << "\n";
	cout << "Great! Now, you will select a planet to complete the program. Make sure\n";
	cout << "you type the planet name correctly and that the first letter is capitalized.\n";
	cout << "The planets you can choose from are Mercury, Venus, Earth, Moon, Mars, Jupiter,\n";
	cout << "Saturn, Uranus, Neptune, and Pluto.\n\n";
	cout << "You may now enter the planet name: ";
	cin >> planetName;

	//Checking to see if the first letter is capitalized
	if ((planetName.at(0)) >= 97 && (planetName.at(0)) <= 122){
		cout << "\nInvalid input! Make sure you capitalize the first letter!\n";
		return 0;
	}

	//Comparing string planetName to enumerators
	switch (planetName.at(0))			//Switch statement won't directly read string; toupper
	{                                   //compares each character in the string with the cases.
	case 'M':
		if (planetName.at(1) == 'A')				   //**********************************
			planet = MARS;                             //For this portion of the program, *
		else if (planetName.at(1) == 'E')              //I referenced page 477 for the    *
			planet = MERCURY;                          //animalName example. '1' is for   *
		else if (planetName.at(1) == 'O')              //the second character in the name.*
			planet = MOON;                             //**********************************
		break;
	case 'V':
		planet = VENUS;
		break;
	case 'E':
		planet = EARTH;
		break;
	case 'J':
		planet = JUPITER;
		break;
	case 'S':
		planet = SATURN;
		break;
	case 'U':
		planet = URANUS;
		break;
	case 'N':
		planet = NEPTUNE;
		break;
	case 'P':
		planet = PLUTO;
		break;
	default:
		cout << "\nError: You have either misspelled your planet name or\n";
		cout << "or forgot to capitalize the first letter. Please refer to instructions.\n";
		system("pause");
		return 0;
		break;
	}

	//Execute Void Function
	PrintWeight(planet, weight);

	//Pause screen
	system("pause");
	return 0;
}
//********************************************************************************************
void PrintWeight(PlanetType planet, float weight){
	float PlanetWeight;                 //PlanetWeight is user's weight times planet factor.
	cout << "\nYou weigh ";
	switch (planet)
	{
	case MERCURY:
		PlanetWeight = weight * 0.4155;
		cout << PlanetWeight << " pounds on Mercury.\n";
		break;
	case VENUS:
		PlanetWeight = weight * 0.8975;
		cout << PlanetWeight << " pounds on Venus.\n";
		break;
	case EARTH:
		PlanetWeight = weight * 1.0;
		cout << PlanetWeight << " pounds on Earth.\n";
		break;
	case MOON:
		PlanetWeight = weight * 0.166;
		cout << PlanetWeight << " pounds on the Moon.\n";
		break;
	case MARS:
		PlanetWeight = weight * 0.3507;
		cout << PlanetWeight << " pounds on Mars.\n";
		break;
	case JUPITER:
		PlanetWeight = weight * 2.5374;
		cout << PlanetWeight << " pounds on Jupiter.\n";
		break;
	case SATURN:
		PlanetWeight = weight * 1.0677;
		cout << PlanetWeight << " pounds on Saturn.\n";
		break;
	case URANUS:
		PlanetWeight = weight * 0.8947;
		cout << PlanetWeight << " pounds on Uranus.\n";
		break;
	case NEPTUNE:
		PlanetWeight = weight * 1.1794;
		cout << PlanetWeight << " pounds on Neptune.\n";
		break;
	case PLUTO:
		PlanetWeight = weight * 0.0899;
		cout << PlanetWeight << " pounds on Pluto.\n";
		break;
	}
}