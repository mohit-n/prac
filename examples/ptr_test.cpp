#include <iostream>
using namespace std;

int main(){
    // int a=10;
    // int *ptr=&a;

    // cout<<"a::"<<a<<" addr a::"<<&a<<endl;
    // cout<<"*ptr::"<<*ptr<<" ptr::"<<ptr<<" addr ptr::"<<&ptr<<endl;

    // (*ptr)++;
    // cout<<"a::"<<a<<" addr a::"<<&a<<endl;
    // cout<<"*ptr::"<<*ptr<<" ptr::"<<ptr<<" addr ptr::"<<&ptr<<endl;

    // int arr[4]={1,2,3,4};
    // int *ptr=arr;

    // cout<<"arr  ::"<<arr  <<" addr arr::"<<&arr<<endl;
    // cout<<"*ptr::"<<*ptr<<" ptr::"<<ptr<<" addr ptr::"<<&ptr<<endl;
    // cout<<"size of arr="<<sizeof(arr)<<"  size of arr[i]="<<sizeof(arr[0])<<"  size of ptr="<<sizeof(ptr)<<endl;
    
    // //ptr airthmetic
    // for(int i=0;i<4;i++){
    //     //cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    //     cout<<"arr["<<i<<"]="<<*(ptr+i)<<endl;
    // }
    // //copy pointer
    // int *ptr1=ptr;
    // cout<<"*ptr1::"<<*ptr1<<" ptr1::"<<ptr1<<" addr ptr1::"<<&ptr1<<endl;

    // int arr2[4]={10,11,12,13};
    // ptr=arr2;
    // cout<<"arr2  ::"<<arr2  <<" addr arr2::"<<&arr2<<endl;
    // cout<<"*ptr::"<<*ptr<<" ptr::"<<ptr<<" addr ptr::"<<&ptr<<endl;
    // cout<<"*ptr1::"<<*ptr1<<" ptr1::"<<ptr1<<" addr ptr1::"<<&ptr1<<endl;
 
    //  char c_arr[4]={'a','b','c','d'};
    //  char *cptr=c_arr;
    //  char c_arr='a';
    //  char *cptr=&c_arr;

    //char c_arr[4]="abc";
    //char *cptr=c_arr;
    // char *cptr="abc";
    //  //cout<<"c_arr  ::"<<c_arr  <<" addr c_arr::"<<&c_arr<<endl;
    //  cout<<"*cptr::"<<*cptr<<" cptr::"<<cptr<<" addr cptr::"<<&cptr<<endl;
    // *cptr='x';
    // // ptr airthmetic
    //   for(int i=0;i<4;i++){
    //       //cout<<"c_arr["<<i<<"]="<<c_arr[i]<<endl;
    //       cout<<"c_arr["<<i<<"]="<<*(cptr+i)<<endl;
    //   }


    // int a = 7;
    // int *c = &a;
    // c = c + 3;
    // cout<<&a<<endl;
    // cout<< c << endl;

    // int a=6;
    // int *ptr=&a;
    // int **ptr2ptr=&ptr;

    // cout<<"a  ::"<<a  <<" addr a::"<<&a<<endl;
    // cout<<"*ptr::"<<*ptr<<" ptr::"<<ptr<<" addr ptr::"<<&ptr<<endl;
    // cout<<"**ptr2ptr::"<<**ptr2ptr<<"   *ptr2ptr::"<<*ptr2ptr<<" ptr2ptr::"<<ptr2ptr<<" addr ptr2ptr::"<<&ptr2ptr<<endl;
    
    // int a[] = {1, 2, 3, 4};
    // int *p = a++;
    // cout << *p << endl;

    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl;
    return 0;
}