/**
 * INLINE FUNCTIONS:
 *  Definition: 
 * An inline function is a function that is expanded in line when it is invoked.
 *  Inline expansion makes a program run faster because the overhead of
 *  a function call and return is eliminated. It is defined by using key word “inline” 
 * 
 * 
 * Necessity of Inline Function: 
 * ->One of the objectives of using functions in a program is to save some memory space, which becomes appreciable when a function is likely to be called many times.
 * -> Every time a function is called, it takes a lot of extra time in executing a series of instructions for tasks such as jumping to the function, saving registers,
 *  pushing arguments into the stack, and returning to the calling function.
 * -> When a function is small, a substantial percentage of execution time may be spent in such overheads. One solution to this problem is to use macro definitions, known as macros.
 *  Preprocessor macros are popular in C. 
 * The major drawback with macros is that they are not really functions and   therefore, the usual error checking does not occur during compilation. C++ has different solution to this problem. To eliminate the cost of calls to small functions, C++ proposes a new feature called inline function.
 */





#include<bits/stdc++.h>
using namespace std;
inline float mul(float x, float y){
    return x*y;
}
inline double div(double p, double q){
    return (p/q);
}
int main(){
float a = 12.345; 
float b = 6.8; 
cout<<mul(a,b)<<endl; 
cout<<div(a,b);  
return 0;
}