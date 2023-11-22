#include <iostream>
using namespace std;
 int main()
 {
int opt;
cout<<"Hi this is your DBIT Sem 1 Timetable (Sep-Dec 2023)";
cout<<"\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n";
cout<<"Please select the day of choice(1,2,3....): ";
cin>>opt;
switch(opt){
case 1:
cout<<"Monday is fundamentals of IT.";
break;
case 2:
cout<<"Tuesday is Ethics.";
break;
case 3:
cout<<"Wednesday is Programming.";
break;
case 4:
cout<<"Thursday is Math";
break;
case 5:
cout<<"Friday is Bcom";
break;
case 6:
cout<<"Saturday is Accoutning";
break;
default:
cout<<"Please check that you have entered a valid day";
 }
 return 0;
 }