// static member function 
/*
class xyz{
    int a,b;
    static int z;
    public : 
    void getdata();
    void putdata();
    static void myfunc();
};

. static member function can acess only static data member.
.since it is not the part of object, it is called using the class name.

*/

// code demonstration 
#include<bits/stdc++.h>
using namespace std;
class demo {
    int x,y;
    static int z ;
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
    int demo :: z;

int main(){
    demo aa,bb;
    aa.getdata(5,10);
    bb.getdata(20,30);
    aa.putdata();

return 0;
}