#include<iostream>
using namespace std;

enum word{
    LOW=10,
    MEDIUM=33,
    HIGH=50
};

int main(){
    enum word a1=LOW;
    enum word a2=MEDIUM;
    enum word a3=HIGH;

    cout<<"The value returned by a1 is: " << a2 << endl;

    switch(a3){
        case 0:cout <<"The case 0 is executed" <<endl;
            break;
        case 1: cout<< "The case 1 is executed" <<endl;
            break;
        default: cout<< "the default value is executed" << endl;
    }

    return 0;
}