#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(){
    vector <char> v1 = {'A','y','R','g'};

    auto itr = v1.begin();

    while(itr != v1.end()){
        cout << "forward iterator current value: " << *itr << endl;
        ++itr;
    }
    cout << "list element are begin printed one by one..." << endl;

    list <int> l1 = {1,2,3,4,5,6,-90,67};

   auto itr1 = l1.begin();

      while(itr1 != l1.end()){
        cout << "forward iterator current value: " << *itr1 << endl;
        ++itr1;
    }

    return 0;
}