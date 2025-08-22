#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<string> s;
    s.push("Mohit");
    s.push("Priyanka");
    s.push("Nurvi");
    s.pop();
    cout<<"size="<<s.size()<<endl;
    cout<<"size="<<s.size()<<endl;
    while (!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}