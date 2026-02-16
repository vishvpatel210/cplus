#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> v1 = {2,4,5,8,75,2,41};

    auto itr = find(v1.begin(),v1.end(),8);

    if(itr != v1.end()){
        cout << "element is : " << *itr << endl;
    }
    else{
        cout << "element doen't exist" << endl;
    }

    return 0;
}