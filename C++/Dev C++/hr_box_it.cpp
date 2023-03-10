#include<bits/stdc++.h>

using namespace std;
#include <sstream>

class Box
{
    int l,b,h;
    bool k=false;
    
    public:
    
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
       
    Box(int a,int b,int c)
    {
        l=a;
        b=b;
        h=c;
    }   
    
    Box(Box &a)
    {
        l=a.l;
        b=a.b;
        h=a.h;
    }   
    
    int getLength()
    {
        cin>>l;
        return l;
    }
    
    int getBreadth()
    {
        cin>>b;
        return b;
    }
    
    int getHeigth()
    {
        cin>>h;
        return h;
    }
    
    long long CalculateVolume()
    {
        long long Vol=l*b*h;        
        
        return Vol;
    }
    
      bool operator < (const Box &B)
    {   
        if(l<B.l ||(l==B.l && b<B.b) ||(l==B.l && b==B.b && h<B.h)  )
        {
          return true;
        }
        else
        return false;
        
    }
    
    friend ostream& operator << (ostream  &out, Box &B)
    {
        
        out<<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }
    
    
};














//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
