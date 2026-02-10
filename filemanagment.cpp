// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){
//     ofstream file;

//     file.open("sample.txt",ios::app);

//     if(file.is_open()){
//         file<< "fist time of file operation" << endl;
//         file.close();
//     }
//     return 0;
// }



// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){
//     string onelinestatement;
//     ifstream file1;

//     file1.open("sample.txt");

//     if(file1.is_open()){
//         while(getline(file1,onelinestatement)){
//             cout<<onelinestatement<<endl;
//         }

//         file1.close();
//     }
//     return 0;
// }



#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
    ofstream file;
    string str;
    file.open("sample.txt",ios::app);

    if(file.is_open()){
        getline(cin,str);
        file << str << endl;
        file.close();
    }
    return 0;
}
