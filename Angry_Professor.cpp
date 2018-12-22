// https://www.hackerrank.com/challenges/angry-professor/problem
// Problem Solving


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=0)
            {count++;}
        }
        if(count>=k)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}
