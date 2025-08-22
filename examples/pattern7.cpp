// A
// B C
// D E F 
// G H I J
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number::";
    cin>>n;
    int i=1;
    //int k=i;
    while(i<=n){
        int j=1;
        //int k=i;
        while(j<=i){
            char c='A' + i +j-2;
            cout<<" "<<c;
            //k=k-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}