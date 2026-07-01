// constructor 
// default constructor => a constructor that accepts no parameters is called the default constructor.

#include<bits/stdc++.h>
using namespace std;
class item{
    int m,n;
    public:
    item(){
        m = 10; 
        n = 20;
    }
    void put();
};
void item::put(){
    cout<<m<<endl<<n;
}
int main(){
item t;
t.put(); 

return 0;
}