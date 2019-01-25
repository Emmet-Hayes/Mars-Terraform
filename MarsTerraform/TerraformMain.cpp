#include <iomanip>
#include "Planet.h" //check out this object to understand the planet class.
#include "Moon.h" //moon class is derived from the planet class.
#include "GlobalFuncs.h" // lots of manually written static functions to call.


int main() { 
	bool loop = true; //boolean flag for the do-while loop coming up.
	do {
		int score; //holds users score on terraforming/colonizing
		string ch = GlobalFuncs::convertToCaps(GlobalFuncs::userInput()); //calls main menu with userInput func
		if (ch == "SKIP") {
			cout << "\nSkipping the alpha testing Planet phase\n";
			loop = false; //ends the repeat of the do-while.
			continue; //skips to the end of the loop, which is no longer going to repeat.
		}
			Planet planet1(ch); //check out the one arg constructor in planet.cpp
			planet1.printInfo(); //prints ALL the information about this new planet.
			Planet planet2 = planet1;
		cout << "\nWould you like to try and COLONIZE? Or attempt to TERRAFORM?\n";
		getline(cin, ch);
		ch = GlobalFuncs::convertToCaps(ch); //convert all alphas to caps, effectively making casing irrelevant.
		if (ch == "COLONIZE" || ch.at(0) == 'C') {
			score = planet1.colonization(); //returns a score (int) after checking conditions on the planet
			GlobalFuncs::grade(score); //prints a letter grade based on the planet's score.
		}
		else if (ch == "TERRAFORM" || ch.at(0) == 'T') {
			score = planet1.terraform(); //works just like the block of code above.
			GlobalFuncs::grade(score);
		}
		else cout << "\nSkipping the Colonization/Terraforming phase.\n";
		cout << "Would you like to MAKE another planet, READ a planet from file, WRITE a planet to file,\nor QUIT??\n";
		getline(cin, ch);
		ch = GlobalFuncs::convertToCaps(ch); //just like lines 16-17
		if (ch == "QUIT" || ch.at(0) == 'Q') {
			loop = false; //break the loop if user wants to quit.
		}
		else if (ch == "READ" || ch.at(0) == 'R') {
			cout << "\nReading from file...\n";
			planet2 = planet1.readPlanet(); //reads using reinterpret_cast of the planet object.
		}
		else if (ch == "WRITE" || ch.at(0) == 'W') {
			cout << "\nWriting to file...\n";
			planet1.writePlanet(planet1); //writes using reinterpret_cast of the planet object.
		}
		else if (ch != "MAKE" || ch.at(0) != 'M') {
			cout << "Couldn't understand your input. ";
		}
	} while (loop == true);
	cout << "\ntesting out some moon objects...\nNo-arg constructor moon\n";
	Moon moon1;
	moon1.printInfo();
	cout << "Press enter to see the moon's parent planet info.\n";
	cin.ignore();
	moon1.printParentInfo();
	cout << "Press enter to see a new moon with a 1-arg constructor.\n named Callisto.\n";
	cin.ignore();
	Moon moon2("Callisto");
	moon2.printInfo();
	cout << "Press enter to see Callisto's parent planet info.\n";
	cin.ignore();
	moon2.printParentInfo();
	cout << "Press enter to see a new moon with a 2-arg constructor.\nAs if Titan orbited Mars..\n";
	cin.ignore();
	Moon moon3("Titan", "Mars");
	moon3.printInfo();
	cout << "Press enter to see Titan's parent planet's info.\n";
	cin.ignore();
	moon3.printParentInfo();
	cout << "Press any key to quit.....\n";
	cin.ignore(1);
	return 0;
}

