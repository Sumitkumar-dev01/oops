#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    int roll;
    char name[20]; 
    public:
    void getData(){
        cout<<"enter your roll number"; 
        cin>>roll;
        cout<<"enter your name"; 
        cin>>name;
    }

    void putdata(){
        cout<<"roll number: "<<roll<<endl;
        cout<<"name: "<<name;
    }
};
int main(){
    Student s; 
    s.getData(); 
    s.putdata(); 

return 0;
}