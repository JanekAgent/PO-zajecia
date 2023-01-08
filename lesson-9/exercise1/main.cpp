#include <iostream>
using namespace std;

#include <list>
#include <string>
class Game{
    public:
    virtual int result()=0;
};
class FakeFootballGame : Game{
    public:
    FakeFootballGame(){};
    int result (){return 5;}
};
int main(){
    FakeFootballGame test1;
    int t;
    t=test1.result();
    if (test1.result()==5){
        cout<<"Test 1  passed\n";

    }


}