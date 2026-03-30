#include <iostream>
using namespace std;

template <class T1, class T2>
void add(T1 a, T2 b) {
    cout << a+b << endl;
}

int main() {
    add(2, 3.5);
    add(2.5, 3.5);
}