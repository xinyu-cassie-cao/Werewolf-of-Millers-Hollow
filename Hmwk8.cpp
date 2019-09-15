// CS1300 Spring2018
// Xinyu Cao
// Recitation#: 204
// Homework 8 - Final Deliverables

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class GoodGuys
{
    private:
        string name;
        string identity;
        string status;
        vector<string> vote;
        vector<string> comment;
        vector<string> lastword;
        
    public:
        string getName();
        
        string getIdentity();
        
        int getCommentSize();
        void writeComment(string);
        string getComment(int);
        
        int getVoteSize();
        void addVote(string);
        string getVote(int);
        
        void addLastWord(string);
        string getLastWord(int);
        
        void setstatus();
        string getstatus();
        
        
        GoodGuys();
        GoodGuys(string,string);
};

GoodGuys::GoodGuys()
{
    name = "";
    identity = "";
    status = "";
}

GoodGuys::GoodGuys(string n, string id)
{
    name = n;
    identity = id;
    status = "";
}

//////////////////////////////////////////////////

string GoodGuys::getName()
{
    return name;
}

//////////////////////////////////////////////////

string GoodGuys::getIdentity()
{
    return identity;
}

//////////////////////////////////////////////////

int GoodGuys::getCommentSize()
{
    return comment.size();
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

///////////////////////////////////////////////////

int GoodGuys::getVoteSize()
{
    return vote.size();
}

void GoodGuys::addVote(string name)
{
    vote.push_back(name);
}

string GoodGuys::getVote(int i)
{
    if (i < vote.size())
    {
        return vote[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

///////////////////////////////////////////////////

void GoodGuys::addLastWord(string lw)
{
    lastword.push_back(lw);
}

string GoodGuys::getLastWord(int inde)
{
    if (inde < lastword.size())
    {
        return lastword[inde];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

///////////////////////////////////////////////////

void GoodGuys::setstatus()
{
    status = "dead";
}

string GoodGuys::getstatus()
{
    return status;
}

class Werewolf
{
    private:
        string name;
        string identity;
        string status;
        vector<string> votes;
        vector<string> comments;
        vector<string> kills;
        vector<string> lastwords;
        
    public:
        string getName();
        
        string getIdentity();
        
        int getCommentsSize();
        void writeComments(string);
        string getComments(int);
        
        int getVotesSize();
        void addVotes(string);
        string getVotes(int);
        
        void addKills(string);
        string getKills(int);
        
        void setLastWords(string);
        string getLastWords(int);
        
        void setStatus();
        string getStatus();
        
        
        Werewolf();
        Werewolf(string,string);
};

Werewolf::Werewolf()
{
    name = "";
    identity = "";
    status = "";
}

Werewolf::Werewolf(string n, string id)
{
    name = n;
    identity = id;
    status = "";
}

///////////////////////////////////////////////////////

string Werewolf::getName()
{
    return name;
}

///////////////////////////////////////////////////////

string Werewolf::getIdentity()
{
    return identity;
}

///////////////////////////////////////////////////////

int Werewolf::getCommentsSize()
{
    return comments.size();
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

///////////////////////////////////////////////////////

int Werewolf::getVotesSize()
{
    return votes.size();
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

///////////////////////////////////////////////////////

void Werewolf::setLastWords(string lws)
{
    lastwords.push_back(lws);
}

string Werewolf::getLastWords(int inde)
{
    if (inde < lastwords.size())
    {
        return lastwords[inde];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

///////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////

void Werewolf::setStatus()
{
    status = "dead";
}

string Werewolf::getStatus()
{
    return status;
}

class Administrator
{
    private:
        string identitycards[9];
        
        vector<GoodGuys> goodguys;
        vector<Werewolf> werewolves;
        
        vector<string> killed;
        vector<string> out;
        string poisoned;
        string saved;
        string foresighted[100][2];
        
        int numHumanAlive;
        int numGodAlive;
        int numWereWolfAlive;
        
    public:
        void setIdentityCardsArray(string[]);
        string getIdentityCard(int);
        
        void setGoodGuyArray(string,string);
        GoodGuys getGoodGuy(int);
        
        void setWerewolfArray(string,string);
        Werewolf getWerewolf(int);
        
        void setKilled(string);
        string getKilled(int);
        int countKilled();
        void clearKilled();
        
        void addOut(string);
        string getOut(int);
        int countOut();
        void clearOut();
        
        void setPoisoned(string);
        string getPoisoned();
        
        void setSaved(string);
        string getSaved();
        
        void setForesightedArray(string,string,int);
        string getForesighted(int,string[],int);
        
        void setNHA();
        int getNHA();
        
        void setNGA();
        int getNGA();
        
        void setNWWA();
        int getNWWA();
        
        
        int toComment(string,string,string,int);
        int toVote(string,string,int);
        int toLastWord(string,string,string);
        
        int findplayer(string);
        int findGoodIndex(string);
        int findBadIndex(string);
        
        int existence(string);
        void changegoodstatus(int);
        void changebadstatus(int);
        
        Administrator();
};

Administrator::Administrator()
{
    poisoned = "";
    saved = "";
    numHumanAlive = 3;
    numGodAlive = 3;
    numWereWolfAlive = 3;
    
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

//////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////

void Administrator::setGoodGuyArray(string playername,string ident)
{
    GoodGuys goodguy(playername,ident);
    goodguys.push_back(goodguy);
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

//////////////////////////////////////////////////////////////

void Administrator::setWerewolfArray(string playername,string ident)
{
    Werewolf werewolf1(playername,ident);
    werewolves.push_back(werewolf1);
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

//////////////////////////////////////////////////////////////

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

void Administrator::clearKilled()
{
    killed.clear();
}

//////////////////////////////////////////////////////////////

void Administrator::addOut(string name)
{
    out.push_back(name);
}

string Administrator::getOut(int i)
{
    if (i < out.size())
    {
        return out[i];
    }
    else
    {
        cout << "Error!" << endl;
    }
}

int Administrator::countOut()
{
    return out.size();
}

void Administrator::clearOut()
{
    out.clear();
}

//////////////////////////////////////////////////////////////

void Administrator::setPoisoned(string name)
{
    poisoned = name;
}

string Administrator::getPoisoned()
{
    return poisoned;
}

//////////////////////////////////////////////////////////////

void Administrator::setSaved(string name)
{
    saved = name;
}

string Administrator::getSaved()
{
    return saved;
}

//////////////////////////////////////////////////////////////

void Administrator::setForesightedArray(string name, string gob, int roundnum)
{
    foresighted[roundnum - 1][0] = name;
    foresighted[roundnum - 1][1] = gob;
    
    cout << foresighted[roundnum - 1][0] << " is " << foresighted[roundnum - 1][1] << endl;
}

string Administrator::getForesighted(int roundnum, string array[],int size)
{
    int i = 0;
    int n = -1;
    for (i = 0; i < size; i++)
    {
        if (foresighted[roundnum - 1][i] != "")
        {
            array[i] = foresighted[roundnum - 1][i];
        }
        else
        {
            cout << "The prophet has not foresight anyone for this round." << endl;
        }
    }
}

//////////////////////////////////////////////////////////////

void Administrator::setNHA()
{
    numHumanAlive--;
}

int Administrator::getNHA()
{
    return numHumanAlive;
}

//////////////////////////////////////////////////////////////

void Administrator::setNGA()
{
    numGodAlive--;
}

int Administrator::getNGA()
{
    return numGodAlive;
}

//////////////////////////////////////////////////////////////

void Administrator::setNWWA()
{
    numWereWolfAlive--;
}

int Administrator::getNWWA()
{
    return numWereWolfAlive;
}

//////////////////////////////////////////////////////////////

int Administrator::toComment(string filename, string playername, string comment, int roundnumber)
{
    int i = 0;
    int j = 0;
    bool flag1 = false;
    bool flag2 = false;
    int index1;
    int index2;
    int num;
    for (i = 0; i < 6; i++)
    {
        if (goodguys[i].getName() == playername && goodguys[i].getstatus() == "")
        {
            flag1 = true;
            index1 = i;
        }
    }
    
    if (flag1 == false)
    {
        for (j = 0; j < 3; j++)
        {
            if (werewolves[j].getName() == playername && werewolves[j].getStatus() == "")
            {
                flag2 = true;
                index2 = j;
            }
        }
    }
    
    ofstream outfile;
    outfile.open(filename,ios::app);
    
    if (outfile.is_open())
    {
        if (flag1 == true)
        {
            if (goodguys[index1].getCommentSize() == roundnumber)
            {
                cout << "You alreay commented this round." << endl;
                num = -1;
            }
            else
            {
                goodguys[index1].writeComment(comment);
                outfile << playername << ": " << comment << endl;
                num = 0;
            }
        }
        else if (flag2 == true)
        {
            if (werewolves[index2].getCommentsSize() == roundnumber)
            {
                cout << "You already commented this round." << endl;
                num = -1;
            }
            else
            {
                werewolves[index2].writeComments(comment);
                outfile << playername << ": " << comment << endl;
                num = 0;
            }
        }
        else if (flag1 == false && flag2 == false)
        {
            cout << "Sorry, you are not allowed to comment." << endl;
            num = -1;
        }
    }
    else
    {
        num = -1;
    }
    
    outfile.close();
    return num;
}

//////////////////////////////////////////////////////////////

int Administrator::toVote(string playername, string vote, int roundnumber)
{
    int index1;
    int index2;
    int num;
    bool flag1 = false;
    bool flag2 = false;
    int i = 0;
    int j = 0;
    for (i = 0; i < 6; i++)
    {
        if (goodguys[i].getName() == playername && goodguys[i].getstatus() == "")
        {
            flag1 = true;
            index1 = i;
        }
    }
    
    if (flag1 == false)
    {
        for (j = 0; j < 3; j++)
        {
            if (werewolves[j].getName() == playername && werewolves[j].getStatus() == "")
            {
                flag2 = true;
                index2 = j;
            }
        }
    }
    
    if (flag1 == true)
    {
        if (goodguys[index1].getVoteSize() == roundnumber)
        {
            cout << "You already voted this round." << endl;
            num = -1;
        }
        else
        {
            goodguys[index1].addVote(vote);
            addOut(vote);
            cout << "You have successfully voted." << endl;
            num = 0;
        }
    }
    else if (flag2 == true)
    {
        if (werewolves[index2].getVotesSize() == roundnumber)
        {
            cout << "You already voted this round." << endl;
            num = -1;
        }
        else
        {
            werewolves[index2].addVotes(vote);
            addOut(vote);
            cout << "You have successfully voted." << endl;
            num = 0;
        }
    }
    else if (flag1 == false && flag2 == false)
    {
        cout << "Sorry, you are not allowed to vote." << endl;
        num = -1;
    }
    
    return num;
}


//////////////////////////////////////////////////////////////

int Administrator::toLastWord(string filename, string playername, string lastw)
{
    int i = 0;
    int j = 0;
    bool flag1 = false;
    bool flag2 = false;
    int index1;
    int index2;
    int num;
    
    for(i = 0; i < goodguys.size(); i++)
    {
        if (goodguys[i].getName() == playername && goodguys[i].getstatus() == "dead")
        {
            flag1 = true;
            index1 = i;
        }
    }
    
    if (flag1 == false)
    {
        for (j = 0; j < werewolves.size(); j++)
        {
            if (werewolves[j].getName() == playername && werewolves[j].getStatus() == "dead")
            {
                flag2 = true;
                index2 = j;
            }
        }
    }
    
    ofstream lastword;
    lastword.open(filename,ios::app);
    
    if (lastword.is_open())
    {
        if (flag1 == true)
        {
            goodguys[index1].addLastWord(lastw);
            lastword << playername << ": " << lastw << endl;
            num = 0;
        }
        else if (flag2 == true)
        {
            werewolves[index2].setLastWords(lastw);
            lastword << playername << ": " << lastw << endl;
            num = 0;
        }
        else if (flag1 == false && flag2 == false)
        {
            cout << "Sorry, you are not allowed to leave last words." << endl;
            num = -1;
        }
    }
    else
    {
        num = -1;
    }
    
    lastword.close();
    return num;
}

//////////////////////////////////////////////////////////////

int Administrator::existence(string name)
{
    int i = 0;
    int j = 0;
    int n;
    for (i = 0; i < goodguys.size(); i++)
    {
        if (goodguys[i].getName() == name)
        {
            n = -1;
        }
    }
    
    for (j = 0; j < werewolves.size(); j++)
    {
        if (werewolves[j].getName() == name)
        {
            n = -2;
        }
    }
    
    return n;
}

//////////////////////////////////////////////////////////////

int Administrator::findplayer(string lowname)
{
    int i = 0;
    int j = 0;
    int n;
    bool flag1 = false;
    bool flag2 = false;
    
    for (j = 0; j < werewolves.size(); j++)
    {
        if (werewolves[j].getName() == lowname)
        {
            n = 1;
            flag1 = true;
        }
    }
    
    if (flag1 == false)
    {
        for (i = 0; i < goodguys.size(); i++)
        {
            if (goodguys[i].getName() == lowname)
            {
                if (goodguys[i].getIdentity() == "witch")
                {
                    n = 0;
                }
                else if (goodguys[i].getIdentity() == "prophet")
                {
                    n = 2;
                }
                else if (goodguys[i].getIdentity() == "hunter")
                {
                    n = 3;
                }
                else if (goodguys[i].getIdentity() == "human")
                {
                    n = 4;
                }
                
                flag2 = true;
            }
        }
    }
    
    
    return n;
}

//////////////////////////////////////////////////////////////

int Administrator::findGoodIndex(string pn)
{
    int i = 0;
    int indes;
    for (i = 0; i < goodguys.size(); i++)
    {
        if (pn == goodguys[i].getName())
        {
            indes = i;
        }
    }
    
    return indes;
}

//////////////////////////////////////////////////////////////

int Administrator::findBadIndex(string pn)
{
    int i = 0;
    int inds;
    for (i = 0; i < werewolves.size(); i++)
    {
        if (pn == werewolves[i].getName())
        {
            inds = i;
        }
    }
    
    return inds;
}

//////////////////////////////////////////////////////////////

void Administrator::changegoodstatus(int index)
{
    goodguys[index].setstatus();
}

//////////////////////////////////////////////////////////////

void Administrator::changebadstatus(int index)
{
    werewolves[index].setStatus();
}

//////////////////////////////////////////////////////////////

int main()
{
    Administrator administrator1;
    vector<string> dead;
    
    // This part is to randomize the cards using rand()
    
    string cards[9] = {"human","witch","werewolf","human","werewolf","prophet","werewolf","human","hunter"};
    int i = 0;
    int j = 0;
    bool flag = true; 
    vector<int> indexes;
    string idcard[9];
    
    srand(time(NULL));
    
    while(j < 9) // enter while loop, loop ends when indexes vector has length 9 and stores different numbers
    {
        int Randindex = rand() % 9;
        
        if (j == 0)
        {
            indexes.push_back(Randindex);
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
            
            if (flag == true)
            {
                indexes.push_back(Randindex);
                j++;
            }
        }
        
        flag = true;
        
    }
    
    for (i = 0; i < indexes.size(); i++) // enter for loop, go through indexes and use each number to find its correspoding identity card
    {
        int in = indexes[i];
        idcard[i] = cards[in]; // store the identity card in idcard[], eventually idcard[] will be an array of randomized identity card
    }
    
    administrator1.setIdentityCardsArray(idcard); // store the randomized identity cards in identitycards[] in Administrator class
    
    // This part assign identity cards to users
    
    string playername;
    string iden;
    int check;
    i = 0;
    
    while(i < 9) // enter while loop, loop ends when all nine cards are assigned to nine different players
    {
        cout << "Please enter your name:" << endl; // ask user for their name
        getline(cin,playername);
        
        for (j = 0; j < playername.length(); j++) // change the name to lowercases
        {
            playername[j] = tolower(playername[j]);
        }
        
        if (i == 0) // if i is 0, assign a card to the user
        {
            iden = idcard[i];
            if (iden == "werewolf")
            {
                cout << "Hello, " << playername << " you are werewolf. Excited? Please remember to follow the administrator's directions at night and open your eyes at the right time." << endl;
                
                administrator1.setWerewolfArray(playername,iden);
            }
            else if (iden == "prophet")
            {
                cout << "Hello, " << playername << " you are the prophet! Yah!! You will be able to pick a player of your interest at night, and the administrator will tell you whether that player is good or bad.";
                cout << "Please remember to follow the administrator's instruction at night and open your eyes at the right time." << endl;
            
                administrator1.setGoodGuyArray(playername,iden);
            }
            else if (iden == "witch")
            {
                cout << "Hello, " << playername << " you are the witch! You will be able to poison one player or save one dead player through out the game. You can choose to use the poison and the antidote during the night when your name is called.";
                cout << "But, remember, both of them can only be used once, so make your choice carefully. Please follow the administrator's instruction at night and open your eyes at the right time." << endl;
                
                administrator1.setGoodGuyArray(playername,iden);
            }
            else if (iden == "hunter")
            {
                cout << "Hello, " << playername << " you are the hunter! When you are out, you can pick one player of your interest, and that player will be out as well. Make your choice carefully, pick the right player, and help the good guys win the game.";
                cout << "You will not open your eyes at all during the night. So please follow the administrator's instruction and keep your eyes closed." << endl;
                
                administrator1.setGoodGuyArray(playername,iden);
            }
            else
            {
                cout << "Hello, " << playername << " you are the human. Honestly, there is nothing you can do other than prey for yourself not to get killed by the werewolf, and try to vote them out during the daytime.";
                cout << "You will not open your eyes at all during the night. So Please follow the administrator's instruction and keep your eyes closed." << endl;
                
                administrator1.setGoodGuyArray(playername,iden);
            }
            i++;
        }
        else // if i is not 0
        {
            check = administrator1.existence(playername); // check if this name already has an identity card
            
            if (check != -1 && check != -2) // if no
            {
                iden = idcard[i];
                if (iden == "werewolf")
                {
                    cout << "Hello, " << playername << " you are werewolf. Excited? Please remember to follow the administrator's directions at night and open your eyes at the right time." << endl;
                    
                    administrator1.setWerewolfArray(playername,iden); // create a player that is an object of werewolf class
                }
                else
                {
                    if (iden == "prophet")
                    {
                        cout << "Hello, " << playername << " you are the prophet! Yah!! You will be able to pick a player of your interest at night, and the administrator will tell you whether that player is good or bad.";
                        cout << "Please remember to follow the administrator's instruction at night and open your eyes at the right time." << endl;
                    }
                    else if (iden == "witch")
                    {
                        cout << "Hello, " << playername << " you are the witch! You will be able to poison one player or save one dead player through out the game. You can choose to use the poison and the antidote during the night when your name is called.";
                        cout << "But, remember, both of them can only be used once, so make your choice carefully. Please follow the administrator's instruction at night and open your eyes at the right time." << endl;
                    }
                    else if (iden == "hunter")
                    {
                        cout << "Hello, " << playername << " you are the hunter! When you are out, you can pick one player of your interest, and that player will be out as well. Make your choice carefully, pick the right player, and help the good guys win the game.";
                        cout << "You will not open your eyes at all during the night. So please follow the administrator's instruction and keep your eyes closed." << endl;
                    }
                    else
                    {
                        cout << "Hello, " << playername << " you are the human. Honestly, there is nothing you can do other than prey for yourself not to get killed by the werewolf, and try to vote them out during the daytime.";
                        cout << "You will not open your eyes at all during the night. So Please follow the administrator's instruction and keep your eyes closed." << endl;
                    }
                    
                    
                    administrator1.setGoodGuyArray(playername,iden); // create a player that is an object of goodguys class
                }
                
                i++;
            }
            else // if this name already has an identity card
            {
                cout << "You already pick your identity." << endl;
            }
        }
    }
    
    /*This part is the game begins*/
    
    int roundplay = 1; // initialize the round number
    cout << "Welcome to the game 'The Werewolf of Millers Hollow'.";
    cout << "Within the nine of you, there are three werewolves. You must work together to find all of them, otherwise, they will kill one person each night, ";
    cout << "when they killed all the gods, or all the humans, the game will end, and they will win. For all the good players, please try to stay alive and help catch the werewolves,";
    cout << " and for werewolves, try to hide your identity and kill the right player. Good luck, and let us begin." << endl;
    
    while (administrator1.getNHA() != 0 && administrator1.getNGA() != 0 && administrator1.getNWWA() != 0)
    {
    // This part it during the night
        
        cout << "It is night time. All players, please close your eyes." << endl;
        
        cout << "Good evening. All werewolves, please open your eyes." << endl;
        
        // This part is when werewolves start killing their target
        string NAME;
        string toKill;
        int count = 0;
        int ind;
        int maxcount = -1;
        int q = 0;
        int p = 0;
        i = 0;
        j = 0;
        
        while (maxcount < administrator1.getNWWA() - 1) // enter while loop, loop ends when one target has been killed successfully
        {
            while (administrator1.countKilled() < administrator1.getNWWA())// enter while loop, loop ends when all werewolves had entered the name of the player they want to kill
            {
                cout << "What is your name:" << endl; // ask for name
                getline(cin,NAME);
                    
                for (j = 0; j < NAME.length(); j++) // change name to lowercase
                {
                    NAME[j] = tolower(NAME[j]);
                }
                    
                check = administrator1.findplayer(NAME); // check if this name belongs to a werewolf
                    
                if (check == 0 || check == 2 || check == 3 || check == 4) // if no
                {
                    cout << "Please close your eyes." << endl;
                }
                else if (check == 1) // if yes
                {
                    int iindex = administrator1.findBadIndex(NAME); // check if this werewolf is already dead
                    
                    if (administrator1.getWerewolf(iindex).getStatus() != "dead") // if no, this name does not belong to any werewolf
                    {
                        cout << "Hey, " << NAME << ", you are one of the werewolves, please discuss with your teammate and enter the name of the player you want to kill tonight:" << endl;
                        getline(cin,toKill);
                            
                        for (j = 0; j < toKill.length(); j++)
                        {
                            toKill[j] = tolower(toKill[j]);
                        }
                            
                        administrator1.setKilled(toKill); // add the name to the killed vector
                    }
                    else // if yes, this werewolf is already dead
                    {
                        cout << "You are already dead and you can't kill anyone anymore." << endl;
                    }
                }
                else // if no, this name does not belong to any player
                {
                    cout << "Sorry, you are not one of the players of this game." << endl;
                }
                
                for (q = 0; q < administrator1.countKilled(); q++) // find the player most werewolves want to kill
                {
                    string die = administrator1.getKilled(q);
                    
                    for (p = 0; p < administrator1.countKilled(); p++)
                    {
                        if (die == administrator1.getKilled(p))
                        {
                            count++;
                        }
                    }
                    
                    if (q == 0)
                    {
                        maxcount = count;
                    }
                    else
                    {
                        if (count >= maxcount)
                        {
                            maxcount = count;
                            ind = q;
                        }
                    }
                    count = 0;
                }
            }
            
            if (maxcount < administrator1.getNWWA() - 1) // if we can't find a player that most werewolves want to kill
            {
                cout << "Seems like you do not agree with each other. Discuss and then vote again." << endl;
                
                administrator1.clearKilled(); // clear the killed vector, so that werewolves can enter who they want to kill again
            }
        }
        
        string deadplayer1 = administrator1.getKilled(ind); // find the name of the player that was successfully killed
        dead.push_back(deadplayer1); // add this player to the dead vector
        
        cout << "Okay, Werewolves, please close your eyes." << endl;
        
        
        // This part is when the witch decide who to save or who to poison
        cout << "Good evening. Witch, please open your eyes." << endl;
        
        string wchoice;
        string deadplayer2;
        string nightstatus;
        flag = false;
        bool flag1 = false;
        bool complicate = true;
        int check4;
        
        while (flag1 == false) // enter while loop, loop ends when witch successfully saved or poisoned someone, or when he/she entered "none"
        {
            cout << "What is your name:" << endl; // ask for name
            getline(cin,NAME);
                    
            for (i = 0; i < NAME.length(); i++) // change name to lowercase
            {
                NAME[i] = tolower(NAME[i]);
            }
                    
            check = administrator1.findplayer(NAME); // check if the name belongs to the witch
            
            if (NAME == "") // if name is empty
            {
                cout << "You entered an empty name." << endl;
            }
            else if (check == 1 || check == 2 || check == 3 || check == 4) // if name does not belong to the witch
            {
                cout << "Please close your eyes." << endl;
            }
            else if (check == 0) // if name belongs to the witch, check if he/she already poisoned or saved someone
            {
                if (administrator1.getSaved() == "" && administrator1.getPoisoned() == "") // if have't poisoned or saved
                {
                    cout << "Last night, " << deadplayer1 << " died. If you want to save him, enter 'save'. If you want to poison someone, enter 'poison'. Otherwise, enter 'none'." << endl;
                    getline(cin,wchoice); // ask if he/she wants to poison or save or do nothing
                    
                    if (wchoice == "save") // if save
                    {
                        nightstatus = "peaceful";
                        administrator1.setSaved(deadplayer1);
                        dead.pop_back();
                    }
                    else if (wchoice == "poison") // if poison
                    {
                        while (flag == false)
                        {
                            cout << "Please enter that player's name: " << endl;
                            getline(cin,deadplayer2);
                            
                            for (j = 0; j < deadplayer2.length(); j++)
                            {
                                deadplayer2[j] = tolower(deadplayer2[j]);
                            }
                            
                            check4 = administrator1.existence(deadplayer2);
                        
                            if (check4 == -1 || check4 == -2)
                            {
                                administrator1.setPoisoned(deadplayer2);
                                if (deadplayer2 != deadplayer1)
                                {
                                    dead.push_back(deadplayer2);
                                    nightstatus = "double kill";
                                }
                                else
                                {
                                    nightstatus = "single kill";
                                    complicate = false;
                                }
                                flag = true;
                            }
                            else
                            {
                                cout << "This person is not a player of the game." << endl;
                            }
                        }
                    }
                    else // if do nothing
                    {
                        cout << "You chose to save or poison nobody." << endl;
                        nightstatus = "single kill";
                    }
                }
                else if (administrator1.getSaved() != "" && administrator1.getPoisoned() == "") // if saved but hasn't poisoned
                {
                    cout << "You already saved someone in the previous round. So you won't be able to know the victim this round. Do you want to poison someone? if yes, enter 'poison'. Otherwise, enter 'none'." << endl;
                    getline(cin,wchoice); // ask if he/she wants to poison or do nothing
                    
                    if (wchoice == "poison") // if poison
                    {
                        while (flag == false)
                        {
                            cout << "Please enter that player's name: "<< endl;
                            getline(cin, deadplayer2);
                        
                            check4 = administrator1.existence(deadplayer2);
                            
                            if (check4 == -1 || check4 == -2)
                            {
                                administrator1.setPoisoned(deadplayer2);
                                if (deadplayer2 != deadplayer1)
                                {
                                    dead.push_back(deadplayer2);
                                    nightstatus = "double kill";
                                }
                                else
                                {
                                    nightstatus = "single kill";
                                    complicate = false;
                                }
                                flag = true;
                            }
                            else // if do nothing
                            {
                                cout << "This person is not a player of the game." << endl;
                            }
                        }
                    }
                    else
                    {
                        cout << "You chose to poison no one." << endl;
                        nightstatus = "single kill";
                    }
                }
                else if (administrator1.getSaved() == "" && administrator1.getPoisoned() != "") // if poisoned but hasn't saved
                {
                    cout << "Last night, " << deadplayer1 << " died. Because you already poisoned someone. If you want to save him, enter 'save'. Otherwise, enter 'none'." << endl;
                    getline(cin,wchoice); // ask if he/she wants to save or do nothing
                    
                    if (wchoice == "save") // if save
                    {
                        nightstatus = "peaceful";
                        administrator1.setSaved(deadplayer1);
                        dead.pop_back();
                    }
                    else // if do nothing
                    {
                        cout << "okay witch, you chose to not save this player." << endl;
                        nightstatus = "single kill";
                    }
                }
                else if (administrator1.getSaved() != "" && administrator1.getPoisoned() != "") // if poisoned and saved
                {
                    cout << "You can't save or poison anyone." << endl;
                    nightstatus = "single kill";
                }
                
                flag1 = true;
            }
            else // if name does not belong to any player
            {
                cout << "Sorry, you are not a player of this game." << endl;
            }
        }
        
        cout << "Okay, Witch. Now you can close your eyes." << endl;
        
        // This part is when prophet choose a player of his/her interest and check whether that player is good/bad
        cout << "Good evening. Prophet, please open your eyes." << endl;
        
        string foresightplayer;
        string foresightstatus;
        int check5;
        flag = false;
        flag1 = false;
        
        while (flag1 == false) // enter while loop, loop ends when prophet successfully appeared
        {
            cout << "What is your name:" << endl; // ask for name
            getline(cin,NAME);
                    
            for (i = 0; i < NAME.length(); i++) // change the name to lower
            {
                NAME[i] = tolower(NAME[i]);
            }
                    
            check = administrator1.findplayer(NAME); // check if the name belongs to the prophet
            
            if (NAME == "") // if name is empty
            {
                cout << "You entered an empty name." << endl;
            }
            else if (check == 0 || check == 1 || check == 3 || check == 4) // if name does not belong tho the prophet
            {
                cout << "Please close your eyes." << endl;
            }
            else if (check == 2) // if name belongs to the prophet
            {
                while (flag == false)
                {
                    cout << "Hey, " << NAME << ", you are the prophet. You can choose a player of your interest and check which side he/she is on.";
                    cout << "You will not be able to know his/her actual identity, you will only know whether he/she is a 'good player' or a 'bad player'." << endl;
                    cout << "Please enter the name of the player:" << endl;
                    getline(cin,foresightplayer); // ask who the prophet wants to check
                    
                    for (i = 0; i < foresightplayer.length(); i++) // change name to lowercase
                    {
                        foresightplayer[i] = tolower(foresightplayer[i]);
                    }
                    
                    check5 = administrator1.existence(foresightplayer); // check if the name belongs to a good player or bad player
                
                    if (check5 == -1) // if name belongs to a good player
                    {
                        foresightstatus = "good";
                        flag = true;
                    }
                    else if (check5 == -2) // if name belongs to a bad player
                    {
                        foresightstatus = "bad";
                        flag = true;
                    }
                    else // if name does not belong to any player
                    {
                        cout << "This person is not a player of this game. Please choose another player:" << endl;
                    }
                }
                
                administrator1.setForesightedArray(foresightplayer,foresightstatus,roundplay);
                flag1 = true;
            }
            else // if name does not belong to any player
            {
                cout << "Sorry, you are not a player of this game." << endl;
            }
        }
        
        cout << "Okay, prophet. You can go back to sleep." << endl;
        
    // This part is during the day
    
        cout << "Good morning, all players, please open your eyes." << endl;
        
        int check1;
        int check2;
        int userindex;
        string deadplayer3;
        string totaldead;
        
        // administrator announce what happened last night
        if (nightstatus == "peaceful") // if witch saved and no one died
        {
            cout << "Nobody died last night." << endl;
        }
        else if (nightstatus == "single kill" ) // if which did not save or poisoned the same player that was aready killed by the werewolf
        {
            cout << "One player was killed last night. Sorry " << deadplayer1 << ", you are out." << endl;
            
            check1 = administrator1.findplayer(deadplayer1); // check the identity of the victim
            
            if (check1 == 0 || check == 2 || check == 4)
            {
                userindex = administrator1.findGoodIndex(deadplayer1);
                administrator1.changegoodstatus(userindex);
            }
            else if (check1 == 1)
            {
                userindex = administrator1.findBadIndex(deadplayer1);
                administrator1.changebadstatus(userindex);
            }
            
            if (check1 == 3 && complicate == false) // if the victim is hunter, but was poisoned
            {
                cout << deadplayer1 << ", you are the hunter. But because you were poisoned, you can't take anyone with you." << endl;
            }
            else if (check1 == 3) // if the victim is hunter, and was not poisoned
            {
                cout << deadplayer1 << ", you are the hunter. If you want to take someone with you, please enter that person's name. Otherwise, please enter 'none'." << endl;
                getline(cin,deadplayer3); // ask if he/she wants to take someone out or no
                
                for (i = 0; i < deadplayer3.length(); i++) // change name to lowercase
                {
                    deadplayer3[i] = tolower(deadplayer3[i]);
                }
                
                if (deadplayer3 != "none") // if he/she wants to take someone out
                {
                    cout << deadplayer3 << ", you are out." << endl;
                    dead.push_back(deadplayer3);
                    
                    check = administrator1.existence(deadplayer3); // check the identity of this player and change his/her status to "dead"
                    
                    if (check == -1)
                    {
                        userindex = administrator1.findGoodIndex(deadplayer3);
                        administrator1.changegoodstatus(userindex);
                    }
                    else if (check == -2)
                    {
                        userindex = administrator1.findBadIndex(deadplayer3);
                        administrator1.changebadstatus(userindex);
                    }
                    
                    nightstatus = "double kill 1";
                }
                else // if hs/she does not want to take out anyone
                {
                    cout << "Okay, hunter. You did not choose anyone." << endl;
                }
            }
            
        }
        else if (nightstatus == "double kill") // if witch poisoned a player that was not the same one that was killed by the werewolf
        {
            cout << "Two players were killed last night. Sorry " << deadplayer1 << " and " << deadplayer2 << ", you are both out." << endl;
            
            check1 = administrator1.findplayer(deadplayer1); // check the identity of the victim
            check2 = administrator1.findplayer(deadplayer2); // check the identity of the victim
            
            if (check1 == 0 || check1 == 2 || check1 == 3 || check1 == 4)
            {
                userindex = administrator1.findGoodIndex(deadplayer1);
                administrator1.changegoodstatus(userindex);
            }
            else if (check1 == 1)
            {
                userindex = administrator1.findBadIndex(deadplayer1);
                administrator1.changebadstatus(userindex);
            }
            
            if (check2 == 0 || check2 == 2 || check2 == 3 || check2 == 4)
            {
                userindex = administrator1.findGoodIndex(deadplayer2);
                administrator1.changegoodstatus(userindex);
            }
            else if (check2 == 1)
            {
                userindex = administrator1.findBadIndex(deadplayer2);
                administrator1.changebadstatus(userindex);
            }
            
          
            if (check2 == 3) // if victim is the hunter, and this victim was poisoned
            {
                cout << deadplayer2 << ", you are the hunter. But because you were poisoned, you can't use your power to take someone with you." << endl;
            }
            else if (check1 == 3) // if victim is the hunter, and this victim was not the one that was poisoned
            {
                cout << deadplayer1 << ", you are the hunter. If you want to take someone with you, please enter that person's name. Otherwise, please enter 'none'." << endl;
                getline(cin,deadplayer3); // ask who he/she wants to take out, or if he/she does not want to take out anyone
                
                for (i = 0; i < deadplayer3.length(); i++) // change name to lowercase
                {
                    deadplayer3[i] = tolower(deadplayer3[i]);
                }
                
                if (deadplayer3 != "none") // when the hunter wants to take out someone
                {
                    cout << deadplayer3 << ", you are out." << endl;
                    
                    dead.push_back(deadplayer3); // add this player to the dead vector
                    
                    check = administrator1.findplayer(deadplayer3); // check the identity of this player, change his/her status to "dead"
                    
                    if (check == 0 || check == 2 || check == 3 || check == 4)
                    {
                        userindex = administrator1.findGoodIndex(deadplayer3);
                        administrator1.changegoodstatus(userindex);
                    }
                    else if (check == 1)
                    {
                        userindex = administrator1.findBadIndex(deadplayer3);
                        administrator1.changebadstatus(userindex);
                    }
                    
                    nightstatus = "triple kill";
                }
                else // when the hunter does not want to take out anyone
                {
                    cout << "Okay, hunter. You did not choose anyone." << endl;
                }
            }
        }
        
        // Administrator check the number of alive players
        for (i = 0; i < dead.size(); i++)
        {
            totaldead = dead[i];
            check = administrator1.findplayer(totaldead);
            
            if (check == 0 || check == 2 || check == 3)
            {
                administrator1.setNGA();
            }
            else if (check == 4)
            {
                administrator1.setNHA();
            }
            else if (check == 1)
            {
                administrator1.setNWWA();
            }
        }
        
        // This part is when the victims leave their last words
        string lastw1;
        int numb1;
        string deadplayer;
        i = 0;
        
        while (i < dead.size()) // enter while loop, go through the dead vector
        {
            deadplayer = dead[i];
            
            cout << deadplayer << ", you are out, please say something:" << endl; // ask the victim to say something
            getline(cin,lastw1);
            
            numb1 = administrator1.toLastWord("LastWord.txt",deadplayer,lastw1); // write the last words to a file
            
            if (numb1 == 0) // if the victim successfully wrote the last words, increase i by 1
            {
                i++;
            }
        }
        
        // This part is when the alive players leave their comments
        string nm;
        string uscomment;
        int numb2;
        i = 0;
        
        while (i < administrator1.getNHA() + administrator1.getNGA() + administrator1.getNWWA()) // enter while loop, loop ends when all alive players had left their comments
        {
            cout << "All alive players, please come up one by one and enter your name: " << endl; // ask for name
            getline(cin,nm); 
                
            for (j = 0; j < nm.length(); j++) // change name to lowercase
            {
                nm[j] = tolower(nm[j]);
            }
            
            cout << "Please enter your comment:" << endl; // ask for comment
            getline(cin,uscomment);
                        
            numb2 = administrator1.toComment("Commment.txt",nm,uscomment,roundplay); // write the comment to a file
                        
            if (numb2 == 0) // if the player successfully wrote the comments, increase i by 1
            {
                i++;
            }
        }
        
        // This part is when the alive players vote
        string votedout;
        int votedindex;
        int numb3;
        i = 0;
        
        while (i < administrator1.getNHA() + administrator1.getNGA() + administrator1.getNWWA()) // enter while loop, loop ends when all alive players had voted
        {
            cout << "Now, together all of you can vote out one player. ";
            cout << "All alive players, please come up one by one and enter your name and follow the instructions:" << endl; // ask for name
            getline(cin,nm);
            
            for (j = 0; j < nm.length(); j++) // change name to lowercase
            {
                nm[j] = tolower(nm[j]);
            }
            
            cout << "Please enter the name of the player you want to vote out:" << endl; // ask for vote
            getline(cin,votedout);
            
            numb3 = administrator1.toVote(nm,votedout,roundplay); // add the vote to ou vector in Administrator class
            
            if (numb3 == 0) // if the player successfully voted, increase i by 1
            {
                i++;
            }
        }
        
        int macount;
        int Count = 0;
        int indes;
        string finalout;
        
        for (i = 0; i < administrator1.countOut(); i++) // enter for loop, go through all the votes, find the player that most players wants to vote out
        {
            string Out = administrator1.getOut(i);
            for (j = 0; j < administrator1.countOut(); j++)
            {
                if (administrator1.getOut(j) == Out)
                {
                    Count++;
                }
            }
                
            if (i == 0)
            {
                macount = Count;
            }
            else
            {
                if (Count >= macount)
                {
                    macount = Count;
                    indes = i;
                }
            }
                
            Count = 0;
        }
        
        
        finalout = administrator1.getOut(indes);
        cout << finalout << ", you are out." << endl;
        dead.push_back(finalout); // add the voted out player to dead vector
        
        check = administrator1.existence(finalout); // check the identity of this player, and change his/her status to "dead"
        if (check == -1)
        {
            votedindex = administrator1.findGoodIndex(finalout);
            administrator1.changegoodstatus(votedindex);
        }
        else if (check == -2)
        {
            votedindex = administrator1.findBadIndex(finalout);
            administrator1.changebadstatus(votedindex);
        }
        
        
        string hunterout;
        int check3;
        int dex;
        
        check = administrator1.findplayer(finalout);
        if (check == 3) // if this player is hunter
        {
            administrator1.setNGA(); // decrease the number of gods
            cout << finalout << ", you are the hunter. if you want to pick someone of your interest, enter the name of that player. Otherwise, enter 'none'." << endl;
            getline(cin,hunterout); // ask if he/she wants to take out someone or no
            
            if (hunterout != "none") // if he/she wants to take out someone
            {
                cout << hunterout << ", you are out." << endl;
                
                dead.push_back(hunterout); // add this player to dead vector
                
                check3 = administrator1.findplayer(hunterout); // check this player's identity to decrease the number of players
                
                if (check3 == 0 || check3 == 2)
                {
                    dex = administrator1.findGoodIndex(hunterout);
                    administrator1.changegoodstatus(dex);
                    administrator1.setNGA();
                }
                else if (check3 == 1)
                {
                    dex = administrator1.findBadIndex(hunterout);
                    administrator1.changebadstatus(dex);
                    administrator1.setNWWA();
                }
                else if (check3 == 4)
                {
                    dex = administrator1.findGoodIndex(hunterout);
                    administrator1.changegoodstatus(dex);
                    administrator1.setNHA();
                }
            }
            else
            {
                cout << "Okay, hunter, you did not choose anyone." << endl;
            }
        }
        else if (check == 0 || check == 2) // if this player is a god but is not the hunter
        {
            administrator1.setNGA(); // decrease the number of gods
        }
        else if (check == 1) // if this player is a werewolf
        {
            administrator1.setNWWA(); // decrease the number of werewolf
        }
        else if (check == 4) // if this player is a human
        {
            administrator1.setNHA(); // decrease the number of human
        }
        
        // This part is to prepare for next round
        dead.clear(); // clear the dead vector
        
        administrator1.clearKilled(); // clear the killed vector
        
        administrator1.clearOut(); // clear the out vector
        
        roundplay++; // increase the round number by 1
    }
    
    // This part is to check who won
    if (administrator1.getNHA() == 0 || administrator1.getNGA() == 0) // if number of human or number of god alive is 0
    {
        cout << "Congradulations, werewolves. You won the game!" << endl; // werewolves win
    }
    else if (administrator1.getNWWA() == 0) // if number of werewolf alive is 0
    {
        cout << "Congradulations, humans and gods. You won the game!" << endl; // human and god win
    }
}