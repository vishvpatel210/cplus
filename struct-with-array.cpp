#include<iostream>
#include<string>
using namespace std;

struct employee{
    int id;
    string name;
    int salary;
};

int main(){
    employee all[5];
    int maxsalary= all[0].salary;

    for(int i=0;i<5;i++){
        cout << "Enter your Id:" << endl;
        cin  >> all[i].id;

        cout << "Enter your name" << endl;
        cin >> all[i].name;

        cout << "Enter your salary" << endl;
        cin >> all[i].salary;
    }

    for(int i=0;i<5;i++){
        cout << "your name is " << all[i].name << "with id:" << all[i].id << "your salary is " << all[i].salary;
    }

    for(int i=0;i<5;i++){
        if(all[0].salary<all[i].salary){
            maxsalary = all[i].salary;
        }
    }

    cout << "Max salary is " << maxsalary << endl;

    
    return 0;
}