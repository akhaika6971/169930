#include<iostream>
using namespace std;
int main()
{
    int number=12;
    do{
        cout<<number;
        number+=2;
        cout<<",";
    }
    while(number<=50);
    return 0;
}