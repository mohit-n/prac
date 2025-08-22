#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

void A(){
    cout<<"Hello A:::"<<endl;
}

void B(void (*ptr1)()){
    cout<<"Hello B:::"<<endl;
    ptr1();
}
int main(){
    int (*ptr)(int ,int );
    ptr=sum;
    cout<<"sum::"<<(*ptr)(1,2)<<endl;

   B(A);


}