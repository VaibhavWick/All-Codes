#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<ctype.h>
void main()
{
  clrscr();
  int n,b=0,a[20],num,flag=0,pos;

  cout<<"Enter the number of terms you want to enter : ";
  cin>>n;

  for(int i=0 ;i<n; i++)
  {
    cout<<"Value "<<i+1<<" : ";
    cin>>a[i];
  }
   cout<<endl<<"Enter the value you want to search : ";
   cin>>num;

  for(i=0; i<n; i++)
  {
       if(a[i]==num)
      {
	 flag=1;
	 pos=i;
	 break;
      }
  }

      if(flag==1)
      cout<<endl<<"The number is at "<<pos+1<<" position.";

     else if(flag==0)
      cout<<endl<<"Number not found.";


getch();
}