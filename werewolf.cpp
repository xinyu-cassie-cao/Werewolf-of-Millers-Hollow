// Xinyu Cao
// Recitation #: 204
// Homework 8 Code Skeleton

#include "werewolf.h"
#include <vector>


Werewolf::Werewolf()
{
    name = "";
    identity = "";
    status = "";
    numalive = 3;
}

Werewolf::Werewolf(string n, string id, string st)
{
    name = n;
    identity = id;
    status = st;
    numalive = 3;
}

string Werewolf::getName()
{
    return name;
}

string Werewolf::getIdentity()
{
    return identity;
}

void Werewolf::setStatus(string s)
{
    status = s;
}

string getStatus()
{
    return status;
}

void Werewolf::setNumAlive()
{
    numalive--;
}

int Werewolf::getNumAlive()
{
    return numalive;
}

void Werewolf::addVotes(string name)
{
    votes.push_back(name);
}

string Werewolf::getVotes(int i)
{
    if (i < votes.size())
    {
        return votes[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void Werewolf::addKills(string name)
{
    kills.push_back(name);
}

string Werewolf::getKills(int i)
{
    if (i < kills.size())
    {
        return kills[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void Werewolf::writeComments(string comm)
{
    comments.push_back(comm);
}

string Werewolf::getComments(int i)
{
    if (i < comments.size())
    {
        return comments[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

int Werewolf::getCommentsSize()
{
    return comments.size();
}