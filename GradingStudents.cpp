#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,g1,g2,g3; int temp1,temp2,temp3,temp4;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
	  int temp1,temp2,temp3,temp4;
      if(a[j]>=38)
      {
          temp1=a[j];
          if(temp1%5==0)
          {
          	temp3=temp1;
		  }
		  else
		  {
          temp2=temp1/5;
          temp2++;
          temp3=temp2*5;
          }
          if((temp3-temp1)<3)
              b[j]=temp3;
          else
          {
          	b[j]=temp1;
		  }
      }
      if(a[j]<38)
      {
          b[j]=a[j];
      }
    }
    for(int k=0;k<n;k++)
    {
        cout<<b[k]<<endl;
    }
}


