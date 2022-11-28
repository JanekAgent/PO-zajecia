#include <iostream>
using namespace std;
#include <map>
#include <sstream>
#include <iomanip>
#include <cmath>
class TwoNumbers {
    private:
    int a;
    int b;
    public:
    int max() { return a > b ? a : b;}
    int min() { return a < b ? a : b;}
    float avg() { return (a + b) / 2;}
    TwoNumbers(int a1=0,int b1=0){
        a=a1;
        b=b1;
    }
};
int main(){
    TwoNumbers calc(10,50);
    cout<<calc.avg()<<"\n";
    cout<<calc.max()<<"\n";
    cout<<calc.min()<<"\n";
}