#include<iostream>
using namespace std;
int main()
{
    int meal;
    cout<<"This is the menu";
    cout<<"\n1.Fries(120)\n2.Bhajia(160)\n3.Ugali(50)\n4.Fried trepe(70)\n5.Ugali & Fried trepe(120)\n6.Bhajia & Fried beef(360)\n7.Fried beef(200)\n"; //displays menu
    int fries=120, Bhajia=160, Ugali=50, Fried_trepe=70,Fried_beef=200; 
    cout<<"Choose a meal: ";
    cin>>meal;                                                                   //prompt user for meal input
    switch(meal){
        case 1:
        cout<<"You selected fries(120).Your bill is: "<< fries<<endl;
        break;
        case 2:
        cout<<"You selected Bhajia(160).Your bill is: "<<Bhajia<<endl;
        break;
        case 3:
        cout<<"You selected Ugali(50).Your bill is: "<<Ugali<<endl;
        break;
        case 4:
        cout<<"You selected fried trepe(70).Your bill is: "<<Fried_trepe<<endl;
        break;
        case 5:
        cout<<"You selected ugali(50) & fried trepe(70). Your bill is: "<<Ugali +Fried_trepe<<endl;
        break;
       case 6:
        cout<<"You selected Bhajia(160) and Fried beef(200).Your bill is:"<<Bhajia + Fried_beef<<endl;
        break;
        case7: 
        cout<<"You selected fried beef(200). Your bill is: "<<Fried_beef<<endl;
        break;
        default:
        cout<<"Please choose a meal from the provided menu.";                 //executes when none of the baove conditions are met. when user does not enter the correct details from provide menu
    }
    return 0 ;
}