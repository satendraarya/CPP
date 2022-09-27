#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"not a prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"It is a Prime Number"<<endl;
    }
     
}
