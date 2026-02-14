#include<iostream>
#include<list>
using namespace std;

int main(){
    int m, n;

    cin >> m;
    cin >> n;

    list<int> l1;
    list<int> l2;
    list<int> l3;

    int x;


    for(int i = 0; i < m; i++){
        cin >> x;
        l1.push_back(x);
    }


    for(int j = 0; j < n; j++){
        cin >> x;
        l2.push_back(x);
    }

    l1.sort();
    l2.sort();


    l3 = l1;
    l3.merge(l2);   


    cout << "Merged Sorted List: ";
    for(int val : l3){
        cout << val << " ";
    }

    return 0;
}
