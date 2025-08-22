#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i++){
        swap(arr[i],arr[i+1]);
        i++;
    }
}
void printArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }
}
int main(){

    int arr[]={4,5,1,3,7,9};
    printArr(arr,6);
    swapAlternate(arr,6);
    cout<<endl;
    printArr(arr,6);

    return 0;
}