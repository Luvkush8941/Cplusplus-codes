#include<bits/stdc++.h>
using namespace std;

// Time complexity of Both lower_bound and upper_bound is :
// O(log(n))

// In case of vectors and arrays Lower and upper bound uses binary search.
// And in case of maps and sets it uses Trees.

int main(){

   cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

   //**************** What does Lower bound do ? ***********************

   /*
   1. Like we have an array : 4 5 5 25 7 8

   2. First of all sort this array using the inbuilt sort function.

   3. Array after sorting : 4 5 5 7 8 25.

   4. And we have to find 7 in the array so, if 7 is present in the array
      then lower_bound returns the location/address of that element(7) otherwise 
      it will return the location of next higher address i.e it will return 8.

   5. If we have multiple same values in the array then lower_bound returns the 
      location of first repeated value.
      If we want to find the lower bound of 5 then it will return the location of 
      first 5.

   6. If we want to find the lower_bound of 26 then what happens.
      since 26 is not present so lower_bound returns the address of the next_higher number 
      but, their is no number present in the array which is greater than 26.
      So, it will return the address/location  of a position just after the position of 25 
      which does not exists.
      
   */

  //**************** What does Upper bound do ? ***********************

   /*
   1. Like we have an array : 4 5 5 25 7 8

   2. First of all sort this array using the inbuilt sort function.

   3. Array after sorting : 4 5 5 7 8 25.

   4. And we have to find 7 in the array so, if 7 is present in the array
   then upper_bound returns the location of next higher address and 8 is present at that 
   location .So, It will always return the location of next higher address.
   */

   /*

   int n;
   cout << "Enter the size of the array : " << endl;
   cin >> n;
   int arr[n];

   for(int i=0; i<n ; i++){
    cin >> arr[i];
   }

   // Note: We can only apply upper_bound and lower bound to our datastructures(
   // whether it can be an array or a vector) if they are sorted.
   // Otherwise these functions will work in O(n) timecomplexity in place of O(log(n)).

   sort(arr, arr+n);

   for(int i =0; i<n ;i++){
    cout << arr[i] << " ";
   }

   cout << endl;

   */


   // Upper_bound and lower_bound returns the location in case of arrays.
   // And in case of vector it will return iterator.

   // Syntax:
   // lower_bound( starting address from where we want to start, 
   // address just after the ending position , Element for which we want the lower_bound);
   
   
   
   /*

   int elementLb;
   cout << "Enter the element of which you want to find the lower_bound : " << endl;
   cin >> elementLb;
   
   int *ptrlb = lower_bound(arr, arr+n,elementLb);

   if(ptrlb == (arr+n)){
    cout << "Not found !!!"<< endl; 
   }else{
      cout << "Lower bound of " << elementLb << " is : "<< (*ptrlb) << endl;
   }

   
   int elementUb;
   cout << "Enter the element of which you want to find the Upper_bound : " << endl;
   cin >> elementUb;

   int *ptrub = upper_bound(arr, arr+n,elementUb);
   
   if(ptrub == (arr+n)){
    cout << "Not found !!!"<< endl; 
   }else{
      cout << "Lower bound of " << elementUb << " is : "<< (*ptrub) << endl;
   }

   */



   /*

  Sample Input :

  Enter the size of the array :
  6
  4 5 5 7 8 25
  4 5 5 7 8 25 
  Enter the element of which you want to find the lower_bound :
  26

  Enter the element of which you want to find the Upper_bound :
  5

   Sample Output :
   
   Not found !!!
   Lower bound of 5 is : 7

   */



   // -------------- Now changing the range ---------------------------
   
   /*

   int elementUb;
   cout << "Enter the element of which you want to find the Upper_bound : " << endl;
   cin >> elementUb;

   int *ptrub = upper_bound(arr + 4, arr+n,elementUb);
   
   if(ptrub == (arr+n)){
    cout << "Not found !!!"<< endl; 
   }else{
      cout << "Lower bound of " << elementUb << " is : "<< (*ptrub) << endl;
   }
   
   // Let the sorted array be : 4 5 5 7 8 25
   // So, here if i enter element = 5 then output will be 8.
   // As, our range of finding the upper bound becomes 8 to 25

   */


  // ************* In case of vector of integer *******************
  
  /*

  vector<int> v = {4,5,5,25,7,8};

  // First sort the vector.

  sort(v.begin(),v.end());

  // Now find upper bound and lower bound
  // Note : In case of vector we will get an iterator not a address.
   
   int elementUb;
   cout << "Enter the element of which you want to find the Upper_bound : " << endl;
   cin >> elementUb;

   auto iter = upper_bound(v.begin(),v.end(),elementUb);
   
   if(iter == v.end()){
    cout << "Not found !!!"<< endl; 
   }else{
      cout << "Lower bound of " << elementUb << " is : "<< (*iter) << endl;
   }

   */

  // --------------- In case of pairs and sets ----------------------------------

  /*

  set<int> s = {4,5,5,25,7,8};
  
  // Now, sort the set
  // Since sets are already sorted so no need to do sorting.

  int elementLb;
  cout << "Enter the element of which you want to find the Lower_bound : " << endl;
  cin >> elementLb;


  // Donot write this below iter code :
  // As it's time complexity is O(n).
  // So, it may be possible that you will get TLE
  // auto iter = upper_bound(s.begin(),s.end(),elementUb);

  // In case of sets and maps use the below approach to get the iterator.

  auto iter = s.lower_bound(elementLb); // In this case of Time complexity is O(log(n))

  */

 // Note in case of map we can apply lower and upper bound on key only.

 // And in case of pairs if we want to find the lower_bound
 // and that pair is not present then, it will return the pair having higher numbers than
 // the previous pair.  
   
  cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

    return 0;
}
