#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

#define INT_MAX 2147483647
#define INT_MIN -2147483648

int dec2Bin(int num){
    int res=0,i=0;
    while(num !=0){
        int bit=num & 1;
        res= (pow(10,i) *bit) + res;
        num=num>>1;
        i++;
    }
    return res;
}

int bin2Dec(int num){
    int res=0,i=0;
    while(num!=0){
        int digit=num %10;
        res=(pow(2,i) * digit) +res;
        num=num/10;
        i++;
    }
    return res;
}
// string bin2Dec(string num){
//     string res="0";
//     int i=0;
//     int size=strlen(num);
//     while(size!=0){
//         res=strcat((pow(2,i) * num[i]) ,res);
//         size--;
//         i++;
//     }
//     return res;
// }

int reverseDec(int num){
    int res=0;
    while(num!=0){
        int digit=num%10;
        if((res > INT_MAX/10) || (res < INT_MIN/10)) 
            return 0;
        res= (res*10) + digit;
        num =num/10;
    }
    return res;
}

int complement(int num){

    int mask=0;
    int res=~num;
    if(num==0)
        return 1;

    while (num !=0){
        mask = ((mask << 1) | 1);
        num>>=1;
    }
    res= res & mask;
    return res ;
}

bool checkPow2(int num){
  
    int ans=1;
    for(int i=0;i<=30;i++){
        //int ans=pow(2,i); 
        ans=ans * 2; 
        if(ans == num){
            return true;
        }
    }
    return false;
}
int main(){

    int n;
    cout<<"Enter a number::";
    cin>>n;
    //cout<<"dec2bin::"<<dec2Bin(n)<<endl;
    //cout<<"bin2Dec::"<<bin2Dec(n)<<endl;
    //cout<<"reverseDec::"<<reverseDec(n)<<endl;
    //cout<<"complement::"<<complement(n)<<endl;
    cout<<"checkPow2::"<<checkPow2(n)<<endl;


}