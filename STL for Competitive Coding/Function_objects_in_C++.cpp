// Function object(Functor) : Function wrapped in a class so that it is available like a object.

#include<iostream>
#include<cstdio>

#include<functional>
#include<algorithm>

using namespace std;


int main(){

int arr[] = {1,23,4,200,6,-1};

sort(arr, arr + 5); // sort is a method in the algorithm library

// it will sort the starting 5 elements

for(int i=0 ; i < 6 ; i++){

    cout<<arr[i]<<" ";
}

cout<<endl;

// ------------ Passing function object -----------------

sort(arr, arr + 6 , greater<int>()); // sort the array in the descending order.

for(int i=0 ; i < 6 ; i++){

    cout<<arr[i]<<" ";
}

cout<<endl;


sort(arr, arr + 6 , less<int>()); // sort the array in the ascending order.

for(int i=0 ; i < 6 ; i++){

    cout<<arr[i]<<" ";
}

cout<<endl;

return 0;
}



// for reference go to cppreference.com
