// Time Conversion (IMPORTANT QUESTION)

// https://www.geeksforgeeks.org/cpp-program-convert-time-12-hour-24-hour-format/


#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
                           // ASCII of 0=48
                           // ASCII of s[0]=55  (in string 07:05:45PM )
   int h1=(int)s[0]-'0';  // here '0' is subtracted so as its ASCII value is subtracted ie (ASCII of (s[0]) - ASCII of 0 )  
   int h2=(int)s[1]-'0';
   int hh=(h1*10+h2 % 10);

   if(s[8]=='A')
   {
       if(hh==12)
       {
           cout<<"00";
           for(int i=2;i<8;i++)
           cout<<s[i];
       }
       else
       {
           for(int i=0;i<8;i++)
           cout<<s[i];
       }
   }
   else{
       if(hh==12)
       {
           for(int i=0;i<8;i++)
           cout<<s[i];
       }
       else{
           cout<<hh+12;
           for(int i=2;i<8;i++)
           cout<<s[i];
       }
   }
    return 0;
}
