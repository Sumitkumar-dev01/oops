// wap to program to find sum of list of integers. 

#include<bits/stdc++.h>
using namespace std;
int main(){
int n; 
int *p;
cout<<"enter array size"; 
cin>>n;
cout<<"enter list of integer"<<endl;
for(int i =0; i<n; i++){
    cin>>p[i]; 
    // logic for sum. 
    int s =0; 
    for(int i =0; i<n; i++){
        s = s+p[i]; 
        
    }
    cout<<"sum of array element is "; 
        cout<<s;
        delete []p;
}

return 0;
}