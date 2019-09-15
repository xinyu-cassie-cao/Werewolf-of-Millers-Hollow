// Xinyu Cao
// Recitation #: 204
// Homework 8 Code Skeleton

#include <iostream>
#include <vector>
#include <fstream>
#include "goodguys.h"
#include "werewolf.h"
#include "administrator.h"
using namespace std;

int main()
{
    Administrator administrator1();
    
    // This part is to create a identity cards array that is randomly sorted
    string cards[9] = {"human","witch","werewolf","human","werewolf","prophet","werewolf","human","hunter"};
    int i = 0;
    int j = 0;
    bool flag = true;
    vector<int> indexes;
    string idcard[9];
    
    while(j < 9)
    {
        int Randindex = rand() % 9;
        if (j == 0)
        {
            indexes.push_back(Randindex);
            idcard[j] = cards[Randindex];
            cout << idcard[j] << endl;
            j++;
        }
        else
        {
            for (i = 0; i < indexes.size(); i++)
            {
                if (indexes[i] == Randindex)
                {
                    flag = false;
                }
            }
            
            if (flag != false)
            {
                indexes.push_back(Randindex);
                idcard[j] = cards[Randindex];
                cout << idcard[j] << endl;
                j++;
            }
        }
        
    }
    
    // This part is to pass the randomize identity cards array to administrator class and store in identitycards[9]
    administrator1.setIdentityCardsArray(idcard);
    
    // This part is to create 9 players
    i = 0;
    j = 0;
    string playname;
    string id;
    for (i = 0; i < 9; i++)
    {
        cout << "Please enter your name:" << endl;
        getline(cin,playname);
        
        for (j = 0; j < playname.length(); j++)
        {
            playname[j] = tolower(playname[j]);
        }
        
        id = idcard[j];
        if (id == "werewolf")
        {
            Werewolf werewolf1(playname,id,"alive");
            administrator1.setWerewolfArray(werewolf1);
        }
        else
        {
            GoodGuys goodguy1(playname,id,"alive");
            administrator1.setGoodGuysArray(goodguy1);
        }
    }
    
    // This part is the game begins
    cout << "Welcome to the game 'The Werewolf of Millers Hollow'.";
    cout << "Within the nine of you, there are three werewolves. You must work together to find all of them, otherwise, they will kill one person each night, ";
    cout << "and eventually, all of you will die. Good luck, and let us begin." << endl;
    
    while (numhumanalive != 0 && numgodalive != 0 && numalive != 0)
    {
    
        // This is during the night
        string NAME;
        string LowNAME;
        string toKill;
        string LowtoKill;
        int roundplay = 1;
        i = 0;
        int j = 0;
        cout << "Good evening. All werewolves, please open your eyes." << endl;
        
        while (administrator1.countKilled() != 3)
        {
            cout << "What is your name:" << endl;
            getline(cin,Name);
            
            for (i = 0; i < NAME.length(); i++)
            {
                LowNAME[i] = tolower[NAME[i]]
            }
            
            int check = administrator1.findplayer(LowNAME);
            
            if (check == 0)
            {
                cout << "Please close your eyes." << endl;
            }
            else if (check == 1)
            {
                cout << "Hey, " << LowNAME << ", you are one of the werewolves, please enter the name of the player you want to kill tonight:" << endl;
                getline(cin,toKill);
                
                for (j = 0; j < toKill.length(); j++)
                {
                    LowtoKill[j] = tolower(toKill[j]);
                }
                
                administrator1.setKilled(LowtoKill);
            }
            else
            {
                cout << "Sorry, you are not one of the players of this game." << endl;
            }
        }
        
        // find the name of the player that appears the most in killed[]
        // call setDied(name);
        
        cout << "Good evening. Witch, please open your eyes." << endl;
        while (administrator1.getPoisoned() == "" && administrator1.getSaved() == "")
        {
            // ask for name
            // find that player, if that player's identity is witch, ask who he/she wants to poison
            // ask who he/she wants to save
            // call setPoison() or setSaved() function
        }
        
        cout << "Good evening. Prophet, please open your eyes." << endl;
        string prophet[2];
        while (administrator1.getForesighted(roundplay,prophet) == -1)
        {
            // ask for name
            // find the player, if the player's identity is prophet, ask who he/she wants to foresight, get the name
            // check the identity of that player, tell the prophet whether that player is good or bad
            // call setForesightedArray(name, good or bad, roundplay)
        }
        
        
        
        // This is during the Day
        // if getSaved() = getDied, then print "No one died last night." 
        // if not, find the player's index, check his/her identity, change status to dead, print "__ died last night."
        // if the died person's identity is hunter, he/she can take someone with him
        // if the dies person's identity is not prophet, print "Prophet varified _ is a _"
        // enter for loop
        // ask a player's name each time
        // ask what he/she wants to say
        // call comment(filename,playername,comment,roundplay)
        // after exit for-loop
        // enter for loop
        // ask player's name
        // ask who he/she wants to vote
        // call addVoted(name)
        // find the person that is voted out
        // get that player's identity, change status, print "__ is voted out"
    }
    
    // check who wins, if numhumanalive = 0 or numgodalive = 0, then werewolves win. otherwise, goodguys win.
    // print "Congraduations! All __, you won!"
    
}