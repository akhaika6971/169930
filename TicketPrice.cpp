#include<iostream>
using namespace std;
int main()
{
    int Age, Ticket_price;
    string Movie_type;
    cout<<"Movie types: Regular, 3D.";
    cout<<"Enter movie type: ";
   getline(cin,Movie_type);
    if(Movie_type == "Regular"){
        cout<<"Enter Age: ";
        cin>>Age;
        if (Age>=8&&Age<=14){
            Ticket_price = 600;
            cout<<"The ticket price is Ksh: "<<Ticket_price<<endl;
        }
        if (Age>=15&&Age<=17){
            Ticket_price = 800;
            cout<<"The ticket price is Ksh: "<<Ticket_price<<endl;
        }
        if (Age>=18){
            Ticket_price = 1000;
            cout<<"The ticket price is Ksh: "<<Ticket_price<<endl;
        }
        else{
            cout<<"Enter correct details.";
        }
        }
else if(Movie_type == "3D"){
    cout<<"Enter Age: ";
    cin>>Age;
    if(Age>=8&&Age<=14){                                //nested if..else..
        Ticket_price = 800;
        cout<<"The ticket price is Ksh: "<<Ticket_price<<endl;
    }
    if(Age>=15&&Age<=17){
        Ticket_price = 1000;
        cout<<"The ticket price is Ksh: "<<Ticket_price<<endl;
    }
    if(Age>=18){
        Ticket_price = 1200;
        cout<<"The ticket price is Ksh: "<<Ticket_price<<endl;
    }
    else{
        cout<<"Enter correct details.";
    }
}
else{
    cout<<"Enter correct details.";                        //executed when the above conditions are not met
}
}