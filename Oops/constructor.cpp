#include <iostream>
using namespace std;

class car {
public:
    string comp_name;
    int mileage;
    string engine;

    // Constructor (same name as class)
    car(string c, int m, string e) {
        comp_name = c;
        mileage = m;
        engine = e;
    }

    void display() {
        cout << "Company name: " << comp_name << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Engine: " << engine << endl;
    }
}; 

int main() {
    car c1("BMW", 15, "Petrol");   // Correct arguments
    c1.display();
    return 0;
}