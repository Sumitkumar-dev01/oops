#include<bits/stdc++.h>
using namespace std;
class xyz{
    int a, b;

    public : 
    void getdata(){
        cin>>a>>b;
    }
    void putdata(){
        cout<<a<<endl<<b;
    }
};
int main(){
    xyz aa[5];
    int i;
    for(int i = 0; i<5; i++)
    aa[i].getdata();
    aa[i].putdata();

return 0;
}