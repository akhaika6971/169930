#include<iostream>
#include <windows.h> //colour library for windows
#include <unistd.h> //time library for "sleep as used later in code"


using namespace std;
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
     }
int main()
{
switch(1){
    case 1:
    {
        changeColor(04);//color 0 is black for background and 4 is red for text same for the rest of the colors used later in the code
        cout<<"STOP!\n";
        sleep(10);

        changeColor(06);
        cout<<"GET READY!\n";
        sleep(5);

        changeColor(02);
        cout<<"GO!";
        sleep(5);
        break;
    }
default:{
    exit(0); //exit function to stop program after it runs. No input required so default does not need to have a message.
}
    }
}
