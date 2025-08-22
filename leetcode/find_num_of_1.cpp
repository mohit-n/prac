//n input :: find number of 1s in binary
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number::";
    cin>>num;
    cout<<"Hex::"<<dec<<num<<endl;

    int count=0;
    while(num>0){
        if((num & 0x1) == 0x1){
            count++;
        }
        num=num>>1;
    }
    cout<<"count::"<<count<<endl;
}