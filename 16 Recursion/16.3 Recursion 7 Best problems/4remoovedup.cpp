/*Remove all duplicates from the string "aaaabbbeeecdddd"
"abecd"  */
#include<iostream>
using namespace std;

string rermoveDup(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = rermoveDup(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
    
    cout<<rermoveDup("aaaabbbeeecdddd")<<endl;

    return 0;
}