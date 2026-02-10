#include<iostream>
    using namespace std;

int main(){
    int num;
    cout << "please enter the number" << endl;
    cin >> num ;

    if(num>0){
        cout<< "Number is positive";
    }
    else if(num<0){
        cout << "Number is negative";
    }
    else{
        cout << "Number is Zero";
    }
    return 0;
}