/*
 > There are four types of header files :-
    1. System header files : It comes with the compiler. i.e no need to write by 
       the programmer. Ex :- #include<iostream>

    2. User defined header files : It is written by the programmer.
       Ex :- #include "this.h" --> it gives error that #include errors detected. 
       Please update your includePath. means it is saying that this header file is not
       in your path.
       Jo file app include kar rahe hain woh maujood honi chaiye apki 
       current directory main. Yanni agar main iss folder main (C++ folder)
       ek this.h naam se file bana duu toh ye error hat jayega.       

*/

/* 

The using namespace statement just means that in the scope it is present,
make all the things under the std namespace available without having to prefix std::
before each of them.


*/

#include<iostream>
using namespace std;

// #include "this.h"  // -----> This will produce an error if this.h is not present in the current directory.

// But i had included this.h file in my directory as you can so, it will not through an error
// If i change a single letter then gain it will through an error.

// Go to cpp reference to see more header files.

int main(){

    int a = 5,b=6;
   // By using endl we can get a new line 

   cout<<"Operators in C++"<<endl;
   cout<<"Following are the types of operators in C++"<<endl;

   // Arithmetic Operators:-

   cout<<"Following are the arithmetic operators"<<endl;
   cout<<"The value of a + b = "<<(a+b)<<endl;
   cout<<"The value of a - b = "<<(a-b)<<endl;
   cout<<"The value of a X b = "<<(a*b)<<endl;
   cout<<"The value of a / b = "<<(a/b)<<endl;
   cout<<"The value of a % b = "<<(a%b)<<endl;
   cout<<"The value of a++ = "<<a++<<endl;
   cout<<"The value of a-- = "<<a--<<endl;
   cout<<"The value of ++a = "<<++a<<endl;
   cout<<"The value of --a = "<<--a<<endl;

   cout<<endl;

   // Assignment Operators:- used to assign values to variable
   int c= 3,d = 7;

   // Comparison operators:-
   cout<<"Following are the comparison operators"<<endl;
   cout<<"The value of c == d is "<<(c==d)<<endl;
   cout<<"The value of c >= d is "<<(c>=d)<<endl;
   cout<<"The value of c <= d is "<<(c<=d)<<endl;
   cout<<"The value of c > d is "<<(c > d)<<endl;
   cout<<"The value of c < d is "<<(c < d)<<endl;
   cout<<"The value of c != d is "<<(c !=d)<<endl;

   cout<<endl;

   // Logical operators :-
   cout<<"Following are the Logical operators"<<endl;
   cout<<"The value of ((a == b) && (a < b)) logical operator is "<<((a == b) && (a < b))<<endl;

   cout<<"The value of ((a == b) || (a < b)) logical operator is "<<((a == b) || (a < b))<<endl;

   cout<<"The value of (!(a==b)) is "<<(!(a==b))<<endl;



   return 0;

}