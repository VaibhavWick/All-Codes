#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
   clrscr();
   long int r=0,pal=0,copy,n;

   cout<<"Enter a number: ";
   cin>>n;
   copy=n;

   for(n;n>0;n/=10)
   {
       r=n%10;
       pal= (pal*10) + r;

   }

   cout<<endl<<"reverse number is "<<pal;

   if(copy==pal)
   cout<<endl<<endl<<"It is a pallimdrome!";
   else
   cout<<endl<<endl<<"It is not a pallimdrome!";

getch();
}