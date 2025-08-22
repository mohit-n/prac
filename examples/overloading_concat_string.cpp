#include <iostream>
#include <string.h>
using namespace std;

#define BUFF_SIZE 50
class MyString{
    private:
        char str[BUFF_SIZE];
    public:
        MyString(){
            strcpy(str," ");
        }
        MyString(const char *myStr){
            strcpy(str,myStr);
        }
        void echo(){
            cout<<str<<endl;
        }
        char* operator+(MyString S){
                cout<<"+ operator overloading called"<<endl;
                strcat(this->str,S.str);
                return this->str;
        }
};

int main(){
    MyString S1("Mohit");
    S1.echo();
    MyString S2("negi");
    S2.echo();
    MyString S3=S1+S2;
    S3.echo();
}