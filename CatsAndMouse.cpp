//Cats and a Mouse

#include <bits/stdc++.h>

#include <math.h>
using namespace std;


int main()
{
 int n,a,b,c,d,e,temp;
 cin>>n;
 int p[n];
  for(int i=0;i<n;i++)
  {
  	cin>>a;
  	cin>>b;cin>>c;
  	d=abs(a-c);
  	e=abs(b-c);
  	if(d==e)
	{
		cout<<"Mouse C"<<endl;
		
	}
	
	
  	if(d<e)
  	{
  		cout<<"Cat A"<<endl;
	}	
	if(d>e)
	{
		cout<<"Cat B"<<endl;
	}
    
  }
}
