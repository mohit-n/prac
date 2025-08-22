#include <iostream>
#include <string.h>

using namespace std;

class Student{
    private:
        char *name;
        int rollNo;
    public:
        Student (){
            name=new char[100];
            strcpy(name,"Default");
            rollNo=0;
        }

        Student (char const *myName,int myRollNo){
            name=new char[strlen(myName) +1];
            strcpy(name,myName);
            rollNo=myRollNo;
        }
        void setName(char const *myName){
            delete [] name;
            name=new char[strlen(myName)+1];
            strcpy(name,myName);
        }
        void setRollNo(const int myRollNo){
            rollNo=myRollNo;
        }
        void outInfo(){
            cout<<"Name="<<name<<" rollNo="<<rollNo<<endl;
        }
        ~Student(){
            delete[] name;
        }
};

int main(){
    Student *S1[5];
    for(int i=0;i<5;i++){
        char name[100];
        int rollNo;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter RollNo:";
        cin>>rollNo;
        S1[i]=new Student;
        S1[i]->setName(name);
        S1[i]->setRollNo(rollNo);
    }
    for(int i=0;i<5;i++){
        S1[i]->outInfo();
    }

    return 0;
}
