#pragma once
#include "Basics.h"
#include <string>
using namespace std;

class Monsters :
    public Basics
{
public:    
    string name;
   
public:

    Monsters() {
       name = "monster";
        health = 30;
        
        damage = 20;
        
    }

    Monsters(int _monsterIndex, string _name, int _health, int _damage);
    /*void setMonsterName(string monsterName);
    string getMonsterName();*/
    //void getMonsterStatusHealth();
   // void setMonsterHealth(int health);
   // int getMonsterhealth();
   
 
    //void monsterEncounter();
};

