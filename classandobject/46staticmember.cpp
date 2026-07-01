// static member 
// there are two types of static member 
// static data member 
// static member function 


// data member = variables like a and b. 


// static data member 
// . it is initialized to zero whenever first object of its class is created. no other initialization is permitted. 
/*
for making any data member static we use static keyword. 
. only one copy of static data member is created and shared by all the object. 
.it's visibility is entire program . 
*/


// dmeonstration program 

#include<bits/stdc++.h>
using namespace std;
class demo {
    int x,y;
    static int z;
    public : 
    void getdata(int a, int b){
        x = a;
        y = b;
        z = z+1;
    }
    void putdata(){
       cout<<x<<endl<<y<<endl<<z; 
    }
};
int demo ::z;
int main(){
    demo aa,bb;
    aa.getdata(5,10);
    bb.getdata(10,20);
    aa.putdata();
return 0;
}
