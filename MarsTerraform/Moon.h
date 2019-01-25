#pragma once
#ifndef Moon_H
#define Moon_H
#include "Planet.h"
#include "GlobalFuncs.h"


struct MoonPhysicalProperties {
	double meanRadiusMoons;
	double surfaceAreaMoons;
	double volumeMoons;
	double massMoons;
	double surfaceGravityMoons;
};

class Moon : protected Planet {
private:
	MoonPhysicalProperties moonPhysics;
	string moonName;
	Planet * parentPlanet; //moons have to have a parent planet, otherwise they are not a moon.
public:
	Moon(); //default.
	Moon(string); //1-arg takes string as moon's name to initialize it.
	Moon(string, string);
	void lunaGen();
	void callistoGen();
	void europaGen();
	void titanGen();
	void createNewPlanet();
	void colonization();
	void terraform();
	void printInfo();
	void printParentInfo();
	~Moon();

};
#endif