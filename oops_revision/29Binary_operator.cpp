#include<bits/stdc++.h>
using namespace std;
class Number{
    int x;
    public:
    Number(int a = 0){
        x = a;
    }
    Number operator+(Number obj){
        Number temp;
        temp.x = x + obj.x;
        return temp;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main(){
Number n1(20);
Number n2(30);
Number n3;
n3 = n1+n2;
n3.display();
return 0;

}