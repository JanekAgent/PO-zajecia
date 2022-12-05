#include <iostream>
#include <fstream>
using namespace std;
#include <map>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <list>
#include <string>
class round{
    private:
    int score;

    public: 
    round(char ep, char yp){
        score+=yp-58;
        
    }
    
    int scoreOfRound(){return score;}
    void resetRound(){score=0;}
};
class totalScore{
    private:
    int value;
    public:
    totalScore(int initValue=0){value=initValue;}
    void addRoundScore(int round){
        value+=round;
    }
    int sollution(){return value;}
};
class fileObject{
    private:
    
    public:
    fileObject(string nam=""){
        string line;
        ifstream MyReadFile("Day01.txt");
        //list<backpack>
        
        totalScore mv(0);
        int lineInt=0;
        int i=0;
        //list<backpack> allBackpacks;
        //allBackpacks.push_back(p);
        //backpack allBackpacks [i]();
        
        while (getline (MyReadFile, line)) {
        
        if (line==""){
            i++;
            mv.addRoundScore(bp.scoreOfRound());
            //cout<<mv.sollution()<<"\n";
            //delete bp;
            //backpack bp(0);
            bp.resetValue();
            continue;

            }
        if (line=="\0"){
            //cout<<"";
            mv.addRoundScore(bp.scoreOfRound());
            //cout<<mv.sollution()<<"\n";
            break;
        }
        
        lineInt = stoi( line);
        bp.addObject(lineInt);
        //cout<<bp.valueOfBackpack()<<"\n";
        //cout<<i<<"\n";

        }MyReadFile.close();
        cout<<mv.sollution()<<"\n";

    }
    
};

int main(){
    ifstream MyReadFile("Day02_test.txt");
    string fileText;
    fileObject("Day02_test.txt");

  // Output the text from the file
    

}