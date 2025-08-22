#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<int,string> m1;

    m1[0]="mohit";
    m1[1]="priyanka";
    m1[2]="nurvi";
    m1.insert({3,"kanta"});

    for(auto i:m1){
        cout<<i.first<<"="<<i.second<<endl;
    }
    cout<<endl;
    m1.erase(2);
    for(auto i:m1){
        cout<<i.first<<"="<<i.second<<endl;
    }
}