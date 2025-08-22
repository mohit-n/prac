#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number::";
    cin>>num;

    int res=0;
    int nbit=0;
    while (num!=0) {
        int bit= num & 1; ///extract 1st bit
        num=num>>1;//shift for next bit
        res=pow(10,nbit) * bit + res;
        nbit++;
    }
    
    cout<<"binary::"<<res<<endl;
}