#include<bits/stdc++.h>
using namespace std;
class A{ // BASE CLASS
    public:
    int a,b;
    void getnumber(){
        cout<<"\nenter number:\t";
        cin>>a;
    }
};

class B:public A //Derived class1
{
public:
void square(){
    getnumber();// call base class property
    cout<<"\n square of the number:"<<(a*a);
}
};

class C:public A
{
    public:
    void cube(){
        getnumber(); // call base class property.
        cout<<"\n\n\tCube of the number :\t"<<(a*a*a);
    }
};
int main(){
B b1;
b1.square(); 
C c1;
c1.cube(); 
return 0;
}