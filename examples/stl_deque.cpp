#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> deq;
    deq.push_back(5);
    deq.push_front(1);

    for(int i:deq){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size before "<<deq.size()<<endl;
    deq.erase(deq.begin(),deq.begin()+1);
    cout<<"size after "<<deq.size()<<endl;

}