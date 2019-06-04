#include<bits/stdc++.h>

using namespace std;
class Box{
    private :
    int l,b,h;

    public:
    Box(){l=0;b=0;h=0;}
    Box(int length,int breadth, int height){l=length;b=breadth; h=height;}
  

 Box(Box &bo)
 {
     l=bo.l;
     b=bo.b;
     h=bo.h;
 }

int getLength(){return l;} // Return box's length
 int getBreadth (){return b;} // Return box's breadth
 int getHeight(){return h;}  //Return box's height
 long long CalculateVolume(){return (long long)l*b*h;} // Return the volume of the box

 bool operator <(Box bb)
{
    if(l<bb.l || b<bb.b && l==bb.l ||h<bb.h && l==bb.l && b==bb.b){return true;}
    else {return false;}
    
}
};

ostream& operator<<(ostream& out, Box &B) // As at line 86 we cannot print object NewBox                                           directly so we do overloading of extraction operator ie'<<'...This is done by using ostream class. Here "ostream& out" will take "cout" as parameter and "Box &B" will take "NewBox" as parameter.
{
    int l=B.getLength();    /* as we cant write int l=B.l as 'l' on RHS is not*/             int b=B.getBreadth();   // accessible as private member of class
    int h=B.getHeight();
    return out<<l<<' '<<b<<' '<<h;
}

/*
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
*/
