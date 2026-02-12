#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l1 = {1,2,3,4,5};

    // delete element at last in list 

    l1.pop_back();

    //add element at last 
    l1.push_back(10);

    //iteration 

    for(int value : l1){
        cout << value << endl ;
    }

  


    return 0;
}