#include<iostream>
#include<string>

using namespace std;

int main(){
    string fname = "vishv";
    string lname = "patel";

    string fullname = fname + " " + lname;                
    string hola = "at begining,hi is the \"lion king\"";

    cout << hola << endl;
    cout<< fullname << endl;


    string name;
    getline(cin, name);
    cout << name;
    return 0;
}