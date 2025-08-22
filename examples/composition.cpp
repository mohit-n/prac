#include <iostream>
using namespace std;

class Base{
    public:
        int num;
        Base(){
            num=0;
        }
        Base(int val){
            cout<<"Constructor of Base is invoked"<<endl;
            num=val;
        }
};

class Derived {
    public:
        int a;
        Base Bobj;
        Derived(int num):Bobj(num){
            a=num;
        }
        void disp(){
            cout<<"Base class num="<<Bobj.num<<endl;
            cout<<"Dervied class s="<<a<<endl;
        }
};

int main(){
    Derived D1(10);
    D1.disp();
}