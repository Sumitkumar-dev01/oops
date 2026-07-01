/*
 * friend class: a class can also be declared to be 
 * the friend of some other class. when we create a friend 
 * class the all the member function of the friend class also 
 * becomes the friend of the other class. 
 */




#include<bits/stdc++.h>
using namespace std;
class sample_1{
    friend class sample_2;// declaring friend class
    int a,b;
    public:
    void getdata_1(){
        cout<<"enter a &b values in class sample_1";
        cin>>a>>b;
    }
    void display_1(){
        cout<<"a = "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};

class sample_2{
    int c,d,sum;
    sample_1 obj1;
    public:
    void getdata_2(){
        obj1.getdata_1(); 
        cout<<"enter c &d values in class sample_2";
        cin>>c>>d;
    }
    
    void sum_2(){
     sum = obj1.a+obj1.b+c+d;
    }

    void display_2(){
        cout<<"a ="<<obj1.a<<endl;
        cout<<"b = "<<obj1.b<<endl;
        cout<<"c="<<c<<endl;
        cout<<"d= "<<d<<endl;
        cout<<"sum ="<<sum<<endl;
    }
};
int main(){
sample_1 s1;
s1.getdata_1();
s1.display_1(); 
sample_2 s2;
s2.getdata_2();
s2.sum_2();
s2.display_2();
return 0;
}
