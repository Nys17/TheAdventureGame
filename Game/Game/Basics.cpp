#include "Basics.h"
#include <string>
using namespace std;
#include	<iostream>


void Basics::setDamage(int damageDealt) {
	damage= damageDealt;
}
int Basics::getDamage() {
	return damage;
}
void Basics::setHealth(int entityHealth) {
	health = entityHealth;
}
int Basics::getHealth() {
	return health;
}

