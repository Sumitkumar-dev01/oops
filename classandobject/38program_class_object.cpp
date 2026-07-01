//private => variable or data members 
//public => function method or member function 


//program of addition of two number using class and objects 
/*
#include<bits/stdc++.h>
using namespace std;

    class addition {
        int a,b;

        public: 
        void getdata(){
            cout<<"enter two number";
            cin>>a>>b;
        }
        void putdata(){
            cout<<"addition of two number is "<<a+b;
        }
    };

    int main(){
        addition aa;
        aa.getdata();
        aa.putdata();
        return 0;
    }

    */




   //another way of writing a program of addition of two number. 


//    #include<bits/stdc++.h>
//    using namespace std;
//    class addition{
//     int a,b;
//     public :
//      void getdata();
//      void putdata();
//    };

//     void addition ::getdata(){
//         cout<<"enter two number";
//         cin>>a>>b;
//     }
//     void addition :: putdata(){
//         cout<<"addition of two number is equal to"<<a+b;
//     }

//     int main(){
//         addition aa;
//         aa.getdata();
//         aa.putdata();
//         return 0;
//     }
   
   

#include<bits/stdc++.h>
using namespace std;
class addition {
    int a,b;
    public:

    void getdata(){
        cout<<"enter two number";
        cin>>a>>b;

    }

    void putdata(){
        cout<<"the sum of given two number is equal to "<<a+b;
    }

};

int main(){
    addition aa;
    aa.getdata();
    aa.putdata();

return 0;
}