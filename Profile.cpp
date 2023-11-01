#include <iostream>
using namespace std;
int main()
{
    string Firstname, Lastname,Fullname,Favoritemeal,Favoritemovie,Hobby, Favoriteteam;
   cout<<"First name: ";
   getline(cin,Firstname);
   cout<<"Last name: ";
   getline(cin,Lastname);
   cout<<"Full name: ";
   getline(cin,Fullname);
   cout<<"Favorite meal: ";
   getline(cin,Favoritemeal);
   cout<<"Favorite movie: ";
   getline(cin,Favoritemovie);
   cout<<"Hobby: ";
   getline(cin,Hobby);
   cout<<"Favorite team: ";
   getline(cin,Favoriteteam);

   cout<<"My first name is: " <<Firstname<<endl;
   cout<<"My last name is: "<<Lastname<<endl;
   cout<<"My full name is: "<<Fullname<<endl;
   cout<<"My favorite meal is: "<<Favoritemeal<<endl;
   cout<<"My favorite movie is: "<<Favoritemovie<<endl;
   cout<<"My hobby is: "<<Hobby<<endl; 
return 0;
}