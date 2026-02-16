#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main(){

    deque<int> v1 = {2,4,5,8,75,2,41};

    
    reverse(v1.begin(),v1.end());

    for(auto& value: v1){
        cout << value << endl;
    }

    return 0;
}