/*

We use comparator functions to define the custom sorting behaviour.

*/


#include<bits/stdc++.h>
using namespace std;


// Comparator function :- so changes in this function changes our ibuilt-sorting function.
bool should_i_swap(int a,int b){
    
    // Arranges our array in the decreasing order.
    if(a < b)return false; // As we want to swap in this case i.e return false

    return true; 
}


// Comparator function for vector of pair
bool comparator(pair<int,int> a, pair<int,int> b ){
    
    /*
    if(a > b)return true;

    return false;

    */

   // Now make first column in the increasing order and the second column in the decreasing
   // Ex : 
   //            4 3  Here 4 is a.first and 5 is b.first
 //          |   5 5  Similarly, next a.first is 5 and b.first is also 5
 //          V   5 3  now, the next a.first is 5 and b.first is 7
//               7 9
            



  // Making column-1 in the increasing order
  if(a.first != b.first){ // if column-1 first,second,... element is not equal to column-1 2nd,3rd,... element then enter

    if(a.first > b.first) return false; 
    
    // As sort function's comparator wants false to do swap
    return true; // else return true means no swapping

  }else{  // Making column-2 in the decreasing order if a.first and b.first are equal

    if(a.second < b.second)return false; // we want to swap in this case i.e we will return false
    return true;
  }


}

int main(){

    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";


    /*

    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];

    for(int i=0 ; i<n ;i++){
          
          cin >> arr[i];
    }

    // O(n^2)  sorting code

    for(int i=0; i<n ;i++){
        for(int j=i+1; j<n ;j++){

            if( should_i_swap(arr[i], arr[j]) ){

                swap(arr[i],arr[j]);
            }
        }
    }


    // Printing the array
    for(int i=0 ; i<n ;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    */

   // Note:
   // inbuilt sort function also takes our custom comparator so, if we need 
   // some changes in our sorting algorithm then we can do so.
   
   /*

   int n;
   cout << "Enter the size of the nested vector : " << endl;
   cin >> n;

   vector<pair<int,int> > a(n);

   for(int i=0 ; i<n ;i++){
          
          cin >> a[i].first >> a[i].second;
    }
    cout << endl;

    */

    // O(n^2)  sorting code

    /*

    for(int i=0; i<n ;i++){
        for(int j=i+1; j<n ;j++){

            if( comparator(a[i], a[j]) ){ // sending pairs
                swap(a[i],a[j]);
            }
        }
    }

    */

   /* 
     Inbuilt sort function can also take our comparator function as a third argument.

     ********We can also use inbuilt sort function to swap as per our need*********

     We can send the modifications that we want to do as per our need i.e
     Make your comparator function and do modifications in it and send it to the 
     sort function as a third argument.

   */

   // sort(a.begin(),a.end()); // Arrange in the increasing order.

    /* Giving third argument in the sort function which is comparator function.
       
       Inbuilt sort function kaa comparator ulta hain woh kheta hain kii
       agar tumhe swap karna hain toh mujhe false return karo naaki true.

    */

   /* // Using inbuilt sort function

    sort(a.begin(),a.end(),comparator);

    // Printing the vector of pair
    for(int i=0 ; i<n ;i++){
        cout << a[i].first << " " << a[i].second << endl;
    }

    cout << endl;

    */

   // Now, swapping our array in the decreasing order using sort function and 
   // user-defined comparator function.

   
    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];

    for(int i=0 ; i<n ;i++){
          
          cin >> arr[i];
    }

   // Using sort function and comparator to do sorting as per our need.
    
    sort(arr,arr + n , should_i_swap);


    // Printing the array
    for(int i=0 ; i<n ;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

    
    return 0;
}
