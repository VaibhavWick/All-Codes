#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
   clrscr();
   long int r=0,pal=0,copy,n,a,inner;

   cout<<"Enter a number till where u want pallindrome numbers : ";
   cin>>n;

   for(a=1;a<=n;a++)
 {

   for(inner=a;inner>0;inner/=10)
   {
       r=inner%10;
       pal= (pal*10) + r;

   }

    if(pal==a)
    {
       cout<<a<<" ";
    }

 }


getch();
}