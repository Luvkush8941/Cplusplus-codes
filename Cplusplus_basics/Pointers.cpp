#include<iostream>
using namespace std;

int main()
{

// What is a pointer?-----> data type which holds the address of other data types

int a=3;
int*b= &a;  // & is the Addess of operator and * is the Dereference operator
cout<<"Value of a is:"<<a<<"\nAddress of a is:"<<b<<"\nAddress of pointer b is:"<<&b;
cout<<"\nValue at b is:"<<*b;

int**c=&b; // Pointer to pointer--> Pointer storing the address of a pointer.

// * ----> (Value at) Dereference operator

cout<<"\n----:Pointer to Pointer examples:----";
cout<<"\nAddress of b is:"<<&b<<endl;
cout<<"\nValue at c is:"<<*c<<endl;
cout<<"\nAddress of c is:"<<&c<<endl;
cout<<"\nValue at **c is:"<<**c;



return 0;
}