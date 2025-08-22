#include <iostream>
using namespace std;

class Base{
    public:
        virtual void echo(){
            cout<<"i am in Base"<<endl;
        }
};

class Derived : public Base{
    public:
        void echo(){
            cout<<"i am in Derived"<<endl;
        }
};

class SuperDerived : public Derived{
    public:
        void echo(){
            cout<<"I am Super Derived"<<endl;
        }
};

int main(){
    Base *B1=new Base;
    B1->echo();

   
}
