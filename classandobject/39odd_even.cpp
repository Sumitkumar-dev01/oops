#include<bits/stdc++.h>
using namespace std;
class evenodd{
     
    int a;

    public : 
    void getdata();
    void putdata();

};

void evenodd :: getdata(){
  
    cout<<"enter your number";
    cin>>a;
}

void evenodd :: putdata(){
    if(a%2==0){
        cout<<"this is an even  number";
    }
    else {
        cout<<"this is an odd number";
    }
}
int main(){
    evenodd aa;
    aa.getdata();
    aa.putdata();
   

return 0;
}