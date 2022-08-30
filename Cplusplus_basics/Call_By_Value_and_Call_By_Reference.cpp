#include<iostream>
#include<cstdio>
using namespace std;

// int sum(int a, int b){

//     int c = a + b;

//     return c;
// }


void swap(int a, int b){

    int temp = a;
    a = b;
    b = temp;

    cout<<"Value of a inside the function : "<<a<<endl;
    cout<<"Value of b inside the function : "<<b<<endl;

}

void swapped(int* a, int* b){

    int temp = *a;
    *a = *b;
    *b = temp;

    cout<<"Value of a inside the function : "<<(*a)<<endl;
    cout<<"Value of b inside the function : "<<(*b)<<endl;

    
}

int main(){

// cout<<"The sum of 4 and 5 is : "<<sum(4,5)<<endl;

cout<<endl<<"********** Call By Value ***********"<<endl<<endl;

int a = 4;
int b = 5;

cout<<"Value of a before swapping : "<<a<<endl;
cout<<"Value of b before swapping : "<<b<<endl;

swap(a,b);

// a , b will not be swapped
cout<<"Value of a after swapping : "<<a<<endl;
cout<<"Value of b after swapping : "<<b<<endl;

cout<<endl<<"********** Call By Reference ***********"<<endl<<endl;

cout<<"Value of a before swapping : "<<a<<endl;
cout<<"Value of b before swapping : "<<b<<endl;

swapped(&a,&b);

cout<<"Value of a after swapping : "<<a<<endl;
cout<<"Value of b after swapping : "<<b<<endl;

return 0;
}
