/* #include <iostream>
using namespace std;
//global variable declartaion
int globalvar=8; 
//declare constant variable
const int age = 25;
void myFunction(int num1, int num2)
{//function code block
  int localvar  = 7;// local variable declaration and initialization
  int sum =  num1 + num2;
cout<< " Local variable inside my function is: "<< localvar <<endl;
cout <<"Sum = "<< sum <<endl;
}

int main()
{
  //age = 26; will not run because a constant  has been ddeclared and it is not modifiable
  //invoking/calling the function
  myFunction (2,3);
  cout << "Global variable value = "<< globalvar; //-- this does not work because the variable is unidentified
  //cout << "Age ="<<age;
return 0;
} */

#include<iostream>
using namespace std;
int main()
{
    bool notTrue =0;
    cout << "Output: " <<notTrue<<endl;
    return 0;
}