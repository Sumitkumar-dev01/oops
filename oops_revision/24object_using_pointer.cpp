#include<bits/stdc++.h>
using namespace std;
class item{
    int code;
    float price;
    public:
    void getdata(int a, float b){
        code = a;
        price = b;
    }
    void show(){
        cout<<code<<"\t"<<price<<endl;
    }
};
int main(){
    int n;
    int cd;
    float pri;
    cout<<"enter number of objects to be created"; 
    cin>>n;
    item *ptr = new item[n]; 
    item *p;
    p = ptr;
    for(int i =0; i<n; i++){
        cout<<"enter data for object"<<i+1; 
        cout<<"enter code";
        cin>>cd;
        cout<<"enter price"; 
        cin>>pri;
        p->getdata(cd,pri); 
        p++;
    }
    int i; 
    p = ptr;
    cout<<'data in various objects are'<<endl;
    cout<<"sno\tcode\tprice\n";
    for(i =0; i<n;i++){
        cout<<i+1<<"\t"; 
        ptr-> show(); 
        ptr++;
    }

return 0;
}