#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int a;
    void get_a(int x){
        a = x;
    }
    void display_a(){
        cout<<"in base"<<"\n"<<"a="<<a<<endl;
    }
};

class derived:public base{
    int b;
    public:
    void get_ab(int x,int y){
        a = x;
        b = y;
    }
    void display_ab(){
        cout<<"in derived"<<"\n"<<"a="<<a<<"\nb="<<b<<endl;
    }
};

int main(){
base b;
base *bptr;
bptr->get_a(100); 
bptr->display_a(); 
derived d;
derived *dptr; 
dptr = &d; // points to the object of derived class
dptr->get_a(400);
dptr->display_a();
dptr->get_ab(300,200);
dptr->display_ab();
bptr = &d; // points to the object of derived class
bptr->get_a(400);
bptr->display_a(); 
return 0;
}