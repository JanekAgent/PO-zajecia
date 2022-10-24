#include <iostream>
class TissueBox {
public:
    int open = 0;
    void open() {
        open = 1;
    }
    int opened() {
        //printf("%d", open);
        return open;
    }
};



int main()
{   
    TissueBox object1;
    


    //std::cout << "Hello World!\n";
}