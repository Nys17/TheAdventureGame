#include "Monsters.h"

#include <iostream>
using namespace std;
#include <string>


//void Monsters::setMonsterName(string mosterName) {
//  name = mosterName;
//}
//string Monsters::getMonsterName() {
//	return name;
//}
//void Monsters::getMonsterStatusHealth() {
//	cout <<  "The monster's health has become : " << getHealth() << endl;
//}

Monsters::Monsters(int _monsterIndex, string _name, int _health, int _damage) //// delete monster cluster put it in the mosnter class
	{
	name = _name;
		health = _health;
		damage = _damage;
	}