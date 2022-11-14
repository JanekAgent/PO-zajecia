#include <iostream>
using namespace std;
class Computer{
    public:
    virtual int checkBettery() = 0;


};

class Laptop: public Computer{
    private:
    int batteryLevel;
    public:
    Laptop(int bl){
        batteryLevel=bl;
    }
    int checkBaterry(){
        return batteryLevel;
    }
    
    Laptop loadBaterry(){
        return Laptop(batteryLevel=100)
    }
};