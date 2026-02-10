#include<iostream>
#include<cstdio>
    using namespace std;

int main(){
    int arr[5];
    int sum =0;
    int avg; 
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);

    }

    for(int j=0;j<5;j++){
        sum = sum + arr[j];
    }

    avg = sum/5;

    cout << "avg is" << avg << endl;




    return 0;
}