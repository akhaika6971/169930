#include <iostream>
using namespace std;
int main()
{
int Choice,Circle_area,Radius,Width, Length,Base, Height;
cout<<"Choose 1 for area of a circle.\n";
cout<<"Choose 2 for area of a rectangle.\n";
cout<<"choose 3 for area of a triangle.\n";
cout<<"Enter choice: ";
cin>>Choice;

switch(Choice){
    case 1: {                                                          // 1st block
        cout<<"Enter radius: ";                                    
        cin>>Radius;
        cout<<"The area of the circle is, "<<(3.142*Radius*Radius)<<endl;
        break;
    }
    case 2:{
        cout<<"Enter the length: ";
        cin>>Length;
        cout<<"Enter the width: ";
        cin>>Width;
        cout<<"The area of the rectangle is, "<<(Length*Width) <<endl;
        break;
    }
    case 3:{
        cout<<"Enter the base: ";
        cin>>Base;
        cout<<"Enter the height: ";
        cin>>Height;
        cout<<"The area of the triangle is, "<<(0.5*(Base*Height))<<endl;
        break; 
    }
    default:
    cout<<"Choice unidentified, please choose among the three.";             //executed if nor of the above is met
}

}