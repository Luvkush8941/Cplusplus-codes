#include<bits/stdc++.h>
using namespace std;

/*

We know map contains keys and values pairs.
So, if we remove values from the maps then the remaining container is known to be set.

Types of sets:-

1. Sets (normal set) : Also uses Red-black tree so time complexity becomes O(log(n));
2. Unordered set : Uses hash table so time complexity becomes O(1);
3. Multiset

*/

void print(set<string> &s){
     
     // Method-1
     /*
     for(string &keys : s){

        cout << keys << " ";
     }
     */

    // Method-2

    for(auto it = s.begin(); it != s.end() ; it++){

        cout << (*it) << " ";
    }

     cout << endl;

}


int main(){

     cout <<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    
    // set<string> s; // normal set stores keys in the sorted order and keys should be unique.

    // Insertion in set has a time complexity of O(log(n)).
    /*
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");

    */

    // print(s);



    // In maps we use map_name[key] and map_name.find() to access the values
    // But here in the case of sets we can only use map_name.find() operation.

    /*
    auto iter = s.find("abc");  // it returns the iterator of that element.

    if(iter != s.end()){
        // cout << (*iter) << endl;
    }else{
        cout << "Value does not exists." <<endl;
    }
    */



    // Set stores unique keys 
    
    /*
    s.insert("abc");
    print(s);

    */



    /*
    auto it = s.find("abc");  // it returns the iterator of that element.

    if(it != s.end()){
        s.erase(it); // s.erase can take either iterator or it can also take value directly.
        s.erase("bcd");
    }else{
        cout << "Value does not exists." <<endl;
    }

    print(s);
    */


   /*

   Question :

 Given N strings, print unique strings in 
 lexicographical order.

 N <= 10^5
 |S| <= 100000

 Example : 

Input

 8
abc
def
abc
ghj
jkl
ghj
ghj
abc

Output :
abc def ghj jkl 

*/  
    
    /*
     set<string> s_question;

     int n;
     cout << "Enter the number of strings you want to insert in the set : " << endl;
     cin >> n;

     for(int i=0; i<n ;i++){
        string s;
        cin >> s;

        s_question.insert(s);
     }

     print(s_question); // since set stores string in the lexicographic order i.e we used set 

    */

   // Unordered set is also same as unordered map the only thing which makes difference 
   // Between them is that unordered set has only keys and no values.

   /*
   Question :

   Given N strings and Q queries.
   In each query you are given a string 
   print yes if string is present 
   else print no .

   N <= 10^6
   |S| <= 100
   Q <= 10^6

   Input :
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
2
abc
ghj



   */


  /*

  unordered_set<string> us;

  int n;
  cout << "Enter the number of strings : " << endl;
  cin >> n;

   for(int i=0; i<n ;i++){
        string s;
        cin >> s;

        us.insert(s);
     }

    int q;
    cout << "Enter the number of queries : " <<endl;
    cin >> q;

    while(q--){

        string str;
        cin >> str;

        auto it = us.find(str); // it returns iterator
        if(it != us.end()){
           
           cout << "YES" << endl;

         }else{
        cout << "NO" <<endl;
    }
    }

    */

   // Unordered set do not takes complex containers as their hash functions are not
   // defined inbuilt in C++

   // -------------- Multi-set --------------------------------

   multiset<string> ms; // Multi-set stores duplicate data

   ms.insert("abc");
   ms.insert("bcd");
   ms.insert("abc");
   ms.insert("efg");
   ms.insert("zsdf");
   ms.insert("abc");

   // Printing multi-set
  
  /*
   for(auto &values : ms){
      cout << values << endl;
   }


   */

  /*

   auto it = ms.find("abc"); // In case of multiset if their is a duplicate value
   // then .find method returns the iterator of the first value.
        if(it != ms.end()){
           
           ms.erase(it); // first abc will be deleted

         }else{
        cout << "Value does not exists. !!!" <<endl;
    }

    for(auto &values : ms){
      cout << values << endl;
   }

   */

  // ---------- Important ----------------

  // If we put value directly into the .erase function then 
  // It will delete all that values from the set
  // i.e ms.erase("abc"); ---> deletes all the "abc" from the set
  // Whereas ms.erase(it); --> it will delete the first occurred "abc".

  ms.erase("abc"); // If we want to delete all the abc from the multi-set then use this approach else use iterator approach

  for(auto &values : ms){
      cout << values << endl;
   }

    cout <<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

    return 0;
}
