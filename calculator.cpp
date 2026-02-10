#include<iostream>
using namespace std;

int main(){
    int num;
    int num1;
    int num2;
    
    cout << "1. for addition " <<endl;
    cout << "2.for subtraction" <<endl;
    cout << "3.for multiplication" << endl;
    cout << "4. for devision" << endl;

    cout << "Enter youch choice" << endl;
    cin>>num;

    cout << "Enter number 1" << endl;
    cin>>num1;

    cout << "Enter number 2" << endl;
    cin>>num2;

    switch(num){
        case 1: cout<< "addition:" << num1+num2 <<endl;
            break;

         case 2: cout<< "subtraction:" << num1-num2 <<endl;
            break;

         case 3: cout<< "Multiplication:" << num1*num2 <<endl;
            break;

         case 4: if(num2 == 0){
            cout << "zero is not allowed" << endl;
         }
         else{
            cout<< "division:" << num1/num2 <<endl;
         }
            break;

        default:

            break;

        
    }
     
    return 0;
}