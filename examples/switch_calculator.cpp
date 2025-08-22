#include <iostream>
using namespace std;

int main(){
    int num1,num2,res=0;
    char mode;

    cout<<"Enter two numbers::";
    cin>>num1>>num2;

    cout<<"Enter the mode (+,-,*,/,%)::";
    cin>>mode;

    switch(mode){
        case '+': 
            res=num1 + num2;
            break;
        case '-': 
            res=num1 - num2;
            break;
        case '*': 
            res=num1 * num2;
            break;
        case '/': 
            res=num1 / num2;
            break;
        case '%': 
            res=num1 % num2;
            break;
        default:
            cout<<"Incorrect mode::"<<endl;
    }

    cout<<"result="<<res<<endl;
    return 0;
}