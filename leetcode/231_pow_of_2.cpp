#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num=0;
    cout<<"Enter a num::"<<endl;
    cin>>num;
    bool powOf2=0;
   
    for(int i=1;i<30;i++){
        if(pow(2,i)==num){
            powOf2=1;
            break;
        }
    }
    cout<<"powOf2::"<<powOf2<<endl;
}