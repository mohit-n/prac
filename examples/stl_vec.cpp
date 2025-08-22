#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v1;
    cout<<"capacity()="<<v1.capacity()<<endl;
    v1.push_back(1);
    cout<<"capacity()="<<v1.capacity()<<endl;

    v1.push_back(5);
    v1.push_back(3);
    cout<<"capacity()="<<v1.capacity()<<endl;
    cout<<"size()="<<v1.size()<<endl;

    cout<<"front="<<v1.front()<<endl;
    cout<<"back="<<v1.back()<<endl;

    for(int i:v1){
        cout<<i<< " ";
    }
    cout<<endl;
    vector<int>::iterator itr;
    for(itr=v1.begin();itr != v1.end();itr++){
        cout<<*itr<< " ";
    }

    cout<<endl;
    vector<int> copyV1(v1);
    vector<int>::iterator copyItr;
    for(copyItr=copyV1.begin();copyItr!=copyV1.end();copyItr++){
        cout<<*copyItr<<" " ;
    }
}