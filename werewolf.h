// Xinyu Cao
// Recitation #: 204
// Homework 8 Code Skeleton

#include <iostream>
#include <vector>
#ifndef WEREWOLF_H
#define WEREWOLF_H
using namespace std;

class Werewolf
{
    private:
        string name;
        string identity;
        string status;
        int numalive;
        vector<string> votes;
        vector<string> kills;
        vector<string> comments;
        
    public:
        string getName();
        
        string getIdentity();
        
        int getCommentsSize();
        
        void setStatus(string);
        string getStatus();
        
        void setNumAlive();
        int getNumAlive();
        
        void addVotes(string);
        string getVotes(int);
        
        void addKills(string);
        string getKills(int);
        
        void writeComments(string);
        string getComments(int);
        
        Werewolf();
        Werewolf(string,string,string);
};
#endif