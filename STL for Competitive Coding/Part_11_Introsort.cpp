#include<bits/stdc++.h>
using namespace std;

/*

Time complexity of sort function is O(nlog(n));

Inbuilt algorithm used in C++ is introsort i.e 

Introsort is a mixture of three sorting algorithms :-

1. Quick sort
2. Heap sort
3. Insertion sort

*/

int main(){

    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
    

    // We can sort the array or vector using inbuilt sort function in C++
    
    // It takes two parameters :
    // 1. starting address.
    // 2. address next to the end.

    // Array name itself a address of the array beginning.
    // And address of location just after the end of the array is arr + n.

    /*

    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];

    for(int i=0 ; i<n ;i++){
          
          cin >> arr[i];
    }

    */

    
    /*

    sort(arr , arr + n);

    // Printing the array

    for(int i=0 ; i<n ;i++){

        cout << arr[i] << " ";
    }

    */



   // Sorting the array from the 3rd position to the end.

   /*

   sort(arr + 2 , arr + n);
   
   // Printing the array

    for(int i=0 ; i<n ;i++){

        cout << arr[i] << " ";
    }

    cout << endl;

    */

    vector<int> v = {4,5,2,25,7,8};

    sort(v.begin(), v.end());

    // Printing vector

    for(int value : v){

        cout << value << " ";
    }

    cout << endl;

    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

    return 0;
}
