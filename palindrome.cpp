#include<iostream>
    using namespace std;

int main(){
    int num;
    cout << "please enter the number" << endl;
    cin >> num ;

   int origional=num;
    int reverced = 0;
   while(num>0){
    int digit = num%10;
    num = num /10;

    reverced = reverced *10 + digit; 

   }

   if(origional==reverced){
    cout << "Number is palindeome";
   }
   else{
    cout << "number is not palindeome";
   }
    return 0;
}