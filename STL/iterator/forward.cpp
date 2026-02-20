#include<iostream>
#include<vector>
#include<list>
#include<map>

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


    
    cout << "map element are begin printed one by one..." << endl;

    map<int,string> m;

    m[0] = "vishv";
    m[1] = "rehan";
    m[2] = "dax";

    auto itr3 = m.begin();

    while(itr3 != m.end()){
        cout << "Forward Iterator and tthe keyy is:  " << itr3->first << "it's value is:  " << itr3->second << endl;
        ++itr3;
    }
    return 0;
}