#include <iostream>
using namespace std;

int main(){
    int num=0;
    cout<<"Enter a number::"<<endl;
    cin>>num;

    int count=0;
    while(num!=0){
        if((num & 0x1) ==1){
            count++;
        }
        num=num>>1;
    }

    cout<<"count::"<<count<<endl;
}