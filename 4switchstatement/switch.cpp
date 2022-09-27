#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a character: ";
    cin>>button;
   /* if (button=='a')
    {
        cout<<"Hello"<<endl;
    }
    else if (button=='b')
    {
        cout<<"Namste"<<endl;
    }
    else if ( button=='g')
    {
        cout<<"Good morning"<<endl;
    }
    else if ( button=='s')
    {
        cout<<"Salut"<<endl;
    }
     else {
        cout<<"i am still learning more"<<endl;
     }     */
    switch(button)
    {
        case 'a': cout<<"hello"<<endl;
        break;
        case 'b': cout<<"Namste"<<endl;
        break;
        case 'c': cout<<"Good morning"<<endl;
        break;
        case 'd':cout<<"good after noon"<<endl;
        case 'e': cout<<"Salut"<<endl;
        break;
        default: cout<<"I am Still Learning more"<<endl;
        break;
    }
    return 0;
}