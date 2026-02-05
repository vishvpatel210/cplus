#include<iostream>
using namespace std;


int main(){
    int a=10;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    int *ptr=&a;
    int **ptr1 =&ptr;

     cout<<"the address of thr targeted value is using variable"<<&a<< endl;
    cout<<"the address of thr targeted value is using pointer"<<ptr << endl;
    cout<<"the value of the targeted value is" << *ptr << endl;

    cout<< "the actual address of ptr is:" << &ptr << endl;
    cout << "the actual address of ptr but by using ptr1 is:" << ptr1 << endl;


    **ptr1=15;

    cout<< "the new value is:" << a << endl;
    return 0;
}