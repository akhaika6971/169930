#include<iostream>
using namespace std;
int main()
{   //only qualify for Discount for goods worth 1000 and above
    float Discount,Purchase_amount,Total_after_discount;
    cout<<"Enter purchase amount as reflects on the screen: ";
    cin>>Purchase_amount;
    if(Purchase_amount>=1000&&Purchase_amount<=3500){
        Discount = 0.1*Purchase_amount;
        Total_after_discount = Purchase_amount - Discount;
        cout<<"Total after Discount: "<< Total_after_discount<<endl;
    }
    else if(Purchase_amount>3500&&Purchase_amount<=5000){
        Discount = 0.15*Purchase_amount;
        Total_after_discount = Purchase_amount - Discount;
        cout<<"Total after Discount: "<< Total_after_discount<<endl;
    }
    else if(Purchase_amount>5000&&Purchase_amount<=15000){
        Discount = 0.17*Purchase_amount;
        Total_after_discount = Purchase_amount - Discount;
        cout<<"Total after Discount: "<<Total_after_discount<<endl;
    }
    else if(Purchase_amount>15000&&Purchase_amount<=30000){
        Discount = 0.095*Purchase_amount;
        Total_after_discount = Purchase_amount - Discount;
        cout<<"Total after Discount: "<<Total_after_discount<<endl;
    }
    else if(Purchase_amount>30000&&Purchase_amount<=60000){
        Discount = 0.085*Purchase_amount;
        Total_after_discount = Purchase_amount - Discount;
        cout<<"Total after Discount: "<<Total_after_discount<<endl;
    }
    else if(Purchase_amount>60000&&Purchase_amount<=100000){
        Discount = 0.095*Purchase_amount;
        Total_after_discount = Purchase_amount - Discount;
        cout<<"Total after Discount: "<<Total_after_discount<<endl;
    }
    else if(Purchase_amount>100000){
        Discount = 0.075*Purchase_amount;
        Total_after_discount = Purchase_amount - Discount;
        cout<<"Total after Discount: "<<Total_after_discount<<endl;
    }
    else{
        cout<<"Amount does not qualify for a Discount.";
    }
}