/*
#include<iostream>
#include<String>
using namespace std;
int main ()
{
    //string str;
     string s1 = "fam";
    string s2 = "ily";
    
    s1.append(s2); 
    cout<<s1<<endl; 
    return 0;
} */

// or second type 

/*
#include<iostream>
#include<String>
using namespace std;
int main ()
{
    string s1 = "fam";
    string s2 = "ily";
    cout<<s1+s2<<endl;
    return 0;
} */

// Third Type 

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string s1 = "fam";
    string s2 = "ily";

    s1 = s1+s2;
    cout<<s1<<endl;
    return 0;
} 