#include <iostream>
using namespace std;

class students{
  public:
  
  string name;
 static  int studentcount;
  
  students(string n){
      name = n;
      studentcount++;
  }
};

int students::studentcount = 0;

int main()
{
  students s1("vishv");
  students s2("rehan");
  
  cout<<students::studentcount<<endl;
    return 0;
}