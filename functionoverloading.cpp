// in this section we will learn there are three types of overloading 
//function overloading 
//constructor overloading 
//operator overloading 

/*
function overloading : function overloading is a concept of polymorphism which enables us to write the multiple function of same name or methods within a program 
. But we have a restriction that all the functions having same name must follow: 
differences should be in 1> no.of argument 
2> type of argument 


for example 
void(int a, float b);
void(int a, int b);
*/



#include<bits/stdc++.h>
using namespace std;
void add(int a, int b){
    cout<<a+b<<endl;
    return ;


}
void add(int a, float b, float c){
    cout<<a+b+c;
    return ;
}


int main(){
    add(5,3);
    add(5,3.05,6.2);

return 0;
}