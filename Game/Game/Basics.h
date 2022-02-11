#pragma once

using namespace std;

class Basics //// basics variables used by both monsters and player so just use a parent class
{
public:
	int health; // health
	int damage;

	
	

	Basics () {
		
		health = 100;
		damage = 10;
		

	}
	void setDamage(int damageDealt);
	int getDamage();
	void setHealth(int entityHealth);
	int getHealth();
	

};

