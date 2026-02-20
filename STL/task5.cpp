#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>  
using namespace std;

int main(){

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> v1;  

    int x;
    for(int i = 0; i < size; i++){
        cin >> x;
        v1.push_back(x);   
    }

    sort(v1.begin(), v1.end());
    reverse(v1.begin(), v1.end());

    
    ofstream fout("output.txt");

    fout << "Sorted in Descending Order:\n";
    for(int val : v1){
        fout << val << " ";
    }

    fout.close();   

    cout << "Data written to output.txt successfully!" << endl;

    return 0;
}
