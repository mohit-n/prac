//Given two binary strings a and b, return their sum as a binary string.

#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

// string addBinary(string s1,string s2){
//     //string sum(s1.length(), ' ');
//     int len = s1.length()>s2.length()? s1.length():s2.length();
//     cout<<"len::"<<len<<endl;
//     int sum=0,carry=0 ;
//     int bit=0;
//     int n=0;
//     for(int i=len-1;i>=0;i--){
//         cout<<"s["<<i<<"]="<<s1[i]
//             <<"  s["<<i<<"]="<<s2[i]<<endl;
//         bit=(int)s1[i] ^ (int)s2[i] ^ carry;
//         sum=(pow(2,n)*bit) +sum;
//         sum=sum & 1;
//         carry= (carry==0)?(s1[i] & s2[i]):(s1[i] & s2[i] & 1) ;
//         carry=carry & 1;
//         cout<<"sum:::"<<sum<<"  bit::"<<bit <<"  carry::"<<carry<<endl;
        
//         n++;
//     }
//     if(carry==1){
//         sum=(carry<<(len)) + sum;
//     }
//     cout<<"final sum::"<<sum<<endl;

//     return to_string(sum);
// }

string addBinary(string s1,string s2){
    string result="";
    int i=s1.length() -1;
    int j=s2.length()-1;
    int carry=0;

    while (i>=0 || j>=0 || carry){
        int sum=carry;
        if(i>=0){
            sum+=s1[i] - '0';
            cout<<"sum="<<sum<<endl;
            i--;
        }
        if(j>=0){
            sum+=s2[j] - '0';
            cout<<"sum="<<sum<<endl;
            j--;
        }

        result += (sum%2) + '0';
        cout<<"result="<<result<<endl;

        carry=sum/2;
        cout<<"carry="<<carry<<endl;

        
    }
    reverse(result.begin(),result.end());
    return result;


}
int main(){
    string s1,s2;
    cout<<"Enter 2 string in binrary::";
    cin>>s1>>s2;
    cout<<"str1="<<s1<<"  str2="<<s2<<endl;
    cout<<"add::"<<addBinary(s1,s2)<<endl;
    
    return 0;
}