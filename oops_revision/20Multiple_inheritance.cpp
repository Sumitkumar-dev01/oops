#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a;
    void getA(){
        cout<<"enter an integer value"<<endl;
        cin>>a;
    }
};

class B{
    public:
    int b;
    void getB(){
        cout<<"enter an integer value"<<endl;
    }
}; 

class C:public A,public B{
    public:
    int c;
    void add(){
        c = a+b;
        cout<<a<<"+"<<b<<"="<<c<<endl;
    }
};
int main(){
C obj;
obj.getA(); 
obj.getB();
obj.add();
return 0;
}