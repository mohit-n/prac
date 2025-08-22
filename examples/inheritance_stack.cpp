#include <iostream>
using namespace std;

const int MAX_ELEMENTS=5;
class Stack{
    protected:
        int stack[MAX_ELEMENTS];
        int stackTop;
    public:
        Stack(){
            stackTop=0;
        }
        void push(int item){
            stack[stackTop]=item;
            stackTop++;
        }
        int pop(){
            return stack[stackTop];
        }

};

class MyStack:public Stack{
    public:
        int push(int elem){
            if(stackTop<MAX_ELEMENTS){
                Stack::push(elem);
                return 1;
            }
            cout<<"Stack overflow"<<endl;
            return 0;
        }
};