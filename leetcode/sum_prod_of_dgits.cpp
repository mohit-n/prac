//for given n find the product - sum of all the digits

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number::";
    cin>>num;

    int prod=1;
    int sum=0;
    while(num>0){
        int digit=num%10;
        prod *= digit;
        sum += digit;
        num/=10;
    }

    cout<<"prod::"<<prod<<"sum::"<<sum<<"Ans::"<<(prod-sum)<<endl;


    return 0;
}