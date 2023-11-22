#include<iostream>
using namespace std;
int main()
{
    int Account_balance,Withdrawn_amount;
    cout<<"Enter balance account balance: ";
    cin>>Account_balance;
    if(Account_balance>1000){              //if condition block
        cout<<"Enter withdrawn amount: ";
        cin>>Withdrawn_amount; 
        if(Withdrawn_amount>70001){                  //nested under 1st if condition block
         cout<<"Exceeded daily withrawal limit.";
        }
     if(Withdrawn_amount>=30001&&Withdrawn_amount<=70000){
        cout<<"One more withdrawal left for the day.";
     }
     if(Withdrawn_amount>=10001&&Withdrawn_amount<=30000){
        cout<<"Two more withdrawals left for the day.";
     }
     if(Withdrawn_amount>=1000&&Withdrawn_amount<=10000){
        cout<<"Three more withdrawals left for the day.";
     }
   
    }
    else{
        cout<<"Insufficient funds!";                      //executed when none of the above conditions are met
        }
}