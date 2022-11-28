#include <iostream>
using namespace std;
#include <map>
#include <sstream>
#include <iomanip>
#include <cmath>
class Number {
    public:
    virtual double doubleValue()=0;
};

class Logarithm : public Number {
    private:
    double base, argument;
    public:
    double doubleValue() { return log(this->argument) / log(this->base);}
    Logarithm(double inputBase, double inputArgument) {
    try{
    if (inputBase<=0){throw(1);};
    if (inputArgument<0){throw(2);};
    }
    catch (int errorNumber){
        if (errorNumber=1){
            cout<<"Wrong value of base";
            return;
        }
        if (errorNumber){
            cout<<"Wrong value of argument";
            return;
        }
    }
    this->base = inputBase;
    this->argument = inputArgument;

}
};
int main(){
    Logarithm lg(10,10);
    cout<<lg.doubleValue();
}