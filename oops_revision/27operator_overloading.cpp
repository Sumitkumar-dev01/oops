/**
 * Definition:

Operator Overloading ka matlab hai existing operator ko apne user-defined objects (class objects) ke liye naya behavior dena.

Simple language mein:

"Operator ka kaam badalna nahi hai, balki usko apni class ke objects ke hisaab se use karna hai."

Real Life Example

Socho tumhare paas do integers hain.

int a = 10;
int b = 20;

cout << a + b;

Output

30

Yaha + operator numbers ko add kar raha hai.

Ab maan lo tumhare paas ek class hai.

class Complex
{
    int real;
    int imag;
};

Aur

Complex c1, c2;

c3 = c1 + c2;

Compiler ko nahi pata ki do Complex objects ko kaise add kare.

Isi problem ko solve karta hai Operator Overloading.

Hum compiler ko bata dete hain ki

+ operator jab Complex object ke saath use ho,
to real aur imaginary part ko add kar do.
 */