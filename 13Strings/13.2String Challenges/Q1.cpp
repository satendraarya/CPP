#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str = "adsfjhkldjf";

    //Convert into upper case 
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]-= 32;

    }
    cout<<str<<endl; 

    //Convert to lower case

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>= 'A' && str[i]<= 'Z')
        str[i]+= 32;
    }
    cout<str<<endl;
    return 0;
}