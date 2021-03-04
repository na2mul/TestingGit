#include <iostream>
using namespace std;

   class Student{
public:
   ~Student(){
    cout << "destructor called" << endl;
   }
   Student(){
    cout << "constructor  called" << endl;
   }

};

int main(){

    Student s1;



   return 0;


}

