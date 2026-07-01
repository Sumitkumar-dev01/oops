// multiple constuctor in a class. 

#include<bits/stdc++.h>
using namespace std;
class complex{
    float real,img;
    public:
    complex() {
        // default constuctor 
        real = img = 0;
    }

    // single parameter parameterized cosntructor 
    complex(float r){
        real = img = r;
    }
    //two parameter parameterized constructor.
    complex(float r, float i){
     real = r;
    img = i;
    }

    // copy constructor 
    complex(complex &c){
        real = c.real;
        img = c.img;
    }

    complex sum(complex c){
        complex t;
        t.real = real+c.real;
        t.img = img+c.img;
        return t; 
    }
    void show(){
        if(img>0){
            cout<<real<<"+i"<<img<<endl;
        }
        else{
            img = img;
            cout<<real<<"-i"<<img<<endl;
        }
    }
     
};
int main(){
 
return 0;
}