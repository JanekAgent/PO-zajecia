
#include <iostream>
class Shovel {
public:
    int old;
    int leght;
    int sharpness;
    Shovel(int old=0,int leght=100, int sharpness = 0) {
        this->old = old;
        this->leght = leght;
        this->sharpness = sharpness;
        
    }
};




int main()
{   
    Shovel shovel1();
    Shovel shovel2(2, 80, 20);
    //std::cout << "Hello World!\n";
}