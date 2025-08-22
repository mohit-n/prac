#include <iostream>
using namespace std;

class Example{
    private:
        int value;
    public:
        Example(int val):value(val){}
        void  setValue(int val){
            this->value=val;
        }
        int getValue(){
            return this->value;
        }
        Example& increment(){
            this->value++;
            return *this;
        }
};

int main(){
    Example E1(5);
    cout<<"Value="<<E1.getValue()<<endl;

    E1.setValue(10);
    cout<<"Updated Value="<<E1.getValue()<<endl;

    E1.increment().increment();
    cout<<"Value after incementing twice="<<E1.getValue()<<endl;
}