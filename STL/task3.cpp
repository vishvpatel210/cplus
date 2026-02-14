#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main(){
    deque<string> s1;

    string x;
    cin >> x;
    s1.push_front(x);

    string y;
    cin >> y;
    s1.push_back(y);

    string z;
    cin >> z;
    s1.push_back(z);

    for( string str : s1){
        cout << str << endl;
    }

    return 0;
}
