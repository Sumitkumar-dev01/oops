#include<bits/stdc++.h>
using namespace std;
class B;
class A {
    int a; 
    public : 
    void input(){
        cout<<"enter number a";
        cin>>a;
    }
    friend void max(A,B);

};
class B {
    int b;
    public : void getdata(){
        cout<<"enter your number";
        cin>>b;
    }
    friend void max(A,B);

};
void max(A aa,B bb){
    if(aa.a > bb.b){
        cout<<"maximum number is "<<aa.a;
    }
    else{
        cout<<"maximum number is "<<bb.b;
    }
   
}
int main(){
    A aa;
    B bb;
    aa.input();
    bb.getdata();
    max(aa,bb);
    

return 0;
}