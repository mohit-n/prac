#include <iostream>
#include <string.h>
using namespace std;

class Hero{
    private:
        int health;
        char level;
    public:
        char *name;
        static int time2complete;

        Hero(int h,char l, char myName[]){
            cout<<"Constructor is called"<<endl;
            health=h;
            level=l;
            this->name=new char[100];
            strcpy(this->name,myName);
        }

        Hero(Hero &H){
            cout<<"Copy constructor called"<<endl;
            this->health=H.health;
            this->level=H.level;
            this->name=new char[strlen(H.name)+1];
            strcpy(this->name,H.name);
        }
        void print(){
            cout<<"health::"<<this->health<<"  level::"<<this->level<<"  name::"<<this->name<<endl;
            cout<<"time2complete::"<<time2complete<<endl;
        }
        void setName(char myName[]){
            strcpy(this->name,myName);
        }
        int getHealth(){
            return health;
        }
        void setHealth(int h){
            this->health=h;
        }

        int getLevel(){
            return level;
        }
        void setLevel(char l){
            this->level=l;
        }
};

int Hero::time2complete =10;
int main(){
    // Hero H(10,'A');
    // H.print();
    // cout<<"Size::"<<sizeof(H)<<endl;
    // H.setHealth(50);
    // H.print();

    // Hero *Hptr=new Hero(10,'A');
    // Hptr->print();
    // cout<<"Size::"<<sizeof(Hptr)<<endl;

    //default copy
    // char temp[6]="Mohit";
    // Hero H(10,'A',temp);
    // Hero H1(H);
    // H.print();
    // H1.print();

    // H.name[0]='N';
    // H.print();
    // H1.print();
    cout<<"time2complete::"<<Hero::time2complete<<endl;
    char temp[6]="Mohit";
    Hero H(10,'A',temp);

    
    char temp1[5]="negi";
    Hero H1(12,'B',temp1);
    H1.print();

    H1=H;
    H1.print();


}