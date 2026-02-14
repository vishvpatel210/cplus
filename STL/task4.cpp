#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v1={};
    int x;

    for(int i=0;i<10;i++){
        cin >> x;
        v1.push_back(x);
    }

    for(int i=9;i>=0;i--){
        if(i%2==0){
            v1.erase(v1.begin()+i);
            cout << "removed element is : " << i << endl;
        }
    }

    for(int num: v1){
        cout << num << " ";
    }



    return 0;
}