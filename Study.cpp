//error directive
/* #ifndef GeeksforGeeks
#error GeeksforGeeks not found !
#endif */

//class work from notes, Calculate area of a rectangle, user input
 /* #include <iostream>
using namespace std ;
int main ()
{
    float length, width, area ;
    cout <<"Enter length: ";
    cin >> length;
    cout <<"Enter width: ";
    cin >> width;
    area= length * width;
    cout<< area;
} 
 */

//class work from notes. Calculator, user input
 /* #include <iostream>
using namespace std;
int main()
{
    float a, b , sum, mult, sub, div; //can write float a=2, b=3 blah blah blah. wriete full names instead of characters.
    char fucntionsymbol;
    cout<<"Enter first number: ";
    cin>> a;
    cout<<"Enter function symbol(+,*,-,/,): ";
    cin>> fucntionsymbol;
    cout<<"Enter second number: ";
    cin>> b;
     if (fucntionsymbol == '+')
     {
        cout<<"Sum= "<< a+b<< endl;
     }
     else if(fucntionsymbol == '*')
     {
        cout<<"Product= "<< a*b << endl;
     }
     else if (fucntionsymbol == '-')
     {
        cout<<"Difference= "<< a-b << endl;
     }
     else if(fucntionsymbol == '/')
     {
        cout<<"Division= "<< a/b<< endl;
     }
     else {
        cout<< "Function symbol is not recognized!!";
     }
} 
 */

//practice program, user input
/* #include <iostream>
using namespace std;
int main()
{
  int weight;
  char gender;
  int height;
  cout<<"Enter gender(F/M): ";
  cin>>gender;
  if(gender == 'F'|| gender =='f')
  {
    cout<<"Proceed.\n";
  }
  else
   {
  cout<<"Not eligible!!\n";
  exit(0);
  }
  cout<<"Enter height: ";
  cin>>height;
  if(height = '5' & height < '6')
  {
    cout<<"Proceed.\n";
  }
  else
  {
    cout<<"Not eligible.\n";
    exit(0);
  }
  cout<<"Enter weight: ";
  cin>>weight;
  if (weight>48 & weight<=63)
  {
    cout<<"Well damn. maintain it\n";
  }
  else if(weight>65 & weight<90)
  {
    cout<<"Get a little more active babe\n";
  }
  else if (weight>91)
  {
    cout<<"This might not be the healthiest weight for your height sweetie\n";
  }
  else
  {
    cout<<"ERROR!!\n";
  }

} */


//formula for area of volume of a cylinder(from sample CAT)user input
   /* #include <iostream>
using namespace std;
int main()
{
float PI, r, h;
char answer;
PI=3.141592;
cout<<"Enter radius: ";
cin>>r;
cout<<"Enter height: ";
cin>>h;
cout<<"Choose answer(v, a): ";
cin>> answer;

if(answer =='a')
  {
  cout<<"Area: "<< (2*PI*r*h)+(2*PI*r*r) <<endl;
  }
  else if(answer =='v')
  {
    cout<<"Volume: "<< PI*r*r*h << endl;
  }
  else
  {
    cout<<"ERROR!!";
  }

}   
 */

//convert fahrenheit to celcius, user input
  /* #include <iostream>
using namespace std;
int main()
{
float f, celcius;
cout<<"Enter fahrenheit: ";
cin>>f ;
celcius =5.0/9.0 * (f-23);
//celcius= 5.0/9.0*(f-32)
cout<< "Celcius: "<<celcius; //celcius <<endl;
}   */


//find greater number of three, user inputs
 /* #include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout<< "Enter first number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;
  cout<<"Enter third number: ";
  cin>>c;
  if(a>=b && a>=c)
  {
    cout<<"The greatest of the three is: "<< a;
  }
  else if(b>=a && b>=c)
  {
    cout<<"The greatest of the three is: "<< b ;
  }
  else 
  {
    cout<<"The greatest of the three is: "<<c ;
  }

}  */

//calculate tax payable and net salary of employee.No user input
 /* #include <iostream>
using namespace std;
int main()
{
  int grosssalary, netsalary, taxpayable;
  grosssalary = 10000;
  taxpayable = (grosssalary/100) * 25;
  netsalary = grosssalary - taxpayable;
  cout<<"Tax payable: " << taxpayable <<endl;
  cout<<"Net salary: " << netsalary<<endl;
}  */

/* #include <iostream>
using namespace std;

int main () {
  float r,h,a,v,PI;
PI = 3.142;
cout<<"enter radius: ";
cin>>r;
cout<<"enter height:";
cin>>h;
a=(2*PI*r*h)+(2*PI*r*h);
v=(PI*r*r*h);
cout<<"area is :"<<a<<endl;
cout<<"volume is: "<<v<<endl;
} */

/* #include <iostream>
using namespace std;
int main()
{
  string name;
  cout<<"Enter Name: ";
  cin>> name;
  cout<<"Good morning "<< name << endl;
} */

/* #include <iostream>
using namespace std;
int main()
{
  int Firstnumber, Secondnumber, add, subtract, multiply, divide; //declare variables
  cout<< "Enter  first number:";
  cin>>Firstnumber;// prompt user to input first number
  cout<<"Enter second number: ";
  cin>> Secondnumber;// prompt user for second number
  add = Firstnumber+Secondnumber;
  multiply = Firstnumber*Secondnumber;
  subtract= Firstnumber-Secondnumber;
  divide= Firstnumber/Secondnumber;
  cout<<"Addition = "<<add<< endl;
  cout<<"Subtraction = "<< subtract<< "\n";
  cout<<"Multiplication = "<< multiply<<endl;
  cout<<"Division = "<< divide;
  return 0;
}  */

#include <iostream>
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
}