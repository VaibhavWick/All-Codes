#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
   clrscr();

   long int line=1,a=1,other=5,r=0,num=0,copy,r1=0,copy2=0;
   char sp = ' ';

   for(line=1;line<=5;a*=11,line++)
   {           r=0;
	       r1=0;
	       num=0;
	       copy2=0;
	       copy=0;
       for(other=5;other>=line;other--)
       cout<<sp;

       copy=a;

     for( ;copy>0;copy/=10)
     { r=copy%10;
       num= num*10 + r;

     }
     copy2=num;
     for( ;copy2>0;copy2/=10)
     {
	r1= copy2%10;

	cout<<r1<<" ";
     }

       cout<<endl;


   }



getch();
}