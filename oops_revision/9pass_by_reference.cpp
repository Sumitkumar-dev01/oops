// wap to swap value of two objects. 


#include<bits/stdc++.h>
using namespace std;
class sample2; 
class sample1{
    int a;
    public:
    void getdata(int x);
    friend void display(sample1 x,sample2 y);
    friend void swap(sample1 &x,sample2&y); 
};

void sample1 :: getdata(int x){
    a = x;
}

class sample2{
    int b;
    public:
    void getdata(int x); 
    friend void display(sample1 x, sample2 y);
    friend void swap(sample1 &x, sample2 &y); 
}; 

void display(sample1 x,sample2 y){
    cout<<"data in obj 1 is:"<<endl;
    cout<<"a ="<<x.a<<endl;
    cout<<"data in object 2 is"<<endl;
    cout<<"b = "<<y.b<<endl;
}

void swap(sample1 &x, sample2 &y){
    int t;
    t =x.a;
    x.a = y.b;
    y.b = t;
}

int main(){
sample1 obj1;
sample2 obj2;
obj1.getdata(5); 
obj2.getdata(15); 
cout<<"before swap of data between two objects"; 
display(obj1,obj2);
swap(obj1,obj2);
cout<<"after swap of dat between two objects"; 
display(obj1,obj2);
return 0;
}