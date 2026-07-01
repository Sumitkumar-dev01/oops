// wap to initialize array of object and print them 

#include<bits/stdc++.h>
using namespace std;
class Myclass{
    int a; 
    public:
    void set(int x){
        a = x; 
    }
    int get(){
        return a; 
    }
}; 
int main(){
Myclass obj[5]; 
for(int i=0; i<5; i++){
    obj[i].set(i); 
}
for(int i=0; i<5; i++){
    cout<<"obj["<<i<<"].get():"<<obj[i].get()<<endl;
}
return 0;
}