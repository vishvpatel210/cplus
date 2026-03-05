#include<iostream>
using namespace std;

class addition(){
    public:

        string addition = "add";
        void a(int a,int b){
            a+b;
        }
}

class subtraction(){
    public:

        string sun = "sub";
        void b(int a,int b){
            a-b;
        }
}

class multiplication(){
    public:

        string multi = "mul";
        void c(int a,int b){
            a*b;
        }
}

class division(){
    public:

        string divison = "div"
}

class calc : addition,subtraction,multiplication,division{
    public:
        return void
}

int main(){

    return 0;
}




#include <iostream>
using namespace std;

class Addition {
public:
    double add(double a, double b) {
        return a + b;
    }
};


class Subtraction {
public:
    double sub(double a, double b) {
        return a - b;
    }
};


class Multiplication {
public:
    double mul(double a, double b) {
        return a * b;
    }
};


class Division {
public:
    double div(double a, double b) {
        if (b == 0) {
            cout << "Error! Division by zero not allowed." << endl;
            return 0;
        }
        return a / b;
    }
};


class Calculator : public Addition, public Subtraction, public Multiplication, public Division {
public:
    void displayMenu() {
        cout << "\n--- Simple Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
    }
};

int main() {
    Calculator calc;
    int choice;
    double num1, num2;

    do {
        calc.displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
        case 1:
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calc.sub(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << calc.mul(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << calc.div(num1, num2) << endl;
            break;
        case 5:
            cout << "Exiting Calculator...\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}