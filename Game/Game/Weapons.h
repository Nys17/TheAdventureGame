#pragma once
#include <string>
using namespace std;

class Weapons
{
public:
	int dmg;
	int durability;
	string name;

	Weapons() {
		dmg = 10;
		durability = 100;
		name = "weapon";
	}
};

