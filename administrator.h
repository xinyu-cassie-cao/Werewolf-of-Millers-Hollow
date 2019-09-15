// Xinyu Cao
// Recitation #: 204
// Homework 8 Code Skeleton

#include <iostream>
#include <vector>
#include "goodguys.h"
#include "werewolf.h"
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
using namespace std;

class Administrator
{
    private:
        string identitycards[9];
        vector<GoodGuys> goodguys;
        vector<Werewolf> werewolves;
        vector<string> killed;
        string died;
        string poisoned;
        string saved;
        string foresighted[100][2];
        vector<string> voted;
        
    public:
        void setIdentityCardsArray(string[]);
        string getIdentityCard(int);
        
        void setKilled(string);
        string getKilled(int);
        int countKilled();
        
        void setPoisoned(string);
        string getPoisoned();
        
        void setSaved(string);
        string getSaved();
        
        void setForesightedArray(string,string,int);
        string getForesighted(int,string[]);
        
        void addVoted(string);
        string getVoted(int);
        
        void setGoodGuysArray(GoodGuys);
        GoodGuys getGoodGuy(int);
        
        void setWerewolfArray(Werewolf);
        Werewolf getWerewolf(int);
        
        void setDied(string);
        string getDied();
        
        void comment(string);
        
        int findplayer(string);
        
        Administrator();
};
#endif