/**
 * there are two types of scopes 
 * local scopes -> visibility of a variable is local to the funciton in which it is declared. 
 * global scopes -> visibility of a variable to all fucntions of a program. 
 * 
 * scope resolution operator (::) is used to define a funcion outside a class 
 * 
 */


// wap to find area of rectangle 

#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int l,b;
    public: 
    void getdata(); 
    int area(); 
}; 

void rectangle::getdata(){
    cout<<"enter length of rectangle"; 
    cin>>l;
    cout<<"enter breadth of a rectangle"; 
    cin>>b; 
}

int rectangle::area(){
    return l*b;
}

int main(){
    rectangle r;
    r.getdata(); 
    cout<<"area of rectangle is:"<<r.area(); 

return 0;
}