#include<iostream>
#include<cstdio>
using namespace std;

int factorial(int n){

    if(n<=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }    
}


int fib(int n){

    if(n <=1 ){
        return 1;
    }else{

        return fib(n-1) + fib(n-2);
    }
}


// Step by step calculation of factorial = 4

// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;




int main(){

int number;
cout<<"Enter the number for finding it's factorial : "<<endl;

cin>>number;
cout<<number<<"! = "<<factorial(number)<<endl;

cout<<"fibonacci number =  "<<fib(number)<<endl;





return 0;

}