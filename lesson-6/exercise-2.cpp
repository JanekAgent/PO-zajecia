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
    
    if (inputBase<=0){throw(1);}
    if (inputBase==1){throw(1);}
    if (inputArgument<0){throw(2);}
    
    
    //cout<<"elding\n";
    this->base = inputBase;
    this->argument = inputArgument;

}
};
int main(){
    Logarithm lg(10,1000000);
    int correct=1;
    
    

    try{
    Logarithm lg(10,1230);}

    catch (int errorNumber){
        correct=0;
        if (errorNumber==1){
            cout<<"Wrong value of base\n";

            //cout<<"Inputing standard value\n";
                        
            //return;
        }
        if (errorNumber==2){
            cout<<"Wrong value of argument\n";
            //cout<<"Inputing standard value\n";
            //return;

        }
    }
    if (correct==1){
    cout<<lg.doubleValue()<<"\n";}
}