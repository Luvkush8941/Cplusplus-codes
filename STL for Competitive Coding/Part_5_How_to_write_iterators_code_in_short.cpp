#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

    // *********************** Range based loops ***************************

    // vector<int> v = {2,3,4,5,6,7};

    /*

    Syntax : for(data_type_of_elements value : container)

    so, in this elements/values from the container v will move to the variable value
    one-by-one and then the operation will perform. Like:
    Here first 2 from v will go to value and then cout . Similarly after this 3 will
    move from v and then go to value and then cout.

    And this process will be going untill all the values from the v will go to value.

    */

    
    /*
    for(int value : v){

        cout << value << " ";
    }

    cout << endl;

    //  In the above loop value makes a copy of each elements which takes space.
    //  i.e 2 will be copied to value and then cout. 

    //  So, to erect this we will take help of the reference.
    //  i.e value will use the same memory of the container element's.

    // Example:

    for(int value : v){

        value++;
    }

    for(int value : v){

        cout << value << " "; // Here value will not increase it means values are copied not the actual values are used.
    }

    cout << endl;

    */
  
  // Method -2 using reference

  /*
   for(int &value : v){

        cout << value << " ";
    }

    cout << endl;

    

    for(int &value : v){

        value++;
    }

    for(int &value : v){

        cout << value << " "; // Here we can see that values are changed it means values actual values are used.
    }

    cout << endl;

    */

   //------------ printing vector of pair using range based loop -----------------------

   /*

   vector<pair< int, int>> vec_p = {{1,2},{3,4},{7,8},{45,78}};

   for(pair<int,int> &pr : vec_p){ // Here value is taking pairs from the vector v_p and
                                    // to get the pair values we use pr.first and pr.second
    cout << pr.first << " " << pr.second << endl;
   }

   cout << endl;


   */

  // ********************** auto keyword ****************************

  // It dynamically assumes the data_type 

  /*
     // Ex: 
     auto a = 1; // Here auto dynamically gets the data_type of a which is int
     cout << a;

  */

 // It is helpful in case of iterators 
 // While writing iterators we have to write the data_type of the container
 // So, in case of nested container we have to write big code for it like:
 // vector<pair<int,int>> :: iterator iter;
 // In place of vector<pair<int,int>> :: iterator this we can use auto keyword.

/*

 vector<int> v1 = {2,3,4,5,6,7};

 // vector<int> :: iterator it; ----> No need to write this

 for(auto it = v1.begin(); it != v1.end(); it++){

    cout << (*it) << " ";
 }

 cout << endl;

 */

 vector<pair< int, int>> vec_p2 = {{1,2},{3,4},{7,8},{45,78}};

   for(auto &pr : vec_p2){ // Here value is taking pairs from the vector v_p and
                                    // to get the pair values we use pr.first and pr.second
    cout << pr.first << " " << pr.second << endl;
   }

    cout << endl;

    cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

    return 0;
}
