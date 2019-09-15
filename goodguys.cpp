// Xinyu Cao
// Recitation #: 204
// Homework 8 Code Skeleton

#include "human.h"
#include <vector>

GoodGuys::GoodGuys()
{
    name = "";
    identity = "";
    status = "";
    numhumanalive = 3;
    numgodalive = 3;
}

GoodGuys::GoodGuys(string n, string id, string st)
{
    name = n;
    identity = id;
    status = st;
    numhumanalive = 3;
    numgodalive = 3;
}

string GoodGuys::getName()
{
    return name;
}

string GoodGuys::getIdentity()
{
    return identity;
}

void GoodGuys::setStatus(string s)
{
    status = s;
}

string GoodGuys::getStatus()
{
    return status;
}

void GoodGuys::setNumHumanAlive()
{
    numhumanalive--;
}

int GoodGuys::getNumHumanAlive()
{
    return numhumanalive;
}

void GoodGuys::setNumGodAlive()
{
    numgodalive--;
}

int GoodGuys::getNumGodAlive()
{
    return numgodalive;
}

void GoodGuys::addVotes(string name)
{
    votes.push_back(name);
}

string GoodGuys::getVotes(int i)
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

void GoodGuys::writeComment(string words)
{
    comment.push_back(words);
}

string GoodGuys::getComment(int i)
{
    if (i < comment.size())
    {
        return comment[i];
    }
}

int GoodGuys::getCommentSize()
{
    return comment.size();
}