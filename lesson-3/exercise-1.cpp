
#include <iostream>
using namespace std;
string defaultName="";
class Camera{
    public:
    string name;
    int weight;
    int price;
    //camera(){}
    Camera(string n="  " ,int w=0, int p=0){
        name=n;

    }
    void printer(){
        cout<<name<<endl;
        //printf("%s",name);

    }

};
class Director{
    public:
    string name;
    int age;
    int grade;
    Director(string n="    ",int a=0,int g=0){
        name=n;
        age=a;
        grade=g;
        
        
    }
};
class Actor{
    public:
    string name;
    int grade;
    Actor(string n="",int g=0){
        name=n;
        grade=g;
    }
};
Actor defaultActor("",0);
class MainCharacter{
    public:
    string name;
    Actor actor;
    MainCharacter(string n="  ",Actor a=defaultActor){
        name=n;
        actor=a;
    }
};
class Scenario{
    public:
    int length;
    int grade;
    string name;
    Scenario(int l=0,int g=0){
        length=l;
        grade=g;
    }
};

class Movie {

    Camera camera;
    Director director;
    MainCharacter maincharacter;
    Scenario scenario;
public:
    Movie(Camera c,Director d,MainCharacter m,Scenario s) {
        this->camera=c;
        this->director=d;
        this->maincharacter=m;
        this->scenario=s;
        
        
    }
    int channge_director(Director d){
        if (d.grade<5){
            return 1;
        }
        else {
            this->director=d;
            return 0;
        }
    }
    float make_avg_reviev(){
        float rev;
        rev=(camera.price/10000+director.grade+maincharacter.actor.grade+scenario.grade)/4;
        return rev;
    }


};




int main()
{   
    //Camera();
    Camera camera1("Smartfone",130,2000);
    camera1.printer();
    //cout<<"elelelle"<<endl;
    Director director1("Nicolas Angelo",30,3);
    Director director2("Nicolas Stage",34,9);

    Scenario scenario1(1000,9);
    Actor actor1("Nicolas Cage",10);
    MainCharacter mainCharacter("Super Hero",actor1);
    Movie movie(camera1,director1,mainCharacter,scenario1);
    float rev;
    rev=movie.make_avg_reviev();
    cout<<rev<<endl;
    int change;
    change=movie.channge_director(director1);
    rev=movie.make_avg_reviev();
    cout<<rev<<endl;


    //Movie()
}