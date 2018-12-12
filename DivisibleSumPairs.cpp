// Divisible Sum Pairs

#include <bits/stdc++.h>

#include <math.h>
using namespace std;




int main()
{
	int n,k,count=0,sum=0;
	cin>>n;
	if(2<=n<=100)
	{
	
	int a[n];
	cin>>k;
	for(int l=0;l<n;l++)
	{
		cin>>a[l];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			sum=a[i]+a[j];
			if(sum%k==0 && i<j)
			{
				count++;
			}
		}
	}
   }
	cout<<count;
}
