#include<iostream>
#include<list>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){

    list<int> l1 = {2,4,5,8,75,2,41};
    auto itr = accumulate(l1.begin(),l1.end(),0);
  

    cout << "total element is: " << itr << endl;

    return 0;
}