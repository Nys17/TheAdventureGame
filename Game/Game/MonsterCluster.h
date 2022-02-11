#pragma once
#include "Monsters.h"

class MonsterCluster :
    public Monsters
{
public:
    Monsters monsterList[3];



    MonsterCluster();
    MonsterCluster(int _monsterIndex, string _name, int _health, int _damage);
   
    
    
    
    
    
    
    /*void setMonsterOneName(string name);
    void setMonsterTwoName();
    void setMonsterThreeName();*/
   /* string getGoblinName();
    string getWraithName();
    string getLegionareName();
    void setGoblinHealth(int goblinHealh);
    int getGoblinHealth();
    int getWraithHealth();
    int getLegionareHealth();
    int getGoblinDamage();
    int  getWraithDamage();
    int getLegionareDamage();*/
   /* void goblinEncounter();
    void wraithEncounter();
    void legionareEncounter();
    void playerTakingDamageGoblins();
    void playerTakingDamageWraits();
    void playerTakingDamageLegioners();*/
   /* void getGoblinStatusHealth();
    void getWraithStatusHealth();
    void getLegionareStatusHealth();*/
};

