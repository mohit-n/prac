#include <iostream>
using namespace std;

int findIndex(int *arr,int size, int key){
    int s=0,e=size-1;
    int mid= (s+e)/2;

    while(s<=e){
       if(arr[mid]==key){
            return  mid;
       }else if(arr[mid]>key){
        //search left side
            e=mid-1;
       }else if(arr[mid]<key){
        //search right side
            s=mid+1;
       }
       mid=(s+e)/2;
    }
    return -1;
}

int main(){
    int arr[]={3,4,5,11,15};
    cout<<"index::"<<findIndex(arr,5,11);
}