#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int **ptr=new int*[n];

    for(int i=0;i<n;i++){
        ptr[i]=new int[n];
    }

    //insert
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ptr[i][j];
        }
    }
    cout<<endl;
    
    //display
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ptr[i][j]<<"  ";
        }
        cout<<endl;
    }

    //delete memory
    for(int i=0;i<n;i++){
        delete[] ptr[i];
    }   
    delete[] ptr;
    return 0;
}