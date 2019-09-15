// Xinyu Cao
// Recitation #: 204
// Homework 8 Code Skeleton

#include <iostream>
#include <fstream>
#include <vector>
#include "administrator.h"
using namespace std;

Administrator::Administrator()
{
    poisoned = "";
    saved = "";
    int i = 0;
    int j = 0;
    for (i = 0; i < 9; i++)
    {
        identitycards[i] = "";
    }
    
    i = 0;
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 2; j++)
        {
            foresighted[i][j] = "";
        }
    }
}

void Administrator::setIdentityCardsArray(string idcards[])
{
    int i = 0;
    for (i = 0; i < 9; i++)
    {
        identitycards[i] = idcards[i];
    }
}

string Administrator::getIdentityCard(int i)
{
    if (i < 9)
    {
        return identitycards[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void Administrator::setKilled(string name)
{
    killed.push_back(name);
}

string Administrator::getKilled(int i)
{
    if (i < killed.size())
    {
        return killed[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

int Administrator::countKilled()
{
    return killed.size();
}

void Administrator::setPoisoned(string name)
{
    poisoned = name;
}

string Administrator::getPoisoned()
{
    return poisoned;
}

void Administrator::setSaved(string name)
{
    saved = name;
}

string Administrator::getSaved()
{
    return saved;
}

void Administrator::setForesightedArray(string name, string gob, int roundnum)
{
    foresighted[roundnum - 1][0] = name;
    foresighted[roundnum - 1][1] = gob;
}

int Administrator:getForesighted(int roundnum, string array[])
{
    int i = 0;
    int n = -1;
    for (i = 0; i < 2; i++)
    {
        if (foresighted[roundnum - 1][i] != "")
        {
            array[i] = foresighted[roundnum - 1][i];
            n = 0;
        }
        else
        {
            cout << "The prophet has not foresight anyone for this round." << endl;
        }
    }
}

void Administrator::addVoted(string name)
{
    voted.push_back(name);
}

string Administrator::getVoted(int i)
{
    if (i < voted.size())
    {
        return voted[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void Administrator::setGoodGuysArray(Goodguys goodplayer)
{
    goodguys.push_back(goodplayer);
}

GoodGuys Administrator::getGoodGuy(int i)
{
    if (i < goodguys.size())
    {
        return goodguys[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void Administrator::setWerewolfArray(Werewolf badplayer)
{
    werewolves.push_back(badplayer);
}

Werewolf Administrator::getWerewolf(int i)
{
    if (i < werewolves.size())
    {
        return werewolves[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

void Administrator:comment(string filename, string playername, string comment, int roundnumber)
{
    int i = 0;
    int j = 0;
    bool flag1 = false;
    bool flag2 = false;
    int index1;
    int index2;
    for (i = 0; i < 6; i++)
    {
        if (goodguys[i].getName() == playername)
        {
            flag1 = true;
            index1 = i;
        }
    }
    
    for (j = 0; j < 3; j++)
    {
        if (werewolves[i].getName() == playername)
        {
            flag2 = true;
            index2 = j;
        }
    }
    
    ofstream outfile;
    outfile.open(filename,ios::app);
    
    if (outfile.is_open())
    {
        if (flag1 == true && flag2 == false)
        {
            if (goodguys[index1].getCommentSize() == roundnumber)
            {
                cout << "You alreay commented this round." << endl;
            }
            else
            {
                goodguys[index1].writeComment(comment);
                outfile << playername << ":" << comment << endl;
            }
        }
        else if (flag1 == false && flag2 == true)
        {
            if (werewolves[index2].getCommentsSize() == roundnumber)
            {
                cout << "You already commented this round." << endl;
            }
            else
            {
                werewolves[index2].writeComments(comment);
                outfile << playername << ":" << comment << endl;
            }
        }
        else if (flag1 == false && flag2 == false)
        {
            cout << "Sorry, you are not a player of this game." << endl;
        }
    }
    
    outfile.close();
}

int Administrator::findplayer(string lowname)
{
    int i = 0;
    int j = 0;
    int n = -1;
    for (i = 0; i < 6; i++)
    {
        if (goodguys[i].getName() == lowname)
        {
            n = 0;
        }
    }
    for (j = 0; j < 3; j++)
    {
        if (werewolves[j].getName() == lowname);
        {
            n = 1;
        }
    }
    
    return n;
}

void Administrator::setDied(string name)
{
    died = name;
}

string Administrator::getDied()
{
    return died;
}