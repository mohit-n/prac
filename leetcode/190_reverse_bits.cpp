#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num=0;
    cout<<"Enter a number::";
    cin>>num;

    int res=0;
    for(int i=0;i<32;i++){
        res<<=1;
        res |= (num & 1);
        cout<<"res::"<<res<<endl;
        num >>=1;
    }
    cout<<"reverse::"<<res<<endl;
    // int n=0,res=0;
    // while(num !=0){
    //     int bit=num%2;
    //     if(bit==1){
    //         res+= pow(10,n)*bit;
    //     }
    //     num=num/2;
    //     n++;
    // }
    // cout<<"binary::"<<res<<endl;
}