#include<iostream>
using namespace std;


int main(){
    
    // By default decimal literal is of type double 
    // We have to type cast it if we want it to be a float value.

    float n = 34.4;
    long double e = 34.4;

    // After typecasting 
    float f = 34.4f; // Passes as a float now
    double d = 35.5l; 
    cout <<"The value of e is "<<e<<endl<<"The value of d is "<<d<<endl;
    cout <<"The value of n is "<<n<<endl<<"The value of f is "<<f<<endl;

   

   //****************** float , double , long double literals **********************

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; // Gives sizeof double. By default a decimal value is of type double. 
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl; 
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl; // Size of long double is 12 in 64 bit compiler
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    
    

    //------------------- Reference Variables -------------------

    // Agar ham kisi value ko apne program main alag alag reference se pukaarna chahte hain
    // Alag reference ko point karana chahte hain same value ko toh ham reference variables kaa use karengye.

    // float x = 455;
    // float &y = x;

    // cout<<x<<endl;
    // cout<<y<<endl;

    // ------------------ Typecasting ----------------
    // Converting one datatype into another

    int a = 45;
    cout<<"The value of a is "<<a<<endl;

    cout<<"The value of a after typecasting is "<<float(a)<<endl;

    float b = 45.67;

    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of b after typecasting is "<<int(b)<<endl;

    int c =int(b);

    cout<<"The expression is "<< a + b<<endl;
    cout<<"The expression is "<< a + int(b)<<endl;
    cout<<"The expression is "<< a + (int)b<<endl;

    return 0;
}