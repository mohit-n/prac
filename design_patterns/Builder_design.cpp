#include <iostream>
#include <string.h>
using namespace std;

class Entree{
    protected:
        char name[100];
    public:
        char* getEntree(){
            return name;
        } 
};

class Burger:public Entree{
    public:
        Burger(){
            cout<<"Preparing Burger..."<<endl;
            strcpy(name,"Burger");
        } 
};

class Hotdog:public Entree{
    public:
        Hotdog(){
            cout<<"Preparing Hotdog..."<<endl;
            strcpy(name,"hotdog");
        } 
};


class Side{
    protected:
        char name[100];
    public:
        char *getSide(){
            return name;
        }
};

class Fries:public Side{
    public:
        Fries(){
            cout<<"Preparing Fries"<<endl;
            strcpy(name,"Fries");
        }
};
class Salad:public Side{
    public:
        Salad(){
            cout<<"Preparing Salad"<<endl;
            strcpy(name,"Salad");
        }
};

class Drink{
    protected:
        char name[100];
    public:
        char *getDrink(){
            return name;
        }
};

class Soda:public Drink{
    public:
        Soda(){
            cout<<"Preparing Soda"<<endl;
            strcpy(name,"Soda");
        }
};
class Coffee:public Drink{
    public:
        Coffee(){
            cout<<"Preparing Coffee"<<endl;
            strcpy(name,"Coffee");
        }
};



//Director
class ComboMeal{
    public:
        Entree *myEntree;
        Side *mySide;
        Drink *myDrink;

    ComboMeal(const char *type){
        cout<<"meal Type::"<<type<<endl;
    }
    void setEntree(Entree *e){
        myEntree=e;
    }
    void setSide(Side *s){
        mySide=s;
    }
    void setDrink(Drink *d){
        myDrink=d;
    }
    void getBag(){
        //sprintf_s(bag,"%s %s %s",bag, myEntree->getEntree(),mySide->getSide(),myDrink->getDrink())
        cout<<"in the bag::"<<myEntree->getEntree()<<" "<<mySide->getSide()<<" "<<myDrink->getDrink()<<endl;
    }
};

//Base/Abtract Builder
class MealBuilder{
    protected:
        ComboMeal *myMeal;
    public:
        virtual void cookEntree(){};
        virtual void cookSide(){};
        virtual void fillDrink(){};
    
        ComboMeal* getMeal(){
            return myMeal;
        }
};

class BurgerMeal:public MealBuilder{
    public:
        BurgerMeal(){
            myMeal=new ComboMeal("Burger");
        }
        void cookEntree(){
            Burger *myBurger=new Burger;
            myMeal->setEntree(myBurger);
        }
        void cookSide(){
            Fries *myFries=new Fries;
            myMeal->setSide(myFries);
        }
        void fillDrink(){
            Soda *mySoda=new Soda;
            myMeal->setDrink(mySoda);
        }
};
class HotDogMeal:public MealBuilder{
    public:
        HotDogMeal(){
            myMeal=new ComboMeal("HotDog");
        }
        void cookEntree(){
            Hotdog *myHotDog=new Hotdog;
            myMeal->setEntree(myHotDog);
        }
        void cookSide(){
            Salad *mySalad=new Salad;
            myMeal->setSide(mySalad);
        }
        void fillDrink(){
            Coffee *myCoffee=new Coffee;
            myMeal->setDrink(myCoffee);
        }
};

int main(){
    MealBuilder *cook= new MealBuilder;
    ComboMeal *meal;
    int choice;

    cin>>choice;
    if(choice ==1){
        cook= new BurgerMeal;
    }else {
        cook= new HotDogMeal;
    }
    cook->cookEntree();
    cook->cookSide();
    cook->fillDrink();
    meal=cook->getMeal();
    meal->getBag();

}

