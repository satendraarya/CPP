#include <iostream>  
using namespace std;  
 class Animal {  
   public:  
 void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };  
   class Dog  
   {    
       public:  
     void bark(){  
    cout<<"Barking..."<<endl;   
     }    
   };   
   class BabyDog: public Animal, public Dog 
   {    
       public:  
     void weep() {  
    cout<<"Weeping...";   
     }    
   };   
int main(void) {  
    BabyDog d1;  
    d1.eat();  
    d1.bark();  
     d1.weep();  
     return 0;  
}  