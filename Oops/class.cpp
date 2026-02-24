#include <iostream>
using namespace std;

class car {
public:
    string comp_name;
    int mileage;
    string engine;

    void display() {
        cout << "The print function is defined inside car class: " << endl;
        cout << "company name is: " << this->comp_name << endl;
    }
}; 

int main() {
    car c1;        
    c1.comp_name = "Toyota";
    c1.mileage = 20;
    c1.engine = "Petrol";

    c1.display();      

    return 0;
}