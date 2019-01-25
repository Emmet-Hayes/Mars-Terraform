#include "Planet.h"

Planet::Planet() {
	cout << "Default Planet (Earth) Constructed.\n ";
	planetName = "Earth";
	earthGen(); //sets the values to earth's default values.
}

Planet::Planet(string s) {
	string newS = GlobalFuncs::convertToCaps(s); //convert the string to uppercase
		if (newS == "EARTH") {
			cout << "\nEarth is the capital of the human race, and indeed all currently known forms of life.\n";
			planetName = "Earth";
			earthGen(); //calls the initializing function for earth.
		}
		else if (newS == "MARS") {
			cout << "\nMars is humanity's nearest colonizable world.\n";
			planetName = "Mars";
			marsGen(); //call the mars special function.
		}
		else if (newS == "VENUS") {
			cout << "\nVenus-like planets are an example of the power of a runaway green house effect.\n";
			planetName = "Venus";
			venusGen();
		}
		else if (newS == "MERCURY") {
			cout << "\nMercury is the closest planet to the sun in our solar system. \n";
			planetName = "Mercury";
			mercuryGen();
		}
		else if (newS == "JUPITER") {
			cout << "\nJupiter is the largest planet in the solar system with 69 identified satellites.\n";
			planetName = "Jupiter";
			jupiterGen();
		}
		else if (newS == "SATURN") {
			cout << "\nSaturn has a massive ring system and is the second largest planet in the solar system.\n";
			planetName = "Saturn";
			saturnGen();
		}
		else if (newS == "CREATE") {
			cout << "\nCreating a new planet...\n";
			createNewPlanet();
		}
		else {
			planetName = newS;
			cout << "\nThis planetary name does not match any of our records.\n";
		}
}

void Planet::marsGen() { //function for creating a mars planet. it simply assigns all of the planet objects parameters.
	orbit.aphelion = 1.6660;
	orbit.perihelion = 1.3814;
	orbit.semiMajorAxis = 1.523679;
	orbit.eccentricity = 0.0934;
	orbit.orbitalPeriodJulian = 1.8808;
	orbit.orbitalPeriodDays = 686.971;
	orbit.orbitalPeriodSols = 668.5991;
	orbit.orbitalSpeed = 24077; //m/s
	orbit.synodicPeriodJulian = 2.134;
	orbit.synodicPeriodDays = 779.96;
	orbit.eclipticInclination = 1.850;
	orbit.sunInclination = 5.65;
	orbit.invariableInclination = 1.67;
	orbit.satellites = 2;
	physics.meanRadius = 3389.5;
	physics.meanRadiusError = 0.2;
	physics.meanRadiusEarths = 0.532;
	physics.equatorialRadius = 3396.2;
	physics.equatorialRadiusEarths = 0.533;
	physics.equatorialRadiusError = 0.2;
	physics.polarRadius = 3376.2;
	physics.polarRadiusEarths = 0.531;
	physics.polarRadiusError = 0.1;
	physics.flattening = 0.00589;
	physics.surfaceArea = 114798.5; // times 10^3
	physics.surfaceAreaEarths = 0.284;
	physics.volume = 16318; // times 10^7
	physics.volumeEarths = 0.151;
	physics.mass = 64171; // times 10^19
	physics.massEarths = 0.107;
	physics.meanDensity = 3.9335;
	physics.meanDensityError = 0.0004;
	physics.surfaceGravity = 3.711; // m/s^2
	physics.surfaceGravityEarths = 0.376;
	physics.escapeVelocity = 5027; // m/s
	physics.rotationPeriod.hour = 24;
	physics.rotationPeriod.minute = 37;
	physics.rotationPeriod.second = 22;
	physics.rotationPeriodEarths = 1.025957;
	physics.rotationVelocity = 241.17; // m/s
	physics.axialTilt = 25.19; //degrees
	physics.isRetrograde = false;
	atmosphere.surfaceTemperatureMin = 130;
	atmosphere.surfaceTemperatureMinC = -143;
	atmosphere.surfaceTemperatureMinF = -226;
	atmosphere.surfaceTemperatureMean = 210;
	atmosphere.surfaceTemperatureMeanC = -63;
	atmosphere.surfaceTemperatureMeanF = -81.4;
	atmosphere.surfaceTemperatureMax = 308;
	atmosphere.surfaceTemperatureMaxC = 35;
	atmosphere.surfaceTemperatureMaxF = 95;
	atmosphere.surfacePressure = 0.636; // kPa
	atmosphere.surfacePressureEarths = 0.00628;
	atmosphere.compSize = 5;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "Carbon Dioxide (CO2)";
	atmosphere.compositionPercentages[0] = 95.97;
	atmosphere.composition[1] = "Argon (Ar)";
	atmosphere.compositionPercentages[1] = 1.93;
	atmosphere.composition[2] = "Nitrogen (N2)";
	atmosphere.compositionPercentages[2] = 1.89;
	atmosphere.composition[3] = "Oxygen (O2)";
	atmosphere.compositionPercentages[3] = 0.146;
	atmosphere.composition[4] = "Carbon Monoxide (CO)";
	atmosphere.compositionPercentages[4] = 0.0557;
	orbit.otherDescription = "\nMars has seasons like Earth, though on Mars, \n they are nearly twice as long because its orbital period is that much longer.\n of the seven other planets in the Solar System, only Mercury has a larger orbital eccentricity";
	physics.otherDescription = "\nThe planet gets 43% the amount of sunlight Earth gets.\nIt's low mass makes it unlikely that a thick atmosphere would be possible.\n";
	atmosphere.otherDescription = "\nThe atmosphere on this planet is being eroded by its star's solar winds.\nThe planet has a very weak magnetosphere.\n";
}

void Planet::earthGen() { //check out the marsGen() block
	orbit.aphelion = 1.017;
	orbit.perihelion = 0.983;
	orbit.semiMajorAxis = 1.00000102;
	orbit.eccentricity = 0.0167086;
	orbit.orbitalPeriodJulian = 1;
	orbit.orbitalPeriodDays = 365.256363004;
	orbit.orbitalPeriodSols = 355.135145;
	orbit.synodicPeriodJulian = 0;
	orbit.synodicPeriodDays = 0;
	orbit.orbitalSpeed = 29780; //m/s
	orbit.eclipticInclination = 0.00005;
	orbit.sunInclination = 7.155;
	orbit.invariableInclination = 1.57869;
	orbit.satellites = 1;
	physics.meanRadius = 6371.0;
	physics.meanRadiusError = 0.0;
	physics.meanRadiusEarths = 1;
	physics.equatorialRadius = 6378.1;
	physics.equatorialRadiusEarths = 1;
	physics.equatorialRadiusError = 0.0;
	physics.polarRadius = 6356.8;
	physics.polarRadiusEarths = 1;
	physics.polarRadiusError = 0.0;
	physics.flattening = 0.0033528;
	physics.surfaceArea = 510072; // times 10^3
	physics.surfaceAreaEarths = 1;
	physics.volume = 108321; // times 10^7
	physics.volumeEarths = 1;
	physics.mass = 579237; // times 10^19
	physics.massEarths = 1;
	physics.meanDensity = 5.514;
	physics.meanDensityError = 0.0;
	physics.surfaceGravity = 9.807; // m/s^2
	physics.surfaceGravityEarths = 1;
	physics.escapeVelocity = 11286; // m/s
	physics.rotationPeriod.hour = 23;
	physics.rotationPeriod.minute = 56;
	physics.rotationPeriod.second = 4.100;
	physics.rotationPeriodEarths = 1;
	physics.rotationVelocity = 465.1; // m/s
	physics.isRetrograde = false;
	physics.axialTilt = 23.4392811; //degrees
	atmosphere.surfaceTemperatureMin = 184;
	atmosphere.surfaceTemperatureMinC = -89.2;
	atmosphere.surfaceTemperatureMinF = -128.5;
	atmosphere.surfaceTemperatureMean = 288;
	atmosphere.surfaceTemperatureMeanC = 15;
	atmosphere.surfaceTemperatureMeanF = 59;
	atmosphere.surfaceTemperatureMax = 330;
	atmosphere.surfaceTemperatureMaxC = 56.7;
	atmosphere.surfaceTemperatureMaxF = 134;
	atmosphere.surfacePressure = 101.325; // kPa
	atmosphere.surfacePressureEarths = 1;
	atmosphere.compSize = 5;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "Nitrogen (N2)";
	atmosphere.compositionPercentages[0] = 78.08;
	atmosphere.composition[1] = "Oxygen (O2)";
	atmosphere.compositionPercentages[1] = 20.95;
	atmosphere.composition[2] = "Argon (Ar)";
	atmosphere.compositionPercentages[2] = 0.930;
	atmosphere.composition[3] = "Carbon Dioxide (CO2)";
	atmosphere.compositionPercentages[3] = 0.0402;
	atmosphere.composition[4] = "Water Vapor (H2O)";
	atmosphere.compositionPercentages[4] = 0.0010;
	orbit.otherDescription = "Earth has the ideal orbit, \nin the so-called 'goldilocks zone'\n";
	physics.otherDescription = "Earth has ideal physical properties,\n made up of 70.8% ocean, and 29.2% land.\n";
	atmosphere.otherDescription = "Earth is a lush planet .\nIt has everything needed to support life as we know it.\n";
}

void Planet::venusGen() {
	orbit.aphelion = 0.728213; //AU
	orbit.perihelion = 0.718; //AU
	orbit.semiMajorAxis = 0.723332; //AU
	orbit.eccentricity = 0.006772;
	orbit.orbitalPeriodJulian = 0.61518709;
	orbit.orbitalPeriodDays = 224.701;
	orbit.orbitalPeriodSols = 1.92;
	orbit.orbitalSpeed = 35022; //m/s
	orbit.synodicPeriodJulian = 1.59865798;
	orbit.synodicPeriodDays = 583.92;
	orbit.eclipticInclination = 3.39458;
	orbit.sunInclination = 3.86;
	orbit.invariableInclination = 2.19;
	orbit.satellites = 0;
	physics.meanRadius = 6051.8;
	physics.meanRadiusError = 1.0;
	physics.meanRadiusEarths = 0.9499;
	physics.equatorialRadius = -1;
	physics.equatorialRadiusEarths = -1;
	physics.equatorialRadiusError = -1;
	physics.polarRadius = -1;
	physics.polarRadiusEarths = -1;
	physics.polarRadiusError = -1;
	physics.flattening = 0.0;
	physics.surfaceArea = 460230; // times 10^3
	physics.surfaceAreaEarths = 0.902;
	physics.volume = 92843; // times 10^7
	physics.volumeEarths = 0.866;
	physics.mass = 48675; // times 10^19
	physics.massEarths = 0.815;
	physics.meanDensity = 5.243;
	physics.meanDensityError = 0.0004;
	physics.surfaceGravity = 8.87; // m/s^2
	physics.surfaceGravityEarths = 0.904;
	physics.escapeVelocity = 10360; // m/s
	physics.rotationPeriod.hour = 5832;
	physics.rotationPeriod.minute = 40;
	physics.rotationPeriod.second = 0;
	physics.rotationPeriodEarths = -243.025;
	physics.rotationVelocity = 1.81; // m/s
	physics.axialTilt = 2.64; //degrees
	physics.isRetrograde = true;
	atmosphere.surfaceTemperatureMin = 737;
	atmosphere.surfaceTemperatureMinC = 462;
	atmosphere.surfaceTemperatureMinF = 863.6;
	atmosphere.surfaceTemperatureMean = 737;
	atmosphere.surfaceTemperatureMeanC = 462;
	atmosphere.surfaceTemperatureMeanF = 863.6;
	atmosphere.surfaceTemperatureMax = 737;
	atmosphere.surfaceTemperatureMaxC = 462;
	atmosphere.surfaceTemperatureMaxF = 863.6;
	atmosphere.surfacePressure = 9200; // kPa
	atmosphere.surfacePressureEarths = 90.7969405;
	atmosphere.compSize = 11;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "Carbon Dioxide (CO2)";
	atmosphere.compositionPercentages[0] = 96.5;
	atmosphere.composition[1] = "Nitrogen (N2)";
	atmosphere.compositionPercentages[1] = 3.5;
	atmosphere.composition[2] = "Sulfur Dioxide (SO2)";
	atmosphere.compositionPercentages[2] = 1.89;
	atmosphere.composition[3] = "Argon (Ar)";
	atmosphere.compositionPercentages[3] = 0.007;
	atmosphere.composition[4] = "Water Vapor (H2O)";
	atmosphere.compositionPercentages[4] = 0.002;
	atmosphere.composition[5] = "Carbon Monoxide (CO)";
	atmosphere.compositionPercentages[5] = 0.0017;
	atmosphere.composition[6] = "Helium (He)";
	atmosphere.compositionPercentages[6] = 0.0012;
	atmosphere.composition[7] = "Neon (Ne)";
	atmosphere.compositionPercentages[7] = 0.0007;
	atmosphere.composition[8] = "Carbonyl Sulfide";
	atmosphere.compositionPercentages[8] = 0.0001;
	atmosphere.composition[9] = "Hydrogen Chloride";
	atmosphere.compositionPercentages[9] = 0.0001;
	atmosphere.composition[10] = "Hydrogen Fluoride";
	atmosphere.compositionPercentages[10] = 0.0001;
	orbit.otherDescription = "This planet follows a very steady orbit.\nIt is too close to it's star to be in the habitable zone.\n";
	physics.otherDescription = "This planet shares many similarities to earth:\nits physical size and surface gravity are about 90% of earths.\nhowever, it rotates incredibly slowly, and as a result its day is almost the same length as its year.\n";
	atmosphere.otherDescription = "This planet's atmosphere is a very toxic combination of chemicals.\nSurface pressure is crushing, and the greenhouse effect has superheated its surface.\n";
}

void Planet::mercuryGen() {
	orbit.aphelion = 0.466697;
	orbit.perihelion = 0.307499;
	orbit.semiMajorAxis = 0.387098;
	orbit.eccentricity = 0.205630;
	orbit.orbitalPeriodJulian = 0.2408418;
	orbit.orbitalPeriodDays = 87.969;
	orbit.orbitalPeriodSols = 0.5;
	orbit.synodicPeriodJulian = 0.31724881;
	orbit.synodicPeriodDays = 115.88;
	orbit.orbitalSpeed = 47362; //m/s
	orbit.eclipticInclination = 7.005;
	orbit.sunInclination = 3.38;
	orbit.invariableInclination = 6.34;
	orbit.satellites = 0;
	physics.meanRadius = 2439.7;
	physics.meanRadiusError = 1.0;
	physics.meanRadiusEarths = 0.3829;
	physics.equatorialRadius = 2439.7;
	physics.equatorialRadiusEarths = 0.3829;
	physics.equatorialRadiusError = 1.0;
	physics.polarRadius = 2439.7;
	physics.polarRadiusEarths = 0.3829;
	physics.polarRadiusError = 1.0;
	physics.flattening = 0.0;
	physics.surfaceArea = 74800; // times 10^3
	physics.surfaceAreaEarths = 0.147;
	physics.volume = 6083; // times 10^7
	physics.volumeEarths = 0.056;
	physics.mass = 33011; // times 10^19
	physics.massEarths = 0.055;
	physics.meanDensity = 5.427;
	physics.meanDensityError = 0.0;
	physics.surfaceGravity = 3.7; // m/s^2
	physics.surfaceGravityEarths = 0.38;
	physics.escapeVelocity = 4250; // m/s
	physics.rotationPeriod.hour = 1407;
	physics.rotationPeriod.minute = 30;
	physics.rotationPeriod.second = 0.0;
	physics.rotationPeriodEarths = 58.646;
	physics.rotationVelocity = 3.026; // m/s
	physics.isRetrograde = false;
	physics.axialTilt = 0.034; //degrees
	atmosphere.surfaceTemperatureMin = 80;
	atmosphere.surfaceTemperatureMinC = -193.15;
	atmosphere.surfaceTemperatureMinF = -315.67;
	atmosphere.surfaceTemperatureMean = 270;
	atmosphere.surfaceTemperatureMeanC = -3.15;
	atmosphere.surfaceTemperatureMeanF = 26.33;
	atmosphere.surfaceTemperatureMax = 700;
	atmosphere.surfaceTemperatureMaxC = 426.85;
	atmosphere.surfaceTemperatureMaxF = 800.33;
	atmosphere.surfacePressure = 0.00000001; // kPa
	atmosphere.surfacePressureEarths = 0;
	atmosphere.compSize = 5;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "Oxygen (O2)";
	atmosphere.compositionPercentages[0] = 42;
	atmosphere.composition[1] = "Sodium (Na)";
	atmosphere.compositionPercentages[1] = 29;
	atmosphere.composition[2] = "Hydrogen (H2)";
	atmosphere.compositionPercentages[2] = 22;
	atmosphere.composition[3] = "Helium (He)";
	atmosphere.compositionPercentages[3] = 6;
	atmosphere.composition[4] = "Potassium (K)";
	atmosphere.compositionPercentages[4] = 0.5; 
	orbit.otherDescription = "Mercury is the planet closest to the sun in our solar system. It's orbit is the most eccentric.";
	physics.otherDescription = "Mercury is also the smallest planet in the solar system.\nIn fact, Ganymede, a moon of Jupiter, is actually bigger.";
	atmosphere.otherDescription = "Mercury's paper thin atmosphere contains large amounts of low-atomic weight elements. \nThe planet's temperatures fluctuate wildly depending on which side of the planet is facing the sun.";
}

void Planet::jupiterGen() {
	orbit.aphelion = 5.45492;
	orbit.perihelion = 4.95029;
	orbit.semiMajorAxis = 5.20260;
	orbit.eccentricity = 0.048498;
	orbit.orbitalPeriodJulian = 11.8618;
	orbit.orbitalPeriodDays = 4332.59;
	orbit.orbitalPeriodSols = 10475.8;
	orbit.synodicPeriodJulian = 1.23;
	orbit.synodicPeriodDays = 398.88;
	orbit.orbitalSpeed = 13070; //m/s
	orbit.eclipticInclination = 1.303;
	orbit.sunInclination = 6.09;
	orbit.invariableInclination = 0.32;
	orbit.satellites = 69;
	physics.meanRadius = 69,911;
	physics.meanRadiusError = 6.0;
	physics.meanRadiusEarths = 10.961;
	physics.equatorialRadius = 71492;
	physics.equatorialRadiusEarths = 11.209;
	physics.equatorialRadiusError = 4.0;
	physics.polarRadius = 66854;
	physics.polarRadiusEarths = 10.517;
	physics.polarRadiusError = 10.0;
	physics.flattening = 0.06487;
	physics.surfaceArea = 61419000; // times 10^3
	physics.surfaceAreaEarths = 121.9;
	physics.volume = 143130000; // times 10^7
	physics.volumeEarths = 1321;
	physics.mass = 189860000; // times 10^19
	physics.massEarths = 317.8;
	physics.meanDensity = 1.326; // g/cm^3
	physics.meanDensityError = 0.0;
	physics.surfaceGravity = 24.79; // m/s^2
	physics.surfaceGravityEarths = 1;
	physics.escapeVelocity = 59500; // m/s
	physics.rotationPeriod.hour = 9;
	physics.rotationPeriod.minute = 55;
	physics.rotationPeriod.second = 30;
	physics.rotationPeriodEarths = 0.413;
	physics.rotationVelocity = 12600; // m/s
	physics.isRetrograde = false;
	physics.axialTilt = 3.13; //degrees
	atmosphere.surfaceTemperatureMin = 112;
	atmosphere.surfaceTemperatureMinC = -157.15;
	atmosphere.surfaceTemperatureMinF = -250.87;
	atmosphere.surfaceTemperatureMean = 138;
	atmosphere.surfaceTemperatureMeanC = -134.55;
	atmosphere.surfaceTemperatureMeanF = -210.37;
	atmosphere.surfaceTemperatureMax = 165;
	atmosphere.surfaceTemperatureMaxC = -108.15;
	atmosphere.surfaceTemperatureMaxF = -162.67;
	atmosphere.surfacePressure = 110000; // kPa
	atmosphere.surfacePressureEarths = 1.0532;
	atmosphere.compSize = 7;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "Hydrogen (H2)";
	atmosphere.compositionPercentages[0] = 89.8;
	atmosphere.composition[1] = "Helium (He)";
	atmosphere.compositionPercentages[1] = 10.2;
	atmosphere.composition[2] = "Methane (CH4)";
	atmosphere.compositionPercentages[2] = 0.3;
	atmosphere.composition[3] = "Ammonia (NH3)";
	atmosphere.compositionPercentages[3] = 0.026;
	atmosphere.composition[4] = "Hydrogen Deuteride (HD)";
	atmosphere.compositionPercentages[4] = 0.003;
	atmosphere.composition[5] = "Ethane (C2H6)";
	atmosphere.compositionPercentages[5] = 0.0006;
	atmosphere.composition[6] = "Water (H2O)";
	atmosphere.compositionPercentages[6] = 0.0004;
	orbit.otherDescription = "Jupiter inhabits the area past the asteroid belt. Its much farther away than Mars.\n";
	physics.otherDescription = "Jupiter is the largest planet in the solar system, and it has the greatest mass.\nIt is a gas giant, meaning that there is no solid surface on the planet.\n";
	atmosphere.otherDescription = "Jupiter's atmosphere is made up of mostly Hydrogen and Helium.\n It has storms all across its surface roaring at hundreds of miles per hour at all times.\n";
}

void Planet::saturnGen() {
	orbit.aphelion = 10.086;
	orbit.perihelion = 9.024;
	orbit.semiMajorAxis = 9.5549;
	orbit.eccentricity = 0.05555;
	orbit.orbitalPeriodJulian = 29.4571;
	orbit.orbitalPeriodDays = 10759.22;
	orbit.orbitalPeriodSols = 24491.07;
	orbit.synodicPeriodJulian = 1.12;
	orbit.synodicPeriodDays = 378.09;
	orbit.orbitalSpeed = 9690; //m/s
	orbit.eclipticInclination = 2.485240;
	orbit.sunInclination = 5.51;
	orbit.invariableInclination = 0.93;
	orbit.satellites = 62;
	physics.meanRadius = 58232;
	physics.meanRadiusError = 6.0;
	physics.equatorialRadius = 60268;
	physics.equatorialRadiusEarths = 9.4492;
	physics.equatorialRadiusError = 4.0;
	physics.polarRadius = 54364;
	physics.polarRadiusEarths = 8.5521;
	physics.polarRadiusError = 10.0;
	physics.flattening = 0.09796;
	physics.surfaceArea = 42700000; // times 10^3 km^2
	physics.surfaceAreaEarths = 83.703;
	physics.volume = 82713000; // times 10^7   km^3
	physics.volumeEarths = 763.59;
	physics.mass = 56836000; // times 10^19 kg
	physics.massEarths = 95.159;
	physics.meanDensity = 0.687; //g/cm^3
	physics.meanDensityError = 0.0;
	physics.surfaceGravity = 10.44; // m/s^2
	physics.surfaceGravityEarths = 1.065;
	physics.escapeVelocity = 35500; // m/s
	physics.rotationPeriod.hour = 10;
	physics.rotationPeriod.minute = 33;
	physics.rotationPeriod.second = 4.100;
	physics.rotationPeriodEarths = 0.439583;
	physics.rotationVelocity = 9870; // m/s
	physics.isRetrograde = false;
	physics.axialTilt = 26.73; //degrees
	atmosphere.surfaceTemperatureMin = 54;
	atmosphere.surfaceTemperatureMinC = -219.15;
	atmosphere.surfaceTemperatureMinF = -362.47;
	atmosphere.surfaceTemperatureMean = 84;
	atmosphere.surfaceTemperatureMeanC = -189.15;
	atmosphere.surfaceTemperatureMeanF = -308.47;
	atmosphere.surfaceTemperatureMax = 134;
	atmosphere.surfaceTemperatureMaxC = -139.15;
	atmosphere.surfaceTemperatureMaxF = -218.47;
	atmosphere.surfacePressure = 52.2271; // kPa
	atmosphere.surfacePressureEarths = 0.512;
	atmosphere.compSize = 6;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	atmosphere.composition[0] = "Hydrogen (H2)";
	atmosphere.compositionPercentages[0] = 96;
	atmosphere.composition[1] = "Helium (He)";
	atmosphere.compositionPercentages[1] = 3;
	atmosphere.composition[2] = "Methane (CH4)";
	atmosphere.compositionPercentages[2] = 0.4;
	atmosphere.composition[3] = "Ammonia (NH3)";
	atmosphere.compositionPercentages[3] = 0.01;
	atmosphere.composition[4] = "Hydrogen Deuteride (HD)";
	atmosphere.compositionPercentages[4] = 0.01;
	atmosphere.composition[5] = "Ethane (C2H6)";
	atmosphere.compositionPercentages[5] = 0.0007;
	orbit.otherDescription = "Saturn has awesome rings and an uncountable number of satellites.\n";
	physics.otherDescription = "Like jupiter it is a gas giant.\nIt's density is so low some scientists have said that saturn would float on water.\n";
	atmosphere.otherDescription = "Saturn has awesome rings and an uncountable number of satellites.\nIts atmosphere is similar to Jupiter, but the storms are even faster.\n";
}

void Planet::createNewPlanet() {
	string in, newS;
	bool loop = true;
	do {
		cout << "Would you like to create a planet that is based on an existing planet? (type yes or no.)\n";
		getline(cin, in);
		newS = GlobalFuncs::convertToCaps(in);
		if (newS == "YES") {
			int planetSeed;
			newS = "";
			cout << "Which planet would you like your new planet to be based on?\n";
			getline(cin, in);
			newS = GlobalFuncs::convertToCaps(in);
			if (newS == "EARTH") {
				cout << "You have chosen to make it like Earth.\n"
					<< "How different from the original planet do you want it to be? (in a percentage)\n";
				cin >> planetSeed;
				while (planetSeed > 100 || planetSeed < 0) {
					cout << "Percentage is out of bounds. Please pick a seed between 0 and 100\n";
					cin >> planetSeed;
				}
				cin.ignore();
				cout << "Great! Please give your new Earth-style planet a name.\n";
				getline(cin, planetName);
				cout << "Generating a Terran-style planet...\n";
				earthGen();
				randomDistribution(planetSeed);
				loop = false;
			}
			else if (newS == "MARS") {
				cout << "You have chosen to make it like Mars.\n"
					<< "How different from the original planet do you want it to be? (in a percentage)\n";
				cin >> planetSeed;
				while (planetSeed > 100 || planetSeed < 0) {
					cout << "Percentage is out of bounds. Please pick a seed between 0 and 100\n";
					cin >> planetSeed;
				}
				cin.ignore();
				cout << "Great! Please give your new Mars-style planet a name.\n";
				getline(cin, planetName);
				cout << "Generating a Martian-style planet...\n";
				marsGen(); //call the mars special function.
				randomDistribution(planetSeed);
				loop = false;
			}
			else if (newS == "VENUS") {
				cout << "You have chosen to make it like Venus.\n"
					<< "How different from the original planet do you want it to be? (in a percentage)\n";
				cin >> planetSeed;
				while (planetSeed > 100 || planetSeed < 0) {
					cout << "Percentage is out of bounds. Please pick a seed between 0 and 100\n";
					cin >> planetSeed;
				}
				cin.ignore();
				cout << "Great! Please give your new Venusian-style planet a name.\n";
				getline(cin, planetName);
				cout << "Generating a Venusian-style planet...\n";
				venusGen();
				randomDistribution(planetSeed);
				loop = false;
			}
			else if (newS == "MERCURY") {
				cout << "You have chosen to make it like Mercury. \n"
					<< "How different from the original planet do you want it to be? (in a percentage)\n";
				cin >> planetSeed;
				while (planetSeed > 100 || planetSeed < 0) {
					cout << "Percentage is out of bounds. Please pick a seed between 0 and 100\n";
					cin >> planetSeed;
				}
				cin.ignore();
				cout << "Great! Please give your new Merucry-style planet a name.\n";
				getline(cin, planetName);
				cout << "Generating a Mercury-style planet...\n";
				mercuryGen();
				randomDistribution(planetSeed);
				loop = false;
			}
			else if (newS == "JUPITER") {
				cout << "You have chosen to make it like Jupiter. \n"
					<< "How different from the original planet do you want it to be? (in a percentage)\n";
				cin >> planetSeed;
				while (planetSeed > 100 || planetSeed < 0) {
					cout << "Percentage is out of bounds. Please pick a seed between 0 and 100\n";
					cin >> planetSeed;
				}
				cin.ignore();
				cout << "Great! Please give your new Jovian-style planet a name.\n";
				getline(cin, planetName);
				cout << "Generating a Jovian-style planet...\n";
				jupiterGen();
				randomDistribution(planetSeed);
				loop = false;
			}
			else if (newS == "SATURN") {
				cout << "You have chosen to make it like Saturn. \n"
					<< "How different from the original planet do you want it to be? (in a percentage)\n";
				cin >> planetSeed;
				while (planetSeed > 100 || planetSeed < 0) {
					cout << "Percentage is out of bounds. Please pick a seed between 0 and 100\n";
					cin >> planetSeed;
				}
				cin.ignore();
				cout << "Great! Please give your new Saturn-style planet a name.\n";
				getline(cin, planetName);
				cout << "Generating a Saturn-style planet...\n";
				saturnGen();
				randomDistribution(planetSeed);
				loop = false;
			}
			else if (newS == "URANUS") {
				cout << "You have chosen to make it like Uranus. \n"
					<< "How different from the original planet do you want it to be? (in a percentage)\n";
				cin >> planetSeed;
				while (planetSeed > 100 || planetSeed < 0) {
					cout << "Percentage is out of bounds. Please pick a seed between 0 and 100\n";
					cin >> planetSeed;
				}
				cin.ignore();
				cout << "Great! Please give your new Saturn-style planet a name.\n";
				getline(cin, planetName);
				cout << "Generating a Saturn-style planet...\n";
				saturnGen();
				randomDistribution(planetSeed);
				loop = false;
			}
			else {
				cout << "couldn't understand your input,\nor your input has not been pre-loaded into the system.\n";
			}
		}
		else if (newS == "NO") {
			cout << "Making a planet from scratch.\n";
			loop = false;
			createFromScratch();
		}
		else {
			cout << "Could not understand your input. please try again. ";
		}
	} while (loop == true);
}

void Planet::randomDistribution(int seed) {
	double * mult = new double[35 + atmosphere.compSize];
	srand(time(0));
	for (int i = 0; i < (35 + atmosphere.compSize); i++) { //create an array of randomized numbers to modify
		mult[i] = ((rand() % ((100 + seed) - (100 - seed)) + (100 - seed)) / 100.0) - 1;
	}
	cout << '\n';
	orbit.aphelion += orbit.aphelion * mult[0];
	orbit.perihelion += orbit.perihelion * mult[1]; //AU
	orbit.semiMajorAxis += orbit.semiMajorAxis * mult[2]; //AU
	orbit.eccentricity += orbit.eccentricity * mult[3];
	orbit.orbitalPeriodJulian += orbit.orbitalPeriodJulian * mult[4];
	orbit.orbitalPeriodDays += orbit.orbitalPeriodDays * mult[4];
	orbit.orbitalPeriodSols += orbit.orbitalPeriodSols * mult[4];
	orbit.orbitalSpeed += orbit.orbitalSpeed * mult[5];
	orbit.synodicPeriodJulian += orbit.synodicPeriodJulian * mult[6];
	orbit.synodicPeriodDays += orbit.synodicPeriodDays * mult[6];
	orbit.eclipticInclination += orbit.eclipticInclination * mult[7];
	orbit.sunInclination += orbit.sunInclination * mult[8];
	orbit.invariableInclination += orbit.invariableInclination * mult[9];
	orbit.satellites += orbit.satellites * mult[10];
	physics.meanRadius += physics.meanRadius * mult[11];
	physics.meanRadiusError += physics.meanRadiusError * mult[12];
	physics.meanRadiusEarths += physics.meanRadiusEarths * mult[11];
	physics.equatorialRadius += physics.equatorialRadius * mult[13];
	physics.equatorialRadiusEarths += physics.equatorialRadiusEarths * mult[13];
	physics.equatorialRadiusError += physics.equatorialRadiusError * mult[14];
	physics.polarRadius += physics.polarRadius * mult[15];
	physics.polarRadiusEarths += physics.polarRadiusEarths * mult[15];
	physics.polarRadiusError += physics.equatorialRadiusError * mult[16];
	physics.flattening += physics.flattening * mult[17];
	physics.surfaceArea += physics.surfaceArea * mult[18];
	physics.surfaceAreaEarths += physics.surfaceAreaEarths * mult[18];
	physics.volume += physics.volume * mult[19];
	physics.volumeEarths += physics.volumeEarths * mult[19];
	physics.mass += physics.mass * mult[20];
	physics.massEarths += physics.massEarths * mult[20];
	physics.meanDensity += physics.meanDensity * mult[21];
	physics.meanDensityError += physics.meanDensityError * mult[22];
	physics.surfaceGravity += physics.surfaceGravity * mult[23];
	physics.surfaceGravityEarths += physics.surfaceGravityEarths * mult[23];
	physics.escapeVelocity += physics.escapeVelocity * mult[24];
	physics.rotationPeriod.hour += physics.rotationPeriod.hour * mult[25];
	physics.rotationPeriod.minute += physics.rotationPeriod.minute * mult[26];
	physics.rotationPeriod.second += physics.rotationPeriod.second * mult[27];
	physics.rotationPeriodEarths += physics.rotationPeriodEarths * mult[28];
	physics.rotationVelocity += physics.rotationVelocity * mult[29];
	physics.axialTilt += physics.axialTilt * mult[30];
	physics.isRetrograde += physics.isRetrograde + (rand() % 2);
	atmosphere.surfaceTemperatureMin += atmosphere.surfaceTemperatureMin * mult[31];
	atmosphere.surfaceTemperatureMinC += atmosphere.surfaceTemperatureMinC * mult[31];
	atmosphere.surfaceTemperatureMinF += atmosphere.surfaceTemperatureMinF * mult[31];
	atmosphere.surfaceTemperatureMean += atmosphere.surfaceTemperatureMean * mult[32];
	atmosphere.surfaceTemperatureMeanC += atmosphere.surfaceTemperatureMeanC * mult[32];
	atmosphere.surfaceTemperatureMeanF += atmosphere.surfaceTemperatureMeanF * mult[32];
	atmosphere.surfaceTemperatureMax += atmosphere.surfaceTemperatureMax * mult[33];
	atmosphere.surfaceTemperatureMaxC += atmosphere.surfaceTemperatureMaxC * mult[33];
	atmosphere.surfaceTemperatureMaxF += atmosphere.surfaceTemperatureMaxF * mult[33];
	atmosphere.surfacePressure += atmosphere.surfacePressure * mult[34];
	atmosphere.surfacePressureEarths += atmosphere.surfacePressureEarths * mult[34];
	static double j = 0; //counts the total that the loop creates.
	for (int i = 0; i < atmosphere.compSize; i++) {
		atmosphere.compositionPercentages[i] += atmosphere.compositionPercentages[i] * mult[i + 35];
		j += atmosphere.compositionPercentages[i];
	}
	if (j > 100 || j < 100) { //if the new total distribution goes over or under 100%,
		for (int i = 0; i < atmosphere.compSize; i++) {
			atmosphere.compositionPercentages[i] = (atmosphere.compositionPercentages[i]/ j) * 100.0; //re-scale the total percentages to 100 for all.
		}
	}
}

void Planet::createFromScratch() {
	cout << "What is your Planet's Name?\n";
	getline(cin, planetName);
	cout << "What is the aphelion of your planets orbit?\n (if you aren't sure, input negative one.)\n";
	cin >> orbit.aphelion;
	cout << "What is the perihelion of your planets orbit?\n (if you aren't sure, input negative one.)\n";
	cin >> orbit.perihelion;
	cout << "What is the semi-major axis of your planets orbit? \n";
	cin >> orbit.semiMajorAxis;
	cout << "What is the eccentricity of your planets orbit? \n";
	cin >> orbit.eccentricity;
	cout << "What is the julian orbital period? of your planet? (in earth years)\n";
	cin >> orbit.orbitalPeriodJulian;
	orbit.orbitalPeriodDays = orbit.orbitalPeriodJulian * 365.265363003;
	cout << "What is the julian synodic period of your planet? (in earth years)\n";
	cin >> orbit.synodicPeriodJulian;
	orbit.synodicPeriodDays = orbit.synodicPeriodJulian * 365.265363003;
	cout << "What is the orbital speed of your planet? (in m/s)\n";
	cin >> orbit.orbitalSpeed;
	cout << "What is the inclination of orbit in reference to the planets ecliptic? (in degrees)\n";
	cin >> orbit.eclipticInclination;
	cout << "What is the inclination of orbit in reference to the planets star? (in degrees)\n";
	cin >> orbit.sunInclination;
	cout << "What is the inclination of orbit in reference to the planets star? (in degrees)\n";
	cin >> orbit.invariableInclination;
	cout << "How many satellites does your planet have?\n";
	cin >> orbit.satellites;
	cout << "What is the mean radius of the planet? (in km's)\n";
	cin >> physics.meanRadius;
	physics.meanRadiusEarths = physics.meanRadius / 6371.0;
	cout << "What is the error factor on that measurement? (in km's)\n";
	cin >> physics.meanRadiusError;
	cout << "What is the equatorial radius of the planet? (in km's)\n";
	cin >> physics.equatorialRadius;
	physics.equatorialRadiusEarths = physics.equatorialRadius / 6378.1;
	cout << "What is the error factor on that measurement? (in km's)\n";
	cin >> physics.equatorialRadiusError;
	cout << "What is the polar radius of the planet (in km's)\n";
	cin >> physics.polarRadius;
	physics.polarRadiusEarths = physics.polarRadius / 6356.8;
	cout << "What is the error factor on that measurement? (in km's)\n";
	cin >> physics.polarRadiusError;
	cout << "What is the flattening ratio on this planet?\n";
	cin >> physics.flattening;
	cout << "What is the surface area on this planet? (in * 10^3 km^2) \n";
	cin >> physics.surfaceArea;
	physics.surfaceAreaEarths = physics.surfaceArea / 510072.0;
	cout << "What is the volume of this planet (in * 10^7 km^3) \n";
	cin >> physics.volume;
	physics.volumeEarths = physics.volume / 108321.0; // times 10^7
	cout << "What is the mass of this planet (in * 10^19 kg) \n";
	cin >> physics.mass;
	physics.massEarths = physics.mass / 579237.0; // times 10^19;
	cout << "What is the average density on this planet? (in g/cm^3) \n";
	cin >> physics.meanDensity;
	cout << "What is the error factor on that measurement? (in g/cm^3) \n";
	cin >> physics.meanDensityError;
	cout << "What is the surface gravity on this planet (in m/s^2) \n";
	cin >> physics.surfaceGravity;
	physics.surfaceGravityEarths = physics.surfaceGravity / 9.807; //m/s^2
	cout << "What is the escape velocity on this planet? (in m/s) \n";
	cin >> physics.escapeVelocity;
	cout << "What is the rotation period on this planet?\n Please enter the hours first as a whole number. \n";
	cin >> physics.rotationPeriod.hour;
	cout << "Now the minutes as a whole number please. \n";
	cin >> physics.rotationPeriod.minute;
	cout << "Now seconds. Feel free to use decimals here.\n";
	cin >> physics.rotationPeriod.second;
	physics.rotationPeriodEarths = ((physics.rotationPeriod.hour * 3600) + (physics.rotationPeriod.minute * 60) + physics.rotationPeriod.second)/86164.1;
	cout << "What is the rotational velocity on this planet\n(negative means retrograde, zero means tidal lock.) (in m/s)\n";
	orbit.orbitalPeriodSols = orbit.orbitalPeriodDays / physics.rotationPeriodEarths; // oh boy!
	cin >> physics.rotationVelocity;
	if (physics.rotationVelocity < 0) {
		physics.isRetrograde = true;
	}
	cout << "What is the axial tilt of the planet?\n ";
	cin >> physics.axialTilt;
	cout << "What is the average surface temperature on the planet? (in Fahrenheit) \n";
	cin >> atmosphere.surfaceTemperatureMeanF;
	atmosphere.surfaceTemperatureMeanC = (atmosphere.surfaceTemperatureMeanF * (5 / 9.)) - 32;
	atmosphere.surfaceTemperatureMean = atmosphere.surfaceTemperatureMeanC + 273.15;
	cout << "What is the lowest surface temperature on the planet? (in Fahrenheit) \n";
	cin >> atmosphere.surfaceTemperatureMinF;
	atmosphere.surfaceTemperatureMinC = (atmosphere.surfaceTemperatureMinF * (5 / 9.)) - 32;
	atmosphere.surfaceTemperatureMin = atmosphere.surfaceTemperatureMinC + 273.15;
	cout << "what is the highest surface temperature on the planet? (in Fahrenheit) \n";
	cin >> atmosphere.surfaceTemperatureMaxF;
	atmosphere.surfaceTemperatureMaxC = (atmosphere.surfaceTemperatureMaxF * (5 / 9.)) - 32;
	atmosphere.surfaceTemperatureMax = atmosphere.surfaceTemperatureMaxC + 273.15;
	cout << "What is the surface pressure on the planet? (in kPa)\n(feel free to ignore insignificantly small pressure levels)\n";
	cin >> atmosphere.surfacePressure;
	atmosphere.surfacePressureEarths = atmosphere.surfacePressure / 101.325;
	cout << "How many components/elements/compounds are in the atmosphere on this planet?\n(feel free to ignore trace amounts)\n";
	cin >> atmosphere.compSize;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	for (int i = 0; i < atmosphere.compSize; i++) {
		cout << "What is the " << i + 1 << "component called?\n";
		cin.ignore();
		getline(cin, atmosphere.composition[i]);
		cout << "How much of it is in the atmosphere? (in a percentage)\n";
		cin >> atmosphere.compositionPercentages[i];
	}
	cout << "In a short sentence or two, how would you describe it's orbit?\n";
	cin.ignore();
	getline(cin, orbit.otherDescription);
	cout << "In a short sentence or two, how would you describe it's physical characteristics?\n";
	getline(cin, physics.otherDescription);
	cout << "In a short sentence or two, how would you describe it's atmosphere?\n";
	getline(cin, atmosphere.otherDescription);
}

int Planet::colonization() {
	int score = 100;
	cout << "Trying to colonize the planet ...\n";
	if (orbit.aphelion / orbit.perihelion > 1.8 || orbit.eccentricity > 0.08) {
		cout << "This planet has an irregular orbit, making it more difficult to predict its location during the mission.\n";
		score -= 5;
	}
	if (orbit.orbitalPeriodJulian > 6) {
		cout << "This planet has a very long year. Seasons last much longer because of this. \n";
		score -= 5;
	}
	if (orbit.orbitalSpeed > 35000) {
		cout << "This planet moves very quickly in it's orbit, making it a difficult destination to catch. \n";
		score -= 5;
	}
	if (orbit.satellites > 10) {
		cout << "This planet has many satellites!\nPerhaps a Moon or two could be colonized for research.\n";
		score += 5;
	}
	if (physics.massEarths > 10) {
		cout << "This planet is much more massive than Earth. \n";
		score -= 10;
	}
	else if (physics.massEarths < 0.1) {
		cout << "This planet is much less massive than Earth. \n";
		score -= 5;
	}
	if (physics.meanRadiusEarths > 2) {
		cout << "This planet has a large distance between its core and its surface.\n";
		score -= 5;
	}
	else if (physics.meanRadiusEarths < 0.5) {
		cout << "This planet has less distance between its core and its surface.\n";
		score -= 5;
	}
	if (physics.meanDensity < 2.5) {
		cout << "This planet's surface is not dense enough to provide a long term habitation for our colonists.\n";
		score -= 10;
	}
	if (physics.surfaceAreaEarths < 0.25) {
		cout << "This planet has less than a quarter of the surface area as earth. Not exactly ideal.\n";
		score -= 5;
	}
	if (physics.volumeEarths > 20) {
		cout << "This planet might be too large to colonize effectively.\n";
		score -= 5;
	}
	if (physics.surfaceGravityEarths > 2) {
		cout << "Gravity on this planet is crushing on the surface, keeping our colonists constantly under duress.\n";
		score -= 10;
	}
	else if (physics.surfaceGravityEarths < 0.1) {
		cout << "Gravity is nearly nonexistent on the surface, causing our colonists to have to rely on artificial gravity.\n";
		score -= 5;
	}
	if (physics.rotationVelocity < 120) {
		cout << "The world spins at a slow pace, causing the days and nights to be very long and psychologically taxing to the colonists.\n";
		score -= 10;
	}
	else if (physics.rotationVelocity > 1000) {
		cout << "The world spins at a frightening speed, causing days and nights to last a few hours and generating a massive flux. \n";
		score -= 10;
	}
	if (physics.escapeVelocity > 30000) {
		cout << "Because of the escape velocity on this planet,\n"
			"Gases in this planet's atmosphere are guaranteed to be mostly light compounds like Hydrogen and Helium.\n";
		score -= 5;
	}
	if (atmosphere.surfacePressureEarths > 10) {
		cout << "The surface pressure on this planet is crushing for the colonists. \n";
		score -= 15;
	}
	if (atmosphere.surfacePressureEarths < 0.001) {
		cout << "The surface pressure on this planet is too low to contain a human body (explosions may occur)\n";
	}
	if (atmosphere.surfaceTemperatureMax - atmosphere.surfaceTemperatureMin > 200) {
		cout << "The temperature of " << planetName << "Varies wildly from too hot to too cold, making it very difficult to terraform.\n";
		score -= 10;
	}
	else if (atmosphere.surfaceTemperatureMean < 220) {
		cout << "The bitter cold on this planet is too much for the colonists to deal with without extra protection.\n";
		score -= 5;
	}
	else if (atmosphere.surfaceTemperatureMean > 350) {
		cout << "The heat on this planet is too much for the colonists to handle without extra protection.\n";
		score -= 10;
	}
	for (int i = 0; i < atmosphere.compSize; i++) {
		if (atmosphere.composition[i] == "Oxygen (O2)") {
			cout << "Oxygen is essential for humans to breathe, and is a component in liquid water.\n";
		}
		if (atmosphere.composition[i] == "Hydrogen (H2)") {
			cout << "Hydrogen in the atmosphere is a small step towards liquid water.\n"
				<< "Hydrogen can also be used as a cheap fuel, and for introducing Hydrogen to terraform Venus-like planets.\n";
		}
		if (atmosphere.composition[i] == "Carbon Dioxide (CO2)") {
			cout << "Carbon Dioxide in the atmosphere can help heat the surface of the planet\n"
				<< "via greenhouse effect. CO2 can be converted to oxygen (O2) with the help of plants.\n";
		}
		if (atmosphere.composition[i] == "Nitrogen (N2)") {
			cout << "Nitrogen in the atmosphere helps support plant life as well as some extra protection from solar winds\n"
				<< "Having Nitrogen in the atmosphere is essential for life.\n";
		}
	}
	return score;
}

int Planet::terraform() {
	int score = 100; //starts at a perfect score.
	cout << "Trying to terraform the planet ...\n";
	if (orbit.aphelion / orbit.perihelion > 1.8 || orbit.eccentricity > 0.08) {
		cout << planetName << " has an irregular orbit, causing seasonal extremes in temperature,\n and constant variations in position.\n";
		score -= 10;
	}
	if (orbit.orbitalPeriodJulian > 6) {
		cout << planetName << " has a very long year. Seasons last much longer, making it hard for Earth-born organisms to adapt. \n";
		score -= 10;
	}
	if (orbit.orbitalSpeed > 35000) {
		cout << planetName << " moves very quickly in it's orbit, making it a difficult destination to catch. \n";
		score -= 5;
	}
	if (orbit.satellites > 10) {
		cout << planetName << " has many satellites!\nPerhaps a Moon or two could be colonized for research.\n";
		score += 5;
	}
	if (physics.massEarths > 10) {
		cout << planetName << " is much more massive than Earth. \n";
		score -= 10;
	}
	else if (physics.massEarths < 0.1) {
		cout << planetName << " is much less massive than Earth. \n";
		score -= 5;
	}
	if (physics.meanRadiusEarths > 2) {
		cout << planetName << " has a large distance between its core and its surface.\n";
		score += 5;
	}
	else if (physics.meanRadiusEarths < 0.5) {
		cout << planetName << " has less distance between its core and its surface.\n";
		score -= 5;
	}
	if (physics.meanDensity < 2.5) {
		cout << planetName << "'s surface is not dense enough to be terraformed effectively.\n";
		score -= 25;
	}
	if (physics.surfaceAreaEarths < 0.25) {
		cout << planetName << " has less than a quarter of the surface area as earth. Not exactly ideal for terraforming.\n";
		score -= 5;
	}
	if (physics.volumeEarths > 20) {
		cout << planetName << " is many times larger than Earth, causing terraforming efforts to be near hopeless.\n";
		score -= 5;
	}
	if (physics.surfaceGravityEarths > 2) {
		cout << "Gravity on " << planetName << " is crushing on the surface, causing all but the most tenacious\nEarth-based life to live shorter life spans.\n";
		score -= 10;
	}
	else if (physics.surfaceGravityEarths < 0.1) {
		cout << "Our terraforming efforts will have to rely on artificial gravity, because " << planetName << " has next to none.\n";
		score -= 5;
	}
	if (physics.rotationVelocity < 120) {
		cout << planetName << " spins at a slow pace, causing the days and nights to be very long and catastrophically altering the biological processes of Earth-based life.\n";
		score -= 15;
	}
	else if (physics.rotationVelocity > 1000) {
		cout << planetName << " spins at a frightening speed, causing days and nights to last a few hours,\nand defecting the natural cycles of Earth-based life. \n";
		score -= 5;
	}
	if (physics.escapeVelocity > 30000) {
		cout << "Because of the escape velocity on " << planetName << ",\n"
			"Gases on " << planetName << "'s atmosphere are almost guaranteed to be mostly light compounds like Hydrogen and Helium.\n";
		score -= 5;
	}
	if (atmosphere.surfacePressureEarths > 10) {
		cout << "The surface pressure on " << planetName << " is crushing. All Earth-based life introduced must be kept in pressurized containers.\n";
		score -= 10;
	}
	if (atmosphere.surfacePressureEarths < 0.01) {
		cout << "The surface pressure on this planet is too low to contain Earth-based life. It must be introduced using presurized containers.\n";
		score -= 10;
	}
	if (atmosphere.surfaceTemperatureMax - atmosphere.surfaceTemperatureMin > 200) {
		cout << "The temperature on " << planetName << " varies from too hot to too cold for almost all kinds of terrestrial life.\n";
		score -= 15;
	}
	else if (atmosphere.surfaceTemperatureMean < 220) {
		cout << "The bitter cold on this planet is too much for any Earth-based life to survive without extra protection.\n";
		score -= 5;
	}
	else if (atmosphere.surfaceTemperatureMean > 350) {
		cout << "The heat on this planet is too much for any Earth-based life to survive without extra protection.\n";
		score -= 10;
	}
	for (int i = 0; i < atmosphere.compSize; i++) {
		if (atmosphere.composition[i] == "Oxygen (O2)") {
			cout << "Oxygen is essential for humans to breathe, and is a component in liquid water.\n";
		}
		if (atmosphere.composition[i] == "Hydrogen (H2)") {
			cout << "Hydrogen in the atmosphere is a small step towards liquid water.\n"
				<< "It can also be used for fuel, for terraforming Venus-like planets.\n";
		}
		if (atmosphere.composition[i] == "Carbon Dioxide (CO2)") {
			cout << "Carbon Dioxide in the atmosphere can help heat the surface of the planet\n"
				<< "via greenhouse effect. CO2 can be converted to oxygen (O2) with the help of plants.\n";
		}
		if (atmosphere.composition[i] == "Nitrogen (N2)") {
			cout << "Nitrogen in the atmosphere helps support plant life as well as some extra protection from solar winds\n"
				<< "Having Nitrogen in the atmosphere is essential for life.\n";
		}
	}
	return score;
}

Planet Planet::readPlanet() {
	Planet p;
	delete[] p.atmosphere.composition; //make space for the new information.
	delete[] p.atmosphere.compositionPercentages;
	ifstream in;
	try { //in case the file does not exist.
		in.open("PlanetData.dat", ios::binary);
	}
	catch (string fnfException) {
		throw "PlanetData.dat FILE NOT FOUND. . .\n";
		Planet p2; //make a default planet
		return p2; //return from this function.
	}
	in.seekg(0, ios::end); //go to the end of the file.
	in.read(reinterpret_cast<char *>(&p.atmosphere.compSize), sizeof(p.atmosphere.compSize));
	p.atmosphere.composition = new string[p.atmosphere.compSize];
	p.atmosphere.compositionPercentages = new double[p.atmosphere.compSize];
	in.seekg(0, ios::beg);
	in.read(reinterpret_cast<char *>(&p), sizeof(p));
	in.close();
	p.printInfo();
	return p; //returns the planet. (planets have = overloaded operator so they this can be used to assign to an existing planet.
}

void Planet::writePlanet(Planet p) {//writes the planet's data as a binary file.
	ofstream out;
	out.open("PlanetData.dat", ios::binary);
	out.seekp(0, ios::beg);
	out.write(reinterpret_cast<char *>(&p), sizeof(p));
	out.seekp(0, ios::end);
	out.write(reinterpret_cast<char *>(&p.atmosphere.compSize), sizeof(p.atmosphere.compSize));
	out.close();
}

void Planet::printInfo() {
	cout << setprecision(7) //cutting off any unnecessary precision points.
		<< "Planet Name:             " << planetName << '\n'
		<< "Aphelion:                " << orbit.aphelion << '\n'
		<< "Perihelion:              " << orbit.perihelion << '\n'
		<< "Semi-Major Axis:         " << orbit.semiMajorAxis << '\n'
		<< "Eccentricity:            " << orbit.eccentricity << '\n'
		<< "Julian Orbital Period:   " << orbit.orbitalPeriodJulian << '\n'
		<< "Orbital Period in Days:  " << orbit.orbitalPeriodDays << '\n'
		<< "Orbital Period in Sols:  " << orbit.orbitalPeriodSols << '\n'
		<< "Julian Synodic Period:   " << orbit.synodicPeriodJulian << '\n'
		<< "Synodic Period in Days:  " << orbit.synodicPeriodDays << '\n'
		<< "Orbital Speed:           " << orbit.orbitalSpeed << '\n'
		<< "Ecliptic Inclination:    " << orbit.eclipticInclination << '\n'
		<< "Sun Inclination:         " << orbit.sunInclination << '\n'
		<< "Invariable Inclination:  " << orbit.invariableInclination << '\n'
		<< "Satellites:              " << orbit.satellites << '\n'
		<< "Mean Radius:             " << physics.meanRadius << '\n'
		<< "Mean Radius Error:       " << physics.meanRadiusError << '\n'
		<< "Mean Radius Earth:       " << physics.meanRadiusEarths << '\n'
		<< "Equatorial Radius:       " << physics.equatorialRadius << '\n'
		<< "Equatorial Radius Earth: " << physics.equatorialRadiusEarths << '\n'
		<< "Equatorial Radius Error: " << physics.equatorialRadiusError << '\n'
		<< "Polar Radius:            " << physics.polarRadius << '\n'
		<< "Polar Radius Earth:      " << physics.polarRadiusEarths << '\n'
		<< "Polar Radius Error:      " << physics.polarRadiusError << '\n'
		<< "Flattening:              " << physics.flattening << '\n'
		<< "Surface Area:            " << physics.surfaceArea << '\n'
		<< "Surface Area Earth:      " << physics.surfaceAreaEarths << '\n'
		<< "Volume:                  " << physics.volume << '\n'
		<< "Volume Earth:            " << physics.volumeEarths << '\n'
		<< "Mass:                    " << physics.mass << '\n'
		<< "Mass Earth:              " << physics.massEarths << '\n'
		<< "Mean Density:            " << physics.meanDensity << '\n'
		<< "Mean Density Error:      " << physics.meanDensityError << '\n'
		<< "Surface Gravity:         " << physics.surfaceGravity << '\n'
		<< "Surface Gravity Earth:   " << physics.surfaceGravityEarths << '\n'
		<< "Escape Velocity:         " << physics.escapeVelocity << '\n'
		<< "Rotation Period (h/m/s): " << physics.rotationPeriod.hour << ":"
		<< physics.rotationPeriod.minute << ":" << physics.rotationPeriod.second << '\n'
		<< "Rotation Period (Earth): " << physics.rotationPeriodEarths << '\n'
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

void Planet::operator=(const Planet & right) //left planets attributes modified to be the same as right planets.
{
	if (atmosphere.compSize > 0) {
		delete[] atmosphere.composition;
		delete[] atmosphere.compositionPercentages;
	}
	orbit.aphelion = right.orbit.aphelion;
	orbit.eccentricity = right.orbit.eccentricity;
	orbit.eclipticInclination = right.orbit.eclipticInclination;
	orbit.invariableInclination = right.orbit.invariableInclination;
	orbit.orbitalPeriodDays = right.orbit.orbitalPeriodDays;
	orbit.orbitalPeriodJulian = right.orbit.orbitalPeriodJulian;
	orbit.orbitalPeriodSols = right.orbit.orbitalPeriodSols;
	orbit.orbitalSpeed = right.orbit.orbitalSpeed;
	orbit.otherDescription = right.orbit.otherDescription;
	orbit.perihelion = right.orbit.perihelion;
	orbit.satellites = right.orbit.satellites;
	orbit.semiMajorAxis = right.orbit.semiMajorAxis;
	orbit.sunInclination = right.orbit.sunInclination;
	orbit.synodicPeriodDays = right.orbit.synodicPeriodDays;
	orbit.synodicPeriodJulian = right.orbit.synodicPeriodJulian;
	physics.axialTilt = right.physics.axialTilt;
	physics.equatorialRadius = right.physics.equatorialRadius;
	physics.equatorialRadiusEarths = right.physics.equatorialRadiusEarths;
	physics.equatorialRadiusError = right.physics.equatorialRadiusError;
	physics.escapeVelocity = right.physics.escapeVelocity;
	physics.flattening = right.physics.flattening;
	physics.isRetrograde = right.physics.isRetrograde;
	physics.mass = right.physics.mass;
	physics.massEarths = right.physics.massEarths;
	physics.meanDensity = right.physics.meanDensity;
	physics.meanDensityError = right.physics.meanDensityError;
	physics.meanRadius = right.physics.meanRadius;
	physics.meanRadiusEarths = right.physics.meanRadiusEarths;
	physics.meanRadiusError = right.physics.meanRadiusError;
	physics.otherDescription = right.physics.otherDescription;
	physics.polarRadius = right.physics.polarRadius;
	physics.polarRadiusEarths = right.physics.polarRadiusEarths;
	physics.polarRadiusError = right.physics.polarRadiusError;
	physics.rotationPeriod.hour = right.physics.rotationPeriod.hour;
	physics.rotationPeriod.minute = right.physics.rotationPeriod.minute;
	physics.rotationPeriod.second = right.physics.rotationPeriod.second;
	physics.rotationPeriodEarths = right.physics.rotationPeriodEarths;
	physics.rotationVelocity = right.physics.rotationVelocity;
	physics.surfaceArea = right.physics.surfaceArea;
	physics.surfaceAreaEarths = right.physics.surfaceAreaEarths;
	physics.surfaceGravity = right.physics.surfaceGravity;
	physics.surfaceGravityEarths = right.physics.surfaceGravityEarths;
	physics.volume = right.physics.volume;
	physics.volumeEarths = right.physics.volumeEarths;
	atmosphere.surfacePressure = right.atmosphere.surfacePressure;
	atmosphere.surfacePressureEarths = right.atmosphere.surfacePressureEarths;
	atmosphere.surfaceTemperatureMax = right.atmosphere.surfaceTemperatureMax;
	atmosphere.surfaceTemperatureMaxC = right.atmosphere.surfaceTemperatureMaxC;
	atmosphere.surfaceTemperatureMaxF = right.atmosphere.surfaceTemperatureMaxF;
	atmosphere.surfaceTemperatureMean = right.atmosphere.surfaceTemperatureMean;
	atmosphere.surfaceTemperatureMeanC = right.atmosphere.surfaceTemperatureMeanC;
	atmosphere.surfaceTemperatureMeanF = right.atmosphere.surfaceTemperatureMeanF;
	atmosphere.surfaceTemperatureMin = right.atmosphere.surfaceTemperatureMin;
	atmosphere.surfaceTemperatureMinC = right.atmosphere.surfaceTemperatureMinC;
	atmosphere.surfaceTemperatureMinF = right.atmosphere.surfaceTemperatureMinF;
	atmosphere.compSize = right.atmosphere.compSize;
	atmosphere.composition = new string[atmosphere.compSize];
	atmosphere.compositionPercentages = new double[atmosphere.compSize];
	for (int i = 0; i < right.atmosphere.compSize; i++) {
		atmosphere.composition[i] = right.atmosphere.composition[i];
		atmosphere.compositionPercentages[i] = right.atmosphere.compositionPercentages[i];
	}
	atmosphere.otherDescription = right.atmosphere.otherDescription;
}

Planet::~Planet()
{
}
