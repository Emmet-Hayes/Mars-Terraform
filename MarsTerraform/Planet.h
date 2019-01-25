#pragma once
#ifndef Planet_H
#define Planet_H
#include <stdexcept>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "GlobalFuncs.h" //includes iostream and using namspace std and string.

struct OrbitalProperties { //structure that holds properties about the planets orbit
public:
	double aphelion; //AU
	double perihelion; //AU
	double semiMajorAxis; //AU
	double eccentricity; //no unit
	double orbitalPeriodJulian; 
	double orbitalPeriodDays;
	double orbitalPeriodSols;
	double synodicPeriodJulian;
	double synodicPeriodDays;
	double orbitalSpeed; // km/s
	double eclipticInclination; // degrees
	double sunInclination; //degrees
	double invariableInclination; //degrees
	unsigned short satellites;
	string otherDescription;
};

struct Time { //structure that holds time, with seconds as a floating point
public:
	unsigned short hour;
	unsigned short minute;
	double second;
};

struct PhysicalProperties { //structure that holds the physical properties of the world
public:
	double meanRadius; //km
	double meanRadiusError; //km
	double meanRadiusEarths;
	double equatorialRadius; //km
	double equatorialRadiusError; //km
	double equatorialRadiusEarths;
	double polarRadius; //km
	double polarRadiusError; //km
	double polarRadiusEarths;
	double flattening; //no unit
	double surfaceArea; // km^2
	double surfaceAreaEarths;
	double volume; //km^3
	double volumeEarths;
	double mass; //kg
	double massEarths;
	double meanDensity; // g/cm^3
	double meanDensityError; // g/cm^3
	double surfaceGravity; // m/s^2
	double surfaceGravityEarths;
	double escapeVelocity; // km/s
	Time rotationPeriod;
	double rotationPeriodEarths;
	double rotationVelocity;
	double axialTilt;
	bool isRetrograde;
	string otherDescription = "\n no description \n";
};

struct Atmosphere { //structure holding the atmospheric properties of the world."
public:
	short surfaceTemperatureMin; //Kelvin by default
	double surfaceTemperatureMinF; // F = (1.8 * C) + 32
	double surfaceTemperatureMinC; // C = K - 273.15
	short surfaceTemperatureMean;
	double surfaceTemperatureMeanF;
	double surfaceTemperatureMeanC;
	short surfaceTemperatureMax;
	double surfaceTemperatureMaxF;
	double surfaceTemperatureMaxC;
	double surfacePressure; // kPa
	double surfacePressureEarths;
	short compSize; //used to define the size of the pointer arrays for atmsopheric composition and their percentages
	string * composition;
	double * compositionPercentages;
	string otherDescription = "\n no description \n";
};

class Planet {
private:
	string planetName;
protected:
	OrbitalProperties orbit; //in the above structure blocks make up attributes of a planet object.
	PhysicalProperties physics;
	Atmosphere atmosphere;
public:
	Planet(); //default constructor makes Earth.
	Planet(string); // string argument defines what the name of the planet is to be constructed.
	string getPlanetName() const { //protected, so only derived classes and this class can access.
		return planetName;
	}
	void marsGen(); //function called by the 1-arg constructor to initialize "mars"
	void earthGen(); // same as line above.
	void venusGen();
	void mercuryGen();
	void jupiterGen();
	void saturnGen();
	virtual void createNewPlanet(); //function called by the 1-arg constructor in case the user wants to "CREATE" a new planet.
	virtual void randomDistribution(int); //randomizes all of the planets attributes by scale of the argument (percentage difference)
	virtual void createFromScratch(); //function called by the 1-arg constructor if the user doesn't want to base a newly created planet on previous ones.
	int colonization(); //uses multiple conditional statements to determine chances of successful colonization.
	int terraform(); //same as line above, but for chances of terraforming.
	Planet readPlanet(); //reads a planet from file.
	virtual void writePlanet(Planet); //writes a planet to the file.
	void printInfo(); //prints the info, obviously.
	void operator=(const Planet &right); //allows planets to use = operator to make a new copy of a planet.
	
	~Planet(); //doesnt do anything at the moment.
};
#endif