#include "Moon.h"

Moon::Moon()
{
	string pn;
	cout << "What is the name of the moon?\n";
	getline(cin, pn);
	moonName = pn;
	cout << "What is the name of the moon's parent star?\n";
	getline(cin, pn);
	parentPlanet = new Planet(pn); //make a new planet in memory, using the constructor from the derived class.
	lunaGen();
}

Moon::Moon(string s)
{
	string newS = GlobalFuncs::convertToCaps(s);
	if (newS == "LUNA") {
		cout << "Luna, aka the \"Moon\" as we like to call it, is Earth's only satellite, and the only place in the universe other than Earth\n"
			"that human beings have managed to touch.\n";
		moonName = "Luna";
		parentPlanet = new Planet("Earth");
		lunaGen();
	}
	else if (newS == "CALLISTO") {
		cout << "Callisto is the most promising moon in the Jovian moon system that could be colonized.\n"
			"Like most moons, there is hardly any atmosphere at all, but what makes Callisto better for colonization than anything else\n"
			"Is it's low dose of radiation coming from Jupiter.\n";
		moonName = "Callisto";
		parentPlanet = new Planet("Jupiter");
		callistoGen();
	}
	else if (newS == "EUROPA") {
		cout << "Europa is a moon covered in ice. Scientists have not yet had a chance to explore the likely-present ocean \n"
			"Under its ice-covered surface. Unfortunately Europa is not considered as colonizable as some other Jovian moons. \n"
			"mainly because its proximity to Jupiter punishes Europa with lethal doses of radiation.\n";
		moonName = "Europa";
		parentPlanet = new Planet("Jupiter");
		europaGen();
	}
	else if (newS == "TITAN") {
		cout << "Titan is the only moon in the solar system to retain an atmosphere."
			"\nIt is unique and some believe it could potentially harbor life\n"
			"unlike anything seen on Earth. It orbits Saturn, out in the colder regions of our solar system.\n";
		moonName = "Titan";
		parentPlanet = new Planet("Saturn");
		titanGen();
	}
	else if (newS == "CREATE") {
		parentPlanet = new Planet();
	}
}

Moon::Moon(string a, string b)
{
	parentPlanet = new Planet(b);
	string newS = GlobalFuncs::convertToCaps(a);
	if (newS == "LUNA") {
		cout << "Luna, aka the \"Moon\" as we like to call it, is Earth's only satellite, and the only place in the universe other than Earth\n"
			"that human beings have managed to touch.\n";
		moonName = "Luna";
		lunaGen();
	}
	else if (newS == "CALLISTO") {
		cout << "Callisto is the most promising moon in the Jovian moon system that could be colonized.\n"
			"Like most moons, there is hardly any atmosphere at all, but what makes Callisto better for colonization than anything else\n"
			"Is it's low dose of radiation coming from Jupiter.\n";
		moonName = "Callisto";
		callistoGen();
	}
	else if (newS == "EUROPA") {
		cout << "Europa is a moon covered in ice. Scientists have not yet had a chance to explore the likely-present ocean \n"
			"Under its ice-covered surface. Unfortunately Europa is not considered as colonizable as some other Jovian moons. \n"
			"mainly because its proximity to Jupiter punishes Europa with lethal doses of radiation.\n";
		moonName = "Europa";
		europaGen();
	}
	else if (newS == "TITAN") {
		cout << "Titan is the only moon in the solar system to retain an atmosphere."
			"\nIt is unique and some believe it could potentially harbor life\n"
			"unlike anything seen on Earth. It orbits Saturn, out in the colder regions of our solar system.\n";
		moonName = "Titan";
		titanGen();
	}
	else if (newS == "CREATE") {
		parentPlanet = new Planet();
	}
}

void Moon::lunaGen()
{
	orbit.aphelion = 0.00238;
	orbit.perihelion = 0.00276;
	orbit.semiMajorAxis = 0.00257;
	orbit.eccentricity = 0.0549;
	orbit.orbitalPeriodJulian = 0.0748;
	orbit.orbitalPeriodDays = 27.321661;
	orbit.orbitalPeriodSols = 1;
	orbit.synodicPeriodJulian = 29.530589;
	orbit.synodicPeriodDays = 0;
	orbit.orbitalSpeed = 1022; //m/s
	orbit.eclipticInclination = 5.145;
	orbit.sunInclination = 7.155;
	orbit.invariableInclination = 1.57869;
	orbit.satellites = 1;
	physics.meanRadius = 1737.1;
	physics.meanRadiusError = 0.0;
	physics.meanRadiusEarths = 0.273;
	moonPhysics.meanRadiusMoons = 1;
	physics.equatorialRadius = 1738.1;
	physics.equatorialRadiusEarths = 0.273;
	physics.equatorialRadiusError = 0.0;
	physics.polarRadius = 1736.0;
	physics.polarRadiusEarths = 0.273;
	physics.polarRadiusError = 0.1;
	physics.flattening = 0.0012;
	physics.surfaceArea = 37930; // times 10^3
	physics.surfaceAreaEarths = 0.074;
	moonPhysics.surfaceAreaMoons = 1;
	physics.volume = 2195.8; // times 10^7
	physics.volumeEarths = 0.020;
	moonPhysics.volumeMoons = 1;
	physics.mass = 7342; // times 10^19
	physics.massEarths = 0.0123;
	moonPhysics.massMoons = 1;
	physics.meanDensity = 3.344;
	physics.meanDensityError = 0;
	physics.surfaceGravity = 1.62; // m/s^2
	physics.surfaceGravityEarths = 0.1654;
	moonPhysics.surfaceGravityMoons = 1;
	physics.escapeVelocity = 2380; // m/s
	physics.rotationPeriod.hour = 648;
	physics.rotationPeriod.minute = 7;
	physics.rotationPeriod.second = 43.19184;
	physics.rotationPeriodEarths = 27.321661;
	physics.rotationVelocity = 4.627; // m/s
	physics.axialTilt = 1.5424; //degrees
	physics.isRetrograde = false;
	atmosphere.surfaceTemperatureMin = 100;
	atmosphere.surfaceTemperatureMinC = -173.15;
	atmosphere.surfaceTemperatureMinF = -279.67;
	atmosphere.surfaceTemperatureMean = 220;
	atmosphere.surfaceTemperatureMeanC = -53.15;
	atmosphere.surfaceTemperatureMeanF = -63.67;
	atmosphere.surfaceTemperatureMax = 390;
	atmosphere.surfaceTemperatureMaxC = 116.85;
	atmosphere.surfaceTemperatureMaxF = 242.33;
	atmosphere.surfacePressure = 0.000000000000001; // kPa
	atmosphere.surfacePressureEarths = 0;
	atmosphere.compSize = 1;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "He, Ar, Ne, Na, K, H, Rn";
	atmosphere.compositionPercentages[0] = 100;
	orbit.otherDescription = "\nMars has seasons like Earth, though on Mars, \n they are nearly twice as long because its orbital period is that much longer.\n of the seven other planets in the Solar System, only Mercury has a larger orbital eccentricity";
	physics.otherDescription = "\nThe planet gets 43% the amount of sunlight Earth gets.\nIt's low mass makes it unlikely that a thick atmosphere would be possible.\n";
	atmosphere.otherDescription = "\nThe atmosphere on this planet is being eroded by its star's solar winds.\nThe planet has a very weak magnetosphere.\n";
}

void Moon::callistoGen()
{
	orbit.aphelion = 0.0127;
	orbit.perihelion = 0.0125;
	orbit.semiMajorAxis = 0.0126;
	orbit.eccentricity = 0.0074;
	orbit.orbitalPeriodJulian = 0.0457;
	orbit.orbitalPeriodDays = 16.6890184;
	orbit.orbitalPeriodSols = 1;
	orbit.synodicPeriodJulian = 0;
	orbit.synodicPeriodDays = 0;
	orbit.orbitalSpeed = 8204; //m/s
	orbit.eclipticInclination = 2.017;
	orbit.sunInclination = 7.155;
	orbit.invariableInclination = 0.192;
	orbit.satellites = 0;
	physics.meanRadius = 2410.3;
	physics.meanRadiusError = 1.5;
	physics.meanRadiusEarths = 0.378;
	moonPhysics.meanRadiusMoons = 0.196;
	physics.equatorialRadius = 2410.3;
	physics.equatorialRadiusEarths = 0.378;
	physics.equatorialRadiusError = 1.5;
	physics.polarRadius = 2410.3;
	physics.polarRadiusEarths = 0.378;
	physics.polarRadiusError = 1.5;
	physics.flattening = -1;
	physics.surfaceArea = 73000; // times 10^3
	physics.surfaceAreaEarths = 0.143;
	moonPhysics.surfaceAreaMoons = 1.932;
	physics.volume = 5900; // times 10^7
	physics.volumeEarths = 0.0541;
	moonPhysics.volumeMoons = 2.705;
	physics.mass = 10759.38; // times 10^19
	physics.massEarths = 0.018;
	moonPhysics.massMoons = 1.463;
	physics.meanDensity = 3.344;
	physics.meanDensityError = 0;
	physics.surfaceGravity = 1.235; // m/s^2
	physics.surfaceGravityEarths = 0.126;
	moonPhysics.surfaceGravityMoons = 0.762;
	physics.escapeVelocity = 2440; // m/s
	physics.rotationPeriod.hour = 400;
	physics.rotationPeriod.minute = 32;
	physics.rotationPeriod.second = 10.8096;
	physics.rotationPeriodEarths = 16.6890184;
	physics.rotationVelocity = 3.527; // m/s
	physics.axialTilt = 0; //degrees
	physics.isRetrograde = false;
	atmosphere.surfaceTemperatureMin = 75;
	atmosphere.surfaceTemperatureMinC = -198.15;
	atmosphere.surfaceTemperatureMinF = -324.67;
	atmosphere.surfaceTemperatureMean = 134;
	atmosphere.surfaceTemperatureMeanC = -139.15;
	atmosphere.surfaceTemperatureMeanF = -218.47;
	atmosphere.surfaceTemperatureMax = 165;
	atmosphere.surfaceTemperatureMaxC = -108.15;
	atmosphere.surfaceTemperatureMaxF = -162.67;
	atmosphere.surfacePressure = 0.000000000000001; // kPa
	atmosphere.surfacePressureEarths = 0;
	atmosphere.compSize = 1;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "C02, 02";
	atmosphere.compositionPercentages[0] = 100;
	orbit.otherDescription = "\nMars has seasons like Earth, though on Mars, \n they are nearly twice as long because its orbital period is that much longer.\n of the seven other planets in the Solar System, only Mercury has a larger orbital eccentricity";
	physics.otherDescription = "\nThe planet gets 43% the amount of sunlight Earth gets.\nIt's low mass makes it unlikely that a thick atmosphere would be possible.\n";
	atmosphere.otherDescription = "\nThe atmosphere on this planet is being eroded by its star's solar winds.\nThe planet has a very weak magnetosphere.\n";
	parentPlanet = new Planet("Jupiter");
}

void Moon::europaGen()
{
	orbit.aphelion = 0.00452;
	orbit.perihelion = 0.00445;
	orbit.semiMajorAxis = 0.004485;
	orbit.eccentricity = 0.009;
	orbit.orbitalPeriodJulian = 0.00972;
	orbit.orbitalPeriodDays = 3.551181;
	orbit.orbitalPeriodSols = 1;
	orbit.synodicPeriodJulian = 0;
	orbit.synodicPeriodDays = 0;
	orbit.orbitalSpeed = 13740; //m/s
	orbit.eclipticInclination = 1.791;
	orbit.sunInclination = 0.470;
	orbit.invariableInclination = 0;
	orbit.satellites = 0;
	physics.meanRadius = 1560.8;
	physics.meanRadiusError = 0.5;
	physics.meanRadiusEarths = 0.245;
	moonPhysics.meanRadiusMoons = 0.897;
	physics.equatorialRadius = 1560.8;
	physics.equatorialRadiusEarths = 0.245;
	physics.equatorialRadiusError = 0.5;
	physics.polarRadius = 1560.8;
	physics.polarRadiusEarths = 0.245;
	physics.polarRadiusError = 0.5;
	physics.flattening = 0.00;
	physics.surfaceArea = 30900; // times 10^3
	physics.surfaceAreaEarths = 0.061;
	moonPhysics.surfaceAreaMoons = 0.824;
	physics.volume = 1593; // times 10^7
	physics.volumeEarths = 0.015;
	moonPhysics.volumeMoons = 0.75;
	physics.mass = 4799.844; // times 10^19
	physics.massEarths = 0.008;
	moonPhysics.massMoons = 0.65;
	physics.meanDensity = 3.013;
	physics.meanDensityError = 0.005;
	physics.surfaceGravity = 1.314; // m/s^2
	physics.surfaceGravityEarths = 0.134;
	moonPhysics.surfaceGravityMoons = 0.81;
	physics.escapeVelocity = 2025; // m/s
	physics.rotationPeriod.hour = 85;
	physics.rotationPeriod.minute = 13;
	physics.rotationPeriod.second = 42.0384;
	physics.rotationPeriodEarths = 3.551181;
	physics.rotationVelocity = 4.213; // m/s
	physics.axialTilt = 0.1; //degrees
	physics.isRetrograde = false;
	atmosphere.surfaceTemperatureMin = 50;
	atmosphere.surfaceTemperatureMinC = -223.15;
	atmosphere.surfaceTemperatureMinF = -369.67;
	atmosphere.surfaceTemperatureMean = 102;
	atmosphere.surfaceTemperatureMeanC = -171.15;
	atmosphere.surfaceTemperatureMeanF = -276.07;
	atmosphere.surfaceTemperatureMax = 125;
	atmosphere.surfaceTemperatureMaxC = -148.15;
	atmosphere.surfaceTemperatureMaxF = -234.67;
	atmosphere.surfacePressure = 0.000000000000001; // kPa
	atmosphere.surfacePressureEarths = 0;
	atmosphere.compSize = 1;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "Oxygen (02)";
	atmosphere.compositionPercentages[0] = 100;
	orbit.otherDescription = "\nMars has seasons like Earth, though on Mars, \n they are nearly twice as long because its orbital period is that much longer.\n of the seven other planets in the Solar System, only Mercury has a larger orbital eccentricity";
	physics.otherDescription = "\nThe planet gets 43% the amount of sunlight Earth gets.\nIt's low mass makes it unlikely that a thick atmosphere would be possible.\n";
	atmosphere.otherDescription = "\nThe atmosphere on this planet is being eroded by its star's solar winds.\nThe planet has a very weak magnetosphere.\n";
}

void Moon::titanGen()
{
	orbit.aphelion = 0.00807;
	orbit.perihelion = 0.00826;
	orbit.semiMajorAxis = 0.0817;
	orbit.eccentricity = 0.0288;
	orbit.orbitalPeriodJulian = 0.0748;
	orbit.orbitalPeriodDays = 15.945;
	orbit.orbitalPeriodSols = 1;
	orbit.synodicPeriodJulian = -1;
	orbit.synodicPeriodDays = -1;
	orbit.orbitalSpeed = 5570; //m/s
	orbit.eclipticInclination = 0.34854;
	orbit.sunInclination = -1;
	orbit.invariableInclination = -1;
	orbit.satellites = 0;
	physics.meanRadius = 2575.5;
	physics.meanRadiusError = 2.0;
	physics.meanRadiusEarths = 0.404;
	moonPhysics.meanRadiusMoons = 1.480;
	physics.equatorialRadius = 2573.5;
	physics.equatorialRadiusEarths = 0.404;
	physics.equatorialRadiusError = 2.0;
	physics.polarRadius = 2577.5;
	physics.polarRadiusEarths = 0.404;
	physics.polarRadiusError = 2.0;
	physics.flattening = 0.00;
	physics.surfaceArea = 8.3000; // times 10^3
	physics.surfaceAreaEarths = 0.163;
	moonPhysics.surfaceAreaMoons = 2.203;
	physics.volume = 7160; // times 10^7
	physics.volumeEarths = 0.066;
	moonPhysics.volumeMoons = 3.3;
	physics.mass = 13452; // times 10^19
	physics.massEarths = 0.0225;
	moonPhysics.massMoons = 1.829;
	physics.meanDensity = 1.8798;
	physics.meanDensityError = 0.0044;
	physics.surfaceGravity = 1.352; // m/s^2
	physics.surfaceGravityEarths = 0.14;
	moonPhysics.surfaceGravityMoons = 0.85;
	physics.escapeVelocity = 2639; // m/s
	physics.rotationPeriod.hour = 382;
	physics.rotationPeriod.minute = 40;
	physics.rotationPeriod.second = 48;
	physics.rotationPeriodEarths = 15.945;
	physics.rotationVelocity = 6.537; // m/s
	physics.axialTilt = 0; //degrees
	physics.isRetrograde = false;
	atmosphere.surfaceTemperatureMin = 93.7;
	atmosphere.surfaceTemperatureMinC = -179.45;
	atmosphere.surfaceTemperatureMinF = -291.01;
	atmosphere.surfaceTemperatureMean = 93.7;
	atmosphere.surfaceTemperatureMeanC = -179.45;
	atmosphere.surfaceTemperatureMeanF = -291.01;
	atmosphere.surfaceTemperatureMax = 93.7;
	atmosphere.surfaceTemperatureMaxC = -179.45;
	atmosphere.surfaceTemperatureMaxF = -291.01;
	atmosphere.surfacePressure = 146.7; // kPa
	atmosphere.surfacePressureEarths = 1.45;
	atmosphere.compSize = 3;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "Nitrogen (N2)";
	atmosphere.compositionPercentages[0] = 94.8;
	atmosphere.composition[1] = "Methane (CH4)";
	atmosphere.compositionPercentages[1] = 4.7;
	atmosphere.composition[2] = "Hydrogen (H2)";
	atmosphere.compositionPercentages[2] = 0.2;
	orbit.otherDescription = "\nMars has seasons like Earth, though on Mars, \n they are nearly twice as long because its orbital period is that much longer.\n of the seven other planets in the Solar System, only Mercury has a larger orbital eccentricity";
	physics.otherDescription = "\nThe planet gets 43% the amount of sunlight Earth gets.\nIt's low mass makes it unlikely that a thick atmosphere would be possible.\n";
	atmosphere.otherDescription = "\nThe atmosphere on this planet is being eroded by its star's solar winds.\nThe planet has a very weak magnetosphere.\n";
}

void Moon::createNewPlanet()
{

}

void Moon::colonization()
{

}


void Moon::printInfo() {
	cout << setprecision(7) //cutting off any unnecessary precision points.
		<< "Moon Name:                " << moonName << '\n'
		<< "Parent Planet Name:       " << parentPlanet[0].getPlanetName() << '\n'
		<< "Apogee:                   " << orbit.aphelion << '\n'
		<< "Perigee:                  " << orbit.perihelion << '\n'
		<< "Semi-Major Axis:          " << orbit.semiMajorAxis << '\n'
		<< "Eccentricity:             " << orbit.eccentricity << '\n'
		<< "Julian Orbital Period:    " << orbit.orbitalPeriodJulian << '\n'
		<< "Orbital Period in Days:   " << orbit.orbitalPeriodDays << '\n'
		<< "Orbital Period in Sols:   " << orbit.orbitalPeriodSols << '\n'
		<< "Julian Synodic Period:    " << orbit.synodicPeriodJulian << '\n'
		<< "Synodic Period in Days:   " << orbit.synodicPeriodDays << '\n'
		<< "Orbital Speed:            " << orbit.orbitalSpeed << '\n'
		<< "Ecliptic Inclination:     " << orbit.eclipticInclination << '\n'
		<< "Sun Inclination:          " << orbit.sunInclination << '\n'
		<< "Invariable Inclination:   " << orbit.invariableInclination << '\n'
		<< "Satellites:               " << orbit.satellites << '\n'
		<< "Mean Radius:              " << physics.meanRadius << '\n'
		<< "Mean Radius Error:        " << physics.meanRadiusError << '\n'
		<< "Mean Radius Earths:        " << physics.meanRadiusEarths << '\n'
		<< "Mean Radius Moon:         " << moonPhysics.meanRadiusMoons << '\n'
		<< "Equatorial Radius:        " << physics.equatorialRadius << '\n'
		<< "Equatorial Radius Earths: " << physics.equatorialRadiusEarths << '\n'
		<< "Equatorial Radius Error:  " << physics.equatorialRadiusError << '\n'
		<< "Polar Radius:             " << physics.polarRadius << '\n'
		<< "Polar Radius Earths:       " << physics.polarRadiusEarths << '\n'
		<< "Polar Radius Error:       " << physics.polarRadiusError << '\n'
		<< "Flattening:               " << physics.flattening << '\n'
		<< "Surface Area:             " << physics.surfaceArea << '\n'
		<< "Surface Area Earths:       " << physics.surfaceAreaEarths << '\n'
		<< "Surface Area Moon:        " << moonPhysics.surfaceAreaMoons << '\n'
		<< "Volume:                   " << physics.volume << '\n'
		<< "Volume Earths:            " << physics.volumeEarths << '\n'
		<< "Volume Moon:              " << moonPhysics.volumeMoons << '\n'
		<< "Mass:                     " << physics.mass << '\n'
		<< "Mass Earths:              " << physics.massEarths << '\n'
		<< "Mass Moons:               " << moonPhysics.massMoons << '\n'
		<< "Mean Density:             " << physics.meanDensity << '\n'
		<< "Mean Density Error:       " << physics.meanDensityError << '\n'
		<< "Surface Gravity:          " << physics.surfaceGravity << '\n'
		<< "Surface Gravity Earths:   " << physics.surfaceGravityEarths << '\n'
		<< "Surface Gravity Moons:    " << moonPhysics.surfaceGravityMoons
		<< "Escape Velocity:          " << physics.escapeVelocity << '\n'
		<< "Rotation Period (h/m/s):  " << physics.rotationPeriod.hour << ":"
		<< physics.rotationPeriod.minute << ":" << physics.rotationPeriod.second << '\n'
		<< "Rotation Period Earths:  " << physics.rotationPeriodEarths << '\n'
		<< "Rotation Velocity:       " << physics.rotationVelocity << '\n'
		<< "Axial Tilt:              " << physics.axialTilt << '\n'
		<< "Is Retrograde:           " << physics.isRetrograde << '\n'
		<< setprecision(3)
		<< "Surface Temperature      \t|\t Min \t|\t Mean \t|\t Max \t|\n"
		<< "Kelvin:                  \t|\t" << atmosphere.surfaceTemperatureMin << "\t|\t" << atmosphere.surfaceTemperatureMean
		<< " \t|\t " << atmosphere.surfaceTemperatureMax << "\t|\n"
		<< "Celsius:                 \t|\t" << atmosphere.surfaceTemperatureMinC << "\t|\t" << atmosphere.surfaceTemperatureMeanC
		<< " \t|\t " << atmosphere.surfaceTemperatureMaxC << "\t|\n"
		<< "Fahrenheit:              \t|\t" << atmosphere.surfaceTemperatureMinF << "\t|\t" << atmosphere.surfaceTemperatureMeanF
		<< " \t|\t " << atmosphere.surfaceTemperatureMaxF << "\t|\n"
		<< "Surface Pressure:        " << atmosphere.surfacePressure << '\n'
		<< "Surface Pressure Earths: " << atmosphere.surfacePressureEarths << '\n'
		<< "Components in Atmosphere: " << atmosphere.compSize << '\n';
	for (int i = 0; i < atmosphere.compSize; i++) {
		cout << "Component of Atmosphere " << i + 1 << ": " << atmosphere.compositionPercentages[i] << " of " << atmosphere.composition[i] << '\n';
	}
	cout << '\n' << orbit.otherDescription << '\n' << physics.otherDescription << '\n' << atmosphere.otherDescription;
}

void Moon::printParentInfo()
{
	parentPlanet[0].printInfo();
}

Moon::~Moon()
{
	delete[] parentPlanet;
}
