#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
   clrscr();
   int f=0,s=1,t,n;
   cout<<endl<<"Enter the no. of terms till where u want fibonacci series: ";
   cin>>n;
  /* if(n==0)
   {
   cout<<"Hat be paglet";
   getch();
   exit(0);

   } */

   cout<<endl<<"The fibonacci series is as follows :  ";

   // cout<<"0 "<<"1 ";


     switch(n)
     { case 0: cout<<"Hatt chuttar Aadmi!!";
	       break;
       case 1: cout<<"0 ";
	       break;

       case 2: cout<<"0 1 ";
	       break;

       default: cout<<"0 1 ";
		break;

     }

   for(int a=1;a<=n-2;a++)
   {
      t=f+s;

      f=s;

      s=t;
    cout<<t<<" ";
   }



getch();
}