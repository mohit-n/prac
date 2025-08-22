#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;

void run(int count){
    while(count-- > 0){
        cout<<"negi ::" <<count<<endl;
    }
    //std::this_thread::sleep_for(chrono::seconds(5));
    cout<<"Thread finished"<<endl;
}

int main(){

    std::thread t1(run,10);
    cout<<"main"<<endl;

   // t1.join();
    t1.detach();
    if (t1.joinable()){
        t1.detach();
    }
    cout<<"After main"<<endl;
    std::this_thread::sleep_for(chrono::seconds(5));


    return 0;
}