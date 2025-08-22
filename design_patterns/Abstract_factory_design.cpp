#include <iostream>
using namespace std;

class Door{
    public:
        virtual void open()=0;
};

class ElectricDoor:public Door{
    public:
        ElectricDoor(){
            cout<<"Opening Electric Door"<<endl;
        }
        void open(){
            cout<<"  SHHH"<<endl;
        }
};

class GasDoor:public Door{
    public:
        GasDoor(){
            cout<<"Opening gas Door"<<endl;
        }
        void open(){
            cout<<"  YEHHHH"<<endl;
        }
};

class Engine{
    public:
        virtual void run()=0;
};

class ElectricEngine:public Engine{
    public:
        ElectricEngine(){
            cout<<"Starting Electric Enigne"<<endl;
        }
        void run(){
            cout<<" RUMMM"<<endl;
        }
};
class GasEngine:public Engine{
    public:
        GasEngine(){
            cout<<"Starting Gas Enigne"<<endl;
        }
        void run(){
            cout<<" ZOOOM"<<endl;
        }
};


class CarFactory{
    public:
        virtual Door* BuildDoor()=0;
        virtual Engine* BuildEngine()=0;
};

class ElectricCarFactory: public CarFactory{
    public:
        Door* BuildDoor(){
            Door* myDoor=new ElectricDoor();
            //myDoor->open();
            return myDoor;
        }
        Engine* BuildEngine(){
            Engine* myEngine= new ElectricEngine();
            return myEngine;
        }
};
class GasCarFactory: public CarFactory{
    public:
        Door* BuildDoor(){
            return new GasDoor();
        }
        Engine* BuildEngine(){
            return new GasEngine();
        }
};


int main(){
    CarFactory *myCarFactory;
    int choice;
    cin>>choice;

    if(choice==1){
        myCarFactory= new ElectricCarFactory;
    }else if(choice ==2){
        myCarFactory= new GasCarFactory;
    }

    Door *myDoor= myCarFactory->BuildDoor();
    Engine *myEngine= myCarFactory->BuildEngine();

    myDoor->open();
    myEngine->run();
    
}


