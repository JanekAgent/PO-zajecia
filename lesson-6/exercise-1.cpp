#include <iostream>
using namespace std;
#include <map>
#include <sstream>
#include <iomanip>
#include <cmath>
class TwoNumberCalculator {
    private:
    int a;
    int b;
    public:
    int max() { return a > b ? a : b;}
    int min() { return a < b ? a : b;}
    float avg() { return (a + b) / 2;}
    TwoNumberCalculator(int a1=0,int b1=0){
        a=a1;
        b=b1;
    }
};
int main(){
    TwoNumberCalculator calc(10,10);
    cout<<calc.avg();

}