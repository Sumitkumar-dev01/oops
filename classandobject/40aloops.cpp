#include<bits/stdc++.h>
using namespace std;
class loops{

    int n;
    public :
    void getdata();
    void putdata();

};
void loops :: getdata(){
    cout<<"enter your number";
    cin>>n;
}
void loops :: putdata(){
    for(int i = 0; i<n; i++){
        cout<<i<<endl;
    }
}


int main(){
     loops aa;
     aa.getdata();
     aa.putdata();

return 0;
}