/*
destructor -> destructor is used to destroy the 
object that have been created by constructor. 
like a constructor the destructor is a member function 
whose name is same as the class name but is precceded by tilde. 
*/


#include<bits/stdc++.h>
using namespace std;
class Marks{
    public:
    int maths;
    int science;
    // constructor 
    Marks(){
        cout<<"inside constructor"<<endl;
        cout<<"c++ object is created"<<endl;
    }

    ~Marks(){
        cout<<"inside destuctor"<<endl;
        cout<<"c++ object destructed"<<endl;
    }
}; 
int main(){
Marks m1; 
Marks m2; 
return 0;
}