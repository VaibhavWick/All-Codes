#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
   clrscr();
   long int n,r,r1,r2,r3,r4,r5,r6,r7,r8;
   cout<<"Enter The amount of money to distribute it into rupees : ";
   cin>>n;

    r= n/100;
    r1= n%100;

   if (r>1)
   cout<<endl<<"The number of 100 rupees notes are : "<<r;
   else
   cout<<endl<<"The number of 100 rupees note is : "<<r;

   r2= r1/50;
   r3 = r1%50;

  if (r2>1)
   cout<<endl<<"The number of 50 rupees notes are : "<<r2;
   else
   cout<<endl<<"The number of 50 rupees note is : "<<r2;

   r4= r3/10;
   r5 = r3%10;

  if (r4>1)
   cout<<endl<<"The number of 10 rupees notes are : "<<r4;
   else
   cout<<endl<<"The number of 10 rupees note is : "<<r4;

  r6= r5/5;
   r7 = r5%5;

  if (r5>1)
   cout<<endl<<"The number of 5 rupees notes are : "<<r6;
   else
   cout<<endl<<"The number of 5 rupees note is : "<<r6;


 r8= r7/1;


  if (r8>1)
   cout<<endl<<"The number of 1 rupees coins are : "<<r8;
   else
   cout<<endl<<"The number of 1 rupees coin is : "<<r8;



getch();
}