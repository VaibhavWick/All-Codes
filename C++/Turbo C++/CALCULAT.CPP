#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
void main()
{ clrscr();
  long double a,b,c;
  char e,sum='+', diff='-', multi='*',div='/',d=1;

  cout<<"Hi! this is programme for calculation.... ";
  cout<<'\n'<<endl<<"Please enter the 1st number numbers:      ";
  cin>>a;
  cout<<"Now please enter the 2nd number numbers:  ";
  cin>>b;
  cout<<endl<<"Now please enter the symbol of your calculation.";
  cout<<endl<<"(for eg. + - * / etc.) :   ";
  cin>>e;
  if(e==sum)
  {c=a+b;
  }
  else if(e==diff)
  {c=a-b;
  }
  else if(e==multi)
  {c=a*b;
  }
  else if(e==div)
  {c=a/b;
  }
  cout<<endl<<"Your result is : "<<a<<" "<<e<<" "<<b<<" "<<"="<<" "<<c<<" "<< "...Enjoy!"<<d;






getch();
}