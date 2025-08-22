// ---1---
// --234--
// -56789- 
// 10111213141516
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number::";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j=j+1;
        }
        int k=1;
        while(k<=i){
            cout<<k+i-1;
            k=k+1;
        }
        // int l=2;
        // while(l<=i){
        //     cout<<l*2;
        //     l=l+1;
        // }
        cout<<endl;
        i=i+1;
    }
}
