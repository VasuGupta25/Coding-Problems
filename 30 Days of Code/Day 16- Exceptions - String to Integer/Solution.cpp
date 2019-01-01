/* String conversion using stoi() or atoi()
stoi() : The stoi() function takes a string as an argument and returns its value. 

stoi("45") is 45
stoi("3.14159") is 3
stoi("31337 geek") is 31337
*/
#include <iostream>
#include<string>

using namespace std;


int main(){
    string S;
    cin >> S;
    try{
        int num=stoi(S);
        cout<<num;
    }
    catch(exception e)
    {
        cout<<"Bad String";
    }

    return 0;
}

