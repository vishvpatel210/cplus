#include <iostream>
using namespace std;

class account{
  private:
    string password;
    
    public:
    
        void setPass(string pass){
            password = pass;
        }
        
        void checkPass(string input){
            if(input==password){
                cout << "Login succesfully" << endl;
                
            }
            else{
                cout<< "Wrong password" << endl;
            }
        }
};

int main(){
    account a1;
    a1.setPass("vishv123");
    a1.checkPass("vishv123");

    return 0;
}