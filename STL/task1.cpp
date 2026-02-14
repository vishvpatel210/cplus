#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
   vector<int> v1={};
    int value;

   for(int i=0;i<5;i++){
    cin >> value;
     v1.push_back(value);
   }

   sort(v1.begin(),v1.end());

   for(int value : v1){
    cout << value << endl;
   }
   
    return 0;
}