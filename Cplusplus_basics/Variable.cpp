/*

1. A variable is a conatainer to hold data.
2. Variable can be of various types. Primarily we have these types of variable in C++
   > Int
   > Float
   > Char
   > Double
   > Boolean

3. int sum = 34; means sum is an integer variable which holds value 34 in memory

Based on Scope, variable can be classified into two types:
 1. Local Variable 
 2. Global Variable 

 > Scope of a variable is the region in code where the existence of variable is valid.
 > Based on scope we have local and glo variables in C++.

 . Local Variables : Local variables are declared inside the braces of any 
 function and can be accessed only from there.

 .Global Variables : Global variables are declared outside any function and can be 
 accessed from anywhere.

 . Data types in C++ are categorised in three groups:
    > Built-in : Ex- int , double, char , bool , float.
    > User-defined : Ex- Struct, Union , Enum.
    > Derived : Array , Function , Pointer.


*/

#include<iostream>
using namespace std;

int glo = 6;

void local(){
    int a;

    cout<<"\nPrinting glo variable inside a function : "<<glo;
}

int main(){

    // int a = -1;
    // int b = 5;
    // bool isRight = true;
    // double d = 12.45;
    // char c = 'L';

    // cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<"\nd = "<<d<<"\nisRight = "<<isRight;

    // We are able to print the glo variable.
    cout<<"\nGlobal variable value = "<<glo;

    int glo = 9; // local variable

    // Precedence of local variable is more so now the below
    // cout will print 9 not 6
    cout<<"\nglo variable inside the function having value = "<<glo;

    // glo variable value remains same

    cout<<"\nGlobal variable value remains same : "<<::glo;

    local(); // Calling function.

    // First compiler checks that whether the variable is inside the function or not
    // If not then it checks it inside the glo area.

    ::glo = 1234556;

    cout<<"\nGlobal variable changes to : "<<glo;

    return 0;
}