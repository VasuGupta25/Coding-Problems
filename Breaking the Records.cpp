#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp1,temp2,min=0,max=0;
    cin>>n;
    int a[n];
    for(int l=0;l<n;l++)
    {
        cin>>a[l];
    }
    temp1=a[0];temp2=a[0];
    for(int i =1;i<n;i++)
    {
        if(a[i]>temp1)
        {
            temp1=a[i];
            max++;
        }
        
        if(a[i]<temp2)
        {
            temp2=a[i];
            min++;
        }
    }
    cout<<max<<" "<<min;
}
