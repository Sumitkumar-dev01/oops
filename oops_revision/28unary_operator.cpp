#include<bits/stdc++.h>
using namespace std;
class Number{
    int x;
    public:
    Number(int a){
        x = a;
    }
    void operator-(){
        x = -x;
    }

    void display(){
        cout<<x<<endl;
    }
};
int main(){
Number n(10);
cout<<"before:"<<endl;
n.display(); 
-n;   // unary operator overloaded 
cout<<"After:"<<endl;
n.display();
return 0;
}