#include <iostream>
#include <string.h>
using namespace std;

class Coffee{
    protected:
        char type[100];

    public:

        char * getCoffee(){
                return type;
            }
};

class Expresso:public Coffee{
    public:
        Expresso():Coffee(){
            strcpy(type,"Expresso");
            cout<<"Making a cup of Expresso"<<endl;
        }
};

class Cappucino:public Coffee{
    public:
        Cappucino():Coffee(){
            strcpy(type,"Cappucino");
            cout<<"Making a cup of Cappucino"<<endl;
        }
};

class CoffeeFactory{
    public:
        static Coffee* getCoffee(string myCoffee){
            Coffee* tempCoffee;
            if(myCoffee =="Expresso"){
                tempCoffee=new Expresso();
            }else if(myCoffee=="Cappacino"){
                tempCoffee= new Cappucino();
            }else {
                tempCoffee=NULL;
            }
            return tempCoffee;
        }
};

int main(){
    string coffeeType;
    cin>>coffeeType;
    
    Coffee *myCoffee=CoffeeFactory::getCoffee("Expresso");
    cout<<"finished making "<<myCoffee->getCoffee()<<endl;
}