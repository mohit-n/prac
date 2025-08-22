#include <iostream>
using namespace std;

class MySingleton {
    private:
        static MySingleton *iMySingleton;
        MySingleton(){
            cout<<"Get a new instance"<<endl;
        }
    public:
        
        static MySingleton* getInstance(){
            if(iMySingleton==NULL){
                iMySingleton= new MySingleton;
            }
            return iMySingleton;
        }
        void giveSpeech(){
            cout<<"Address the public"<<endl;
        }
};

MySingleton* MySingleton::iMySingleton=NULL;

int main(){

    MySingleton::getInstance()->getInstance();
    MySingleton *tempMySingleton=MySingleton::getInstance()->getInstance();
    tempMySingleton->giveSpeech();
}