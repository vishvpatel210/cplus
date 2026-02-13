#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s1 = {45,2,88,3,6,56};
    s1.insert(10);

    for(int value : s1){
        cout << value << endl;
    }

    s1.erase(45);

    for(int value : s1){
        cout << value << endl;
    }

    auto it = s1.find(6);
    if(it != s1.end()){
        cout << "found:" << *it << endl;
    }
    else{
        cout << "Not found" << endl;
    }

    return 0;
}