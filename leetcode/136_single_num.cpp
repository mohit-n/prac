#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int unique=0;
    for(vector<int>::iterator itr=nums.begin();itr!=nums.end();itr++){
        unique=unique^(*itr);
    }
    return unique;
}
int main(){

    //int arr[]={1,2,4,2,1};

    // int unique=0;
    // for(int i=0;i<5;i++){
    //     unique=unique ^ arr[i];
    // }
//    vector<int> v1={1,2,4,2,1};
    vector<int> v1={1};

    cout<<"unique::"<<singleNumber(v1)<<endl;

}