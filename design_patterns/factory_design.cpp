#include <iostream>
#include <string>
using namespace std;

class Vehicle{

    public:
    virtual void createVehicle()=0;
};

class Car:public Vehicle{

    public:
    void createVehicle(){
        cout<<"creating car"<<endl;
    }
};

class Bike:public Vehicle{
    public:
    void createVehicle(){
        cout<<"creating Bike"<<endl;
    }
};

class VehicleFactory{
    public:
    static Vehicle* getVehicle(string vehicleType){
        Vehicle *MyVehicle;
        if(vehicleType=="car"){
            MyVehicle=new Car;
        }else if(vehicleType=="bike"){
            MyVehicle=new Bike;
        }
       return  MyVehicle;

    }
};
int main(){

    string vehicleType;
    cin>>vehicleType;

    // Vehicle *MyVehicle;
    // if(vehicleType=="car"){
    //     MyVehicle=new Car;
    // }else if(vehicleType=="bike"){
    //     MyVehicle=new Bike;
    // }
    // MyVehicle->createVehicle();
//    VehicleFactory myFactory;
//    Vehicle *myVehicle=myFactory.getVehicle(vehicleType);   
    Vehicle *myVehicle=VehicleFactory::getVehicle(vehicleType);
    myVehicle->createVehicle();
}

