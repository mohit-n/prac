#include <iostream>
using namespace std;


void printArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }
}
int main(){

    int arr[]={4,5,5,4,7,4};
    printArr(arr,6);
    int unique=0;
    // for(int i=0;i<5;i++){
    //     int tmp=arr[i];
    //     for(int j=0;j<5;j++){
    //         if((tmp==arr[j]) && (i!=j)){
    //             break;
    //         }
    //         unique=arr[j];
    //     }
        
    // }

    //Xor based sol
    for(int i=0;i<5;i++){
        unique=unique ^ arr[i];
    }
    cout<<"unique::"<<unique<<endl;

    return 0;
}