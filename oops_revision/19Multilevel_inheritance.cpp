#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a,b;
    void get(){
        cout<<"enter any two integer values"<<endl;
        cin>>a>>b;
    }
}; 

class B:public A{
public:
int c;
void add(){
    c = a+b;
}
};

class C:public B{
    public:
    void show(){
        cout<<a<<"+"<<b<<"="<<c;
    }
};
int main(){
    C c;
    c.get(); 
    c.add();
    c.show();
return 0;
}