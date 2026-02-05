#include<iostream>
using namespace std;

int main()
{

    int a = 10;

    cout << "Good Afternoon" << endl;
    cout << a << endl;

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Even number is: " << i << endl;
        }
        else
        {
            continue;
        }
        
    }

    // int arr[5]={2,5,8,5,1};
    // for(int i=0;i<5;i++){
    //     cout<< "current index value"<< arr[i] << endl;
    // }

    int arr[5];
    for(int i=0;i<5;i++){
        cin>> arr[i];

    }

    cout<< "new index 0 " << arr[0] << endl;
    cout<< sizeof(arr)/sizeof(arr[0]) << endl;
    return 0;
}