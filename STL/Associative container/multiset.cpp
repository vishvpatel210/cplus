#include<iostream>
#include<set>

using namespace std;

int main(){
    multiset<int> m1 = {1,88,45,55,95,88,55,88}; //same as set but allows all duplicate values

    for(int value : m1){
        cout << value << endl;
    }

    cout << "total numbers of element of a given number: " << m1.count(88) << endl;


    return 0;
}