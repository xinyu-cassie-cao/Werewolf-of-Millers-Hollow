// Xinyu Cao
// Recitation #: 204
// Homework 8 Code Skeleton

#include <iostream>
#include <vector>
#ifndef GOODGUYS_H
#define GOODGUYS_H
using namespace std;

class GoodGuys
{
    private:
        string name;
        string identity;
        string status;
        int numhumanalive;
        int numgodalive;
        vector<string> votes;
        vector<string> comment;
        
    public:
        string getName();
        
        string getIdentity;
        
        int getCommentSize();
        void writeComment(string);
        string getComment(int);
        
        void addVotes(string);
        string getVotes();
        
        void setStatus(string);
        string getStatus();
        
        void setNumHumanAlive();
        int getNumHumanAlive();
        
        void setNumGodAlive();
        int getNumGodAlive();
        
        void addVotes(string);
        string getVotes(int);
        
        void writeComment(string);
        string getComment(int);
        
        GoodGuys();
        GoodGuys(string,string,string);
};
#endif