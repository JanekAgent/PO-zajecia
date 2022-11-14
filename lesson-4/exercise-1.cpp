#include <iostream>
using namespace std;
class Computer{
    public:
    virtual int checkBattery() = 0;


};

class Laptop: public Computer{
    
    private:
    int batteryLevel;
    public:
    int checkBattery(){
        return batteryLevel;
    }
    Laptop(int bl){
        batteryLevel=bl;
    }
    Laptop loadBaterry(int bat){
        return Laptop(batteryLevel=bat);
    }
};
int main(){
    Laptop depletedLaptop(0);
    Laptop halfBatteryLaptop = depletedLaptop.loadBaterry(50);
    int bat=halfBatteryLaptop.checkBattery();
    printf("%d\n",bat);
}