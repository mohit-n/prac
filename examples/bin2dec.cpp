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
        int digit= num %10; ///extract 1st bit
        num=num/10;//shift for next bit
        res=pow(2,nbit)*digit  + res;
        nbit++;
    }
    
    cout<<"decimal::"<<res<<endl;
}