#pragma once
#ifndef GLOBALFUNCS_H
#define GLOBALFUNCS_H
#include <iostream>
#include <string>
using namespace std;

static class GlobalFuncs {
public:
	static string convertToCaps(string s) {
		string newS = ""; //converts all lowercaseletters to uppercase
		for (int i = 0; i < s.size(); i++) {
			if (s.at(i) >= 'a' || s.at(i) <= 'z') {
				newS.push_back(toupper(s.at(i)));
			}
		}
		return newS;
	}

	static string userInput() { //used to display the main menu.
		string ch;
		cout << "/---------------------------------------------------"
			"------------------------------------------------------\\\n"
				"P\tL\tA\tN\tE\tT\tS\t A  N  D \t M\tO\tO\tN\tS\n\t\t\t\t\t\t~The Game~\n\\"
			"--------------------------------------------------------------------------"
			"-------------------------------/\ncreated by Slem\n...Some planets are already"
			" in the system...\n\nMERCURY\nVENUS\nEARTH\nMARS\nJUPITER\nSATURN\n\n"
				"Simply type one of the uppercase names above, or type \"CREATE\" if "
			"you want to create a new world altogether,\nor type \"READ\" to read a "
			"world from the save file, or type \"SKIP\" to skip to moon pre-alpha testing.\nThen, press the enter key.\n(not case sensitive)\n";
		getline(cin, ch);
		return ch;
	}

	static void grade(int g) { //grades the returned score from terraform and colonization functions in planet.h
		if (g >= 100) cout << g << "  S rank (Perfect)\n";
		else if (g >= 90) cout << g << " A rank (Amazing)\n";
		else if (g >= 80) cout << g << " B rank (Competitive)\n";
		else if (g >= 70) cout << g << " C rank (Average)\n";
		else if (g >= 60) cout << g << " D rank (Low)\n";
		else cout << g << " F rank (Fail)\n";
	}
};
#endif
