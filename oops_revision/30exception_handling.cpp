#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10; 
    int b = 0; 
    try{
        if(b==0) throw "division by zero isn't allowed";
        cout<<a/b;
    }
    catch(const char*msg){
        cout<<"exception :"<<msg;
    }
return 0;
}