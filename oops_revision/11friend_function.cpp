/**
 * friend function -> 
 * a friend function is a function which is declared 
 * within a class and is defined outside a class. 
 * it does not require any scoe resolution operator 
 * for defining. it can access private members of 
 * a class. it is declared by using keyword:"friend"
 */




#include<bits/stdc++.h>
using namespace std;
class sample{
    int x,y;
    public:
    sample(int a, int b); 
    friend int sum(sample s); 
};

// sample function mein friend use nahi kiya hain isliye scope resolution operator ka use kiye hain 
sample::sample(int a,int b){
   x = a; 
   y = b;

} 

// yahan hum scope resolution ka use nahi karenge kyun ki friend funcition use kiye hain 

int sum(sample s){
    int sum;
    sum = s.x+s.y;
    return 0;
}

int main(){
sample obj(2,3);
int res = sum(obj); 
cout<<"sum ="<<res<<endl;
return 0;
}