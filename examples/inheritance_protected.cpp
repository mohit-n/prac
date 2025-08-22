#include <iostream>
using namespace std;

const int MAX_SIZE=10;
enum boolean {FALSE,TRUE};

class Bag{
    protected:
        int content[MAX_SIZE];
        int itemCount;
    public:
        Bag(){
            itemCount=0;
        }
        void put(int item){
            content[itemCount++]=item;
        }
        boolean isEmpty(){
            return itemCount == 0 ? TRUE:FALSE;
        }
        boolean isFull(){
            return itemCount == MAX_SIZE ? TRUE:FALSE;
        }
        boolean isExist(int item);
        void show();
};

boolean Bag::isExist(int item){
    for(int i=0;i<itemCount;i++){
        if(content[i]==item){
            return TRUE;
        }
    }
    return FALSE;
}

void Bag::show(){
    cout<<"Showing contents ..."<<endl;
    for(int i=0;i<itemCount;i++){
        cout<<"content["<<i<<"]="<<content[i]<<endl;
    }
}
class Set:public Bag{
    public:
        void addItem(int item){
            if(!isExist(item) && !isFull()){
                //content[itemCount++]=item;
                cout<<"adding Element"<<endl;
                put(item);
            }
        }
        void read();
        void operator =(Set s1);
};

void Set::read(){
    int elem;
    while(TRUE){
        cout<<"Enter elements in Set=";
        cin>>elem;
        if(elem==0) break;
        addItem(elem);
    }
}

void Set::operator=(Set S1){
    cout<<"Operator + overloading called"<<endl;
    for(int i=0;i<S1.itemCount;i++){
        content[i]=S1.content[i];
    }
     itemCount=S1.itemCount;
}
int main(){
    // Bag B1;
    // int item;
    // while(TRUE){
    //     cout<<"Enter item to be put in the bag=";
    //     cin>>item;
    //     if(item==0){
    //         break;
    //     }else{
    //         B1.put(item);
    //         B1.show();
    //         if(B1.isFull()){
    //             cout<<"bag is full"<<endl;
    //             break;
    //         }
    //     }
    // }

    Set S1,S2;
    //S1.addItem(12);
    S1.read();
    S1.show();
    S2=S1;
    //S2.read();
    S2.show();
    return 0;
}