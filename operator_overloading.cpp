#include<bits/stdc++.h>


using namespace std;
class Box
{
    int l,b,h;
    public:
    Box()
    {
        l=b=h=0;
    }
    Box(int length, int breadth, int height)
    {
        l=length;
        b=breadth;
        h=height;
    }
    Box(Box &B)
    {
        l=B.l;
        b=B.b;
        h=B.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return static_cast<long long>(l)*b*h;
        //or we can break it into two steps
        //return l*b*h
        //!!!we cannot do it directly like l*b*h bcoz it results in the overflow of intermediate result because compiler performing caculation by thinking that it is int variables and when the value crosses the range it roundoff it according to int and then put it back into long long which is giving negative answer!!!  
    }
    
    //Operator Overloading
    bool operator <(Box &B)
    {
        if(l<B.l)
            return 1;
        else if(b<B.b && l==B.l)
            return 1;
        else if(h<B.h && l==B.l && b==B.b)
            return 1;
            
        return 0;
    }
    
    friend ostream& operator <<(ostream &os ,Box &B)
    {
        os<<B.l<<' '<<B.b<<' '<<B.h;
        return os;
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