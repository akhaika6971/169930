#include <iostream>
using namespace std;
int main()
{
    //int number;
    int sum=0;
    int num;
    cout<<"Enter a number(enter 0 to stop):";
    do{
        //cout<<"Enter a number(enter 0 to stop):";
        cin>>num;
        sum +=num;

    }
    while(num!=0);
    { 
    cout<<"Sum of entered Numbers:"<<sum<<endl;
    return 0;
    }
}