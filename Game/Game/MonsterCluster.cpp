#include "MonsterCluster.h"

#include <iostream>
using namespace std;

//void MonsterCluster::setMonsterOneName(string name) {
//	monsterList[0].name = name ="Goblin";
//	}
//
//void MonsterCluster::setMonsterTwoName() {
//	
//	monsterList[1].name = "Wraith";
//
//}
//
//
//void MonsterCluster::setMonsterThreeName() {
//	
//	monsterList[2].name = "Legioner";
//
//}

MonsterCluster::MonsterCluster()
{
	/*name = "";
	health = 2;
	damage = 3;*/
}

MonsterCluster::MonsterCluster(int _monsterIndex, string _name, int _health, int _damage)
{
	monsterList[_monsterIndex].name = _name;
	monsterList[_monsterIndex].health =_health;
	monsterList[_monsterIndex].damage = _damage;
}

//string MonsterCluster::getGoblinName() {
//	return monsterList[0].getMonsterName();
//}
//
//string MonsterCluster::getWraithName() {
//	return monsterList[1].getMonsterName();
//}
//
//string MonsterCluster::getLegionareName() {
//	return monsterList[2].getMonsterName();
//}
//
//void MonsterCluster::setGoblinHealth(int goblinHealth) {
//	monsterList[0].getHealth();
//}
//
//int MonsterCluster::getGoblinHealth() {
//	return monsterList[0].getHealth();
//}
//
//int MonsterCluster::getWraithHealth() {
//	return monsterList[1].getHealth();
//}
//
//int MonsterCluster::getLegionareHealth() {
//	return monsterList[2].getHealth();
//}
//int MonsterCluster::getGoblinDamage() {
//	return monsterList[0].getDamage();
//}
//
//int MonsterCluster::getWraithDamage() {
//	return monsterList[1].getDamage();
//}
//
//int MonsterCluster::getLegionareDamage() {
//	return monsterList[2].getDamage();
//}

//void MonsterCluster::goblinEncounter() {
//	cout << "You begin trading blows with the monster..." << endl;
//	monsterList[0].setHealth(monsterList[0].getHealth() - getDamage());
//	getGoblinStatusHealth();
//}
//void MonsterCluster::wraithEncounter() {
//	cout << "You begin trading blows with the monster..." << endl;
//	monsterList[1].setHealth(monsterList[1].getHealth() - getDamage());
//	getWraithStatusHealth();
//}
//void MonsterCluster::legionareEncounter() {
//	cout << "You begin trading blows with the monster..." << endl;
//	monsterList[2].setHealth(monsterList[2].getHealth() - getDamage());
//	getLegionareStatusHealth();
//}
//
//void MonsterCluster::playerTakingDamageGoblins() {
//
//	setHealth(getHealth() - getMonsterOneDamage());
//	
//}
//
//
//void MonsterCluster::playerTakingDamageWraits() {
//
//	setHealth(getHealth() - getMonsterTwoDamage());
//
//}
//
//void MonsterCluster::playerTakingDamageLegioners() {
//
//	setHealth(getHealth() - getMonsterThreeDamage());
//
//}
//void MonsterCluster::getGoblinStatusHealth() {
//		cout <<  "The monster's health has become : " << getGoblinHealth() << endl;
//	}
//
//void MonsterCluster::getWraithStatusHealth() {
//	cout << "The monster's health has become : " << getWraithHealth() << endl;
//}
//void MonsterCluster::getLegionareStatusHealth() {
//	cout << "The monster's health has become : " << getLegionareHealth() << endl;
//}