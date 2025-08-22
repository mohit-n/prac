#include <iostream>
#include <string.h>
using namespace std;

class Entree {
    protected:
        char name[10];
    
    public:
        char* getEntree(){
            return name;
        }
};
class Side {
    protected:
        char name[10];
    
    public:
        char* getSide(){
            return name;
        }
};
class Drink {
    protected:
        char name[10];
    
    public:
        Drink(){
            cout<<"Fill drink with Soda"<<endl;;
            strcpy(name,"Soda");
        }
        char* getDrink(){
            return name;
        }
};


class ComboMeal{
    public:
        //object composition not inheritance
        Entree *myEntre;
        Side *mySide;
        Drink *myDrink=new Drink("Cola");
        char bag[100];
        ComboMeal(char *type){
            sprintf(bag,"\n combo meal type:: %s",type);
        }
        void setEntree(Entree *ePtr){
            myEntre=ePtr;
        }
        void setSide(Side *sPtr){
            mySide=sPtr;
        }
        void setDrink(Drink *dPtr){
            myDrink=dPtr;
        }
        char* openBag(){
            sprintf(bag,"\n bag contains %s %s %s ",myEntre->getEntree(),mySide->getSide(),myDrink->getDrink());
            return bag;
        }
};

int main(){
    ComboMeal MyMeal("Happy Meal");
    Entree *entree= new Entree;
    strcpy(entree->name,"Fries");
    MyMeal.setEntree("Fries");


}