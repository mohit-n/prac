#include <iostream>
#include <string.h>
using namespace std;

class Student {
    private:
    char *name;
    int rollNo;
    public:
    Student ();
    Student(char const *myName,int myRollNo){
        name=new char[strlen(myName)+1];
        strcpy(name,myName);
        rollNo=myRollNo;
    }
    void myDetails(){
        cout<<"name="<<name<<" rollNo="<<rollNo<<endl;
    }
};
Student::Student(){
    name="default";
    rollNo=0;
}

int main(){
    Student S1("mohit", 1);
    S1.myDetails();
    Student S2;
    S2.myDetails();
    return 0;
}