
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    printf("This program was written by: Chris Mahube(21849633)\n\n");

    printf("BMI calculator\n\n1. Weight in pounds, height in inches\n2. Weight in kilograms, height in meters\n");
    int choice;
    cout<<"Choice: ";
    cin>>choice;


while(choice!=1 and choice!=2){
cout<<"Invalid choice.Plase enter a valid choice: ";
cin>>choice;
}
float BMI(0.0);
float W(0.0);
float H(0.0);


    if(choice==1)
{   //float W;
    cout<<"Weight in pounds?: ";
    cin>> W;
    float H;
    cout<<"Height in inches?: ";
    cin>>H;
    BMI=(W*703)/(H*H);
    cout<<"\n\nResult..............\n\nWeight:\t\t"<<W<<" pounds"<<endl;
    cout<<"Height:\t\t"<<H<<" inches"<<endl;
    cout<<"BMI:\t\t"<<floor(BMI*10+0.55)/10<<endl;
}
    else
   {

    (choice==2);
    cout<<"Weight in kilograms?: ";
    //int W;
    cin>> W;
    //int H;
    cout<<"Height in meters?: ";
    cin>>H;
    BMI=(W)/(H*H);
    cout<<"\n\nResult..............\n\nWeight:\t\t"<<W<<" kilograms"<<endl;
    cout<<"Height:\t\t"<<H<<" meters"<<endl;
    cout<<"BMI:\t\t"<<floor(BMI*10+0.55)/10<<endl;
   }

if(BMI>=30)
  {

   cout<<"Status:\t\tObese"<<endl;
  }
else if((BMI<30)and(BMI>=25))
  {
    cout<<"Status:\t\tOverweight"<<endl;
  }
else if((BMI<25)and(BMI>=18.5))
  {

    cout<<"Status\t\tNormal"<<endl;
  }
else
  {
    cout<<"Status:\t\tUnderweight<<endl";
  }

    return 0;
}
