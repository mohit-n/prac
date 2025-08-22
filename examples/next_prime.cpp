#include <iostream>
using namespace std;

int nextPrime(int n) {

    // code here to find next prime number
    // return next prime number
    
    int num=n+1;
    if(n==2){
        return num;
    }
    while(1){
        for(int i=2;i<num;i++){
            cout<<"num="<<num<<" i="<<i<<endl;
            if(num%i==0){
                break;
            }
        }
        num=num+1;
    }
    return num;
}

int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"Next Prime number="<<nextPrime(n)<<endl;
}