// ScrumSimulator_DevHacks2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Developers.h"

using namespace std;


void initialMenu(int &teamSize, int &sprintDuration) {
	cout << "How many member do you wish to include in your team? [max. 10]\n";
	cin >> teamSize;
	/*
		Aici o sa avem o bucata de cod pentru afisarea programatorilor disponibili.
		Utilizatorul va putea alege ce membrii isi doreste.
	*/
	cout << "How long should the sprint be? [in weeks]\n";
	cin >> sprintDuration;
}


int main()
{
	int teamSize, sprintDuration;

	Developers romani[10];
	for (int i = 0; i < 10; i++)
	{
		romani[i].afisare();
	}

    return 0;
}

