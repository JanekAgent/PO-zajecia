#include <iostream>
#include <fstream>
using namespace std;
#include <map>
#include <sstream>
#include <iomanip>
#include <cmath>
class fileObject{
    public:
    fileObject(string nam=""){
        string line;
        ifstream MyReadFile("Day01_test.txt");
        while (getline (MyReadFile, line)) {
        if (line==""){
            cout<< "koniec plecaka"<<"\n";}
        if (line=="\0"){
            cout<<"konic";
        }
        }MyReadFile.close();
    }
};

int main(){
    ifstream MyReadFile("Day01_test.txt");
    string fileText;
    fileObject("Day01_test.txt");
  // Output the text from the file
    

}