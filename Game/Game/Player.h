#pragma once
#include "Basics.h"
#include <string>
using namespace std;

class Player :
    public Basics
{
protected:
   
    int speed;
public:
    string name;
        Player () {
            name = "player";
            health = 100;
            speed = 3;
            
    }

        void setName(string playerName);
        string getName();
       /* void setPlayerStatusHealth();*/
        void getPlayerStatusHealth();
        void playerDeath();
    ///    void positionUpdate();
      /*  float setPlayerXPosition(float xPos);
       float getPlayerXPosition();
       float setPlayerYPosition(float yPos);
       float getPlayerYPosition();*/
      // void setHealth(int health);
      // int getHealth();
        int getPlayerDamage();
        
};

