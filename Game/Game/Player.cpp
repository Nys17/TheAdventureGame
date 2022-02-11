#include "Player.h"

#include <string>
using namespace std;
#include <iostream>

void Player::playerDeath(){
	cout <<"Your health has become 0... "<< endl <<  "It seemes you really didn't have it in you... Such a letdown" << endl << "Well would you try again, maybe dis time you would succeed" << endl;
	setHealth(0);
	system("pause");
	return ;
	
}

//void Player::setPlayerXPosition(float xPos) {
//	xPos = 10.0f;
//	;
//}
//float Player::getPlayerXPosition() {
//	return xPos;
//}
//float Player::setPlayerYPosition(float yPos) {
//	yPos = 10.0f;
//	return;
//}
//float Player::getPlayerYPosition() {
//	return yPos;
//}
//char position = '#';
//void Player::positionUpdate() {
//	
//	if (position == 'r') {
//		xPos += speed;
//	}
//	else if (position == 'l') {
//		xPos -= speed;
//	}
//	else if (position == 'f') {
//		yPos += speed;
//	}
//}
//void Player::setHealth(int playerHealth){
	//health = playerHealth;
//}
//int Player::getHealth() {
	//return health;
//}
void Player::setName(string playerName) {
	name = playerName ;
}
string Player::getName() {
	return name;
}

//void Player::setPlayerStatusHealth() {
//	
//}

void Player::getPlayerStatusHealth() {
cout  << "Your health has become : " << getHealth() << endl;
}

int Player::getPlayerDamage() {
	return damage;
}
