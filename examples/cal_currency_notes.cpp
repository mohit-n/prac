#include <iostream>
using namespace std;




int main(){
    int amount=0;
    cout<<"Enter amount::";
    cin>> amount;
    int notes[]={500,100,50,20,10,5,1};
    int i=0;
    while(amount !=0){
        int numOfNotes=0;
        if(amount>notes[i]){
            numOfNotes=amount/notes[i];
            amount=amount%notes[i];
            cout<<"Number of "<< notes[i]<<" is "<<numOfNotes<<endl;
        }
        i++;
    }
    return 0;
}