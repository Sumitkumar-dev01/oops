#include<bits/stdc++.h>
using namespace std;
class arithmetic{
    protected:
    int num1,num2;
    public:
    void getdata(){
        cout<<"For addittion";
        cout<<"\n enter the first number:";
        cin>>num1;
        cout<<"\n enter the second number:"; 
        cin>>num2;
    }
};

class Addition:public arithmetic{
    protected:
    int sum;
    public:
    void add(){
        sum = num1+num2;
    }
};
class Minus{
    protected:
    int n1,n2,diff;
    public:
    void sub(){
        cout<<"\n for subtraction";
        cout<<'\n enter the first number'; 
        cin>>n1;
        cout<<"\n enter the second number:"; 
        cin>>n2;
        diff = n1-n2;
    }
};

class result:public Addition, public Minus{
    public:
    void display(){
        cout<<"\nSum of "<<num1<<" and "<<num2<<"= "<<sum; 
        cout<<"\nDifference of "<<n1<<" and "<<n2<<"= "<<diff;
    }
};

int main(){
result z;
z.getdata();
z.add(); 
z.sub();
z.display();

return 0;
}