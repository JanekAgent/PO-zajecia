#include <iostream>
using namespace std;
class Computer{
    public:
    virtual int checkBettery() = 0;


};

class Laptop{
    private:
    int batteryLevel;
    public:
    Laptop(int bl){
        batteryLevel=bl;
    }
    Laptop loadBaterry(int bat){
        return Laptop(batteryLevel=bat);
    }
    int checkBaterry(){
        return batteryLevel;
    }

    
};
int main(){
    Laptop depletedLaptop(0);
    Laptop halfBatteryLaptop = depletedLaptop.loadBaterry(50);
}