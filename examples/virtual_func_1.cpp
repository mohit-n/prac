#include <iostream>
#include <string.h>
using namespace std;

class Father{
    private:
        char *fname;
    public:
        Father(const char* name){
            fname=new char[strlen(name)+1];
            strcpy(fname,name);
        }
        virtual void echo(){
            cout<<"Name="<<fname<<endl;
        }
        virtual ~Father(){
            cout<<"Father destructor called"<<endl;
            delete fname;
        }
};

class Child : public Father{
    private:
        char* cname;
    public:
        Child(const char *name,const char *fname):Father(fname){
            cname=new char[strlen(name)+1];
            strcpy(cname,name);
        }
        void echo(){
            cout<<"Name="<<cname<<endl;
        }
        ~Child(){
            cout<<"child destructor called"<<endl;
            delete cname;
        }
};

int main(){
    Father *Fptr=new Child("Nurvi","Mohit");
    Fptr->echo();
    delete Fptr;
    return 0;
}