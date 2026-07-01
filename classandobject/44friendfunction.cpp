// friend function 

/*
we know that private section of the class is applicable  only
through the public section of the same class what if we want
to give acess to privare members a function outside the class, in such circumstances we use the concept of friends function 


. key points of friend function 
a friend function can not be called using the object of the class. 
it is called like a normal function
2> friend function can use the resources of a class only using an object of the same class. 
3> usually a friend functio has object as an argument 
4> it doesn't matter you can declare friend function in public as well as private. 

*/



#include<bits/stdc++.h>
using namespace std;
class demo {
    int a,b;
    public : 
    void getdata();
    friend int sum(demo);

    void demo:: getdata()
    {
        cout<<"enter two number"<<endl;
        cin>>a>>b;

    }
    int sum(demo aa){
        return aa.a+aa.b;
    }
};
int main(){
    demo aa;
    aa.getdata();
    cout<<"addition"<<sum(aa);
    



return 0;
}