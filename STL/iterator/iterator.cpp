#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <char> v1 = {'A','y','R','g'};

    auto itr = v1.begin();

    while(itr != v1.end()){
        cout << "forward iterator current value: " << *itr << endl;
        ++itr;
    }
}