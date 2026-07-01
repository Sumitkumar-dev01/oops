// wap to find sum of natural number using reference variable. 


#include<bits/stdc++.h>
using namespace std;
int main(){
int i = 0; 
int &j = i; 
int s = 0; 
int n; 
cout<<"enter n"; 
cin>>n;
while(j<=n){
    s = s+i; 
    i++;
}
cout<<"sum = "<<s<<endl;
return 0;
}