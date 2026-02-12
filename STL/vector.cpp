#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v = {10,20,30};

    //insert element
    
    v.push_back(67);

    //to delere the last element

    v.pop_back();

    //insert element at paricular postion 

    v.insert(v.begin()+2,55);

    //erase at particular position

    v.erase(v.begin()+1);

    //size

    cout << "size of vector " << v.size() << endl;

    //front

    cout << "first element " << v.front() << endl;

    //back

    cout << "last element" << v.back() << endl;

    //iterate

    for(int value : v){
        cout << value << endl;
    }

    return 0;

}