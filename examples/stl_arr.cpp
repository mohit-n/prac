#include <iostream>
#include <array>
using namespace std;

int main(){
array<int,4> arr={1,2,3,4};

cout<<"arr.size()="<<arr.size()<<endl;
cout<<"arr access arr[2]="<<arr[2]<<"  arr.at(2)="<<arr.at(2)<<endl;
cout<<"arr.front()="<<arr.front()<<"  arr.back()="<<arr.back()<<endl;
cout<<"arr.empty()="<<arr.empty()<<endl;  
}