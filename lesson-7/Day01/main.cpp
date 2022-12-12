#include <iostream>
#include <fstream>
using namespace std;
#include <map>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <list>
#include <string>
class backpack{
    private:
    int value;

    public: 
    backpack(int initValue=0){value=initValue;}
    void addObject(int valueOfObject){
    //int newvalue;
    value=value+valueOfObject;
    }
    int valueOfBackpack(){return value;}
    void resetValue(){value=0;}
};
class maximumValue{
    private:
    int value;
    public:
    maximumValue(int initValue=0){value=initValue;}
    void check(int newValue){
        if (newValue>value){
            value=newValue;
        }
    }
    int sollution(){return value;}
};
class fileObject{
    private:
    
    public:
    fileObject(string name=""){
        string line;
        ifstream MyReadFile(name);
        //list<backpack>
        backpack bp(0);
        maximumValue mv(0);
        int lineInt=0;
        int i=0;
        list<backpack> allBackpacks;
        //allBackpacks.push_back(p);
        //backpack allBackpacks [i]();
        
        while (getline (MyReadFile, line)) {
        
        if (line==""){
            i++;
            mv.check(bp.valueOfBackpack());
            //cout<<mv.sollution()<<"\n";
            //delete bp;
            //backpack bp(0);
            bp.resetValue();
            continue;

            }
        if (line=="\0"){
            //cout<<"";
            mv.check(bp.valueOfBackpack());
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
    int biggestBackpackOfFile(){
        //return mv.sollution();
    }
};

int main(){
    
    string fileText;
    fileObject("input.txt");

  // Output the text from the file
    

}