#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){

    list<int> l1 = {2,4,5,8,75,2,41};

    sort(l1.begin(),l1.end(),67);
    bool result = binary_search(l1.begin(),l1.end(),75);

    if(result){
        cout << "element is avilable";
    }
    else{
        cout << "element is not available";
    }



    return 0;
}