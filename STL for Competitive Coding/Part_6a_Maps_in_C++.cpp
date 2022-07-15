// Maps types :-
// 1. Normal maps
// 2. Unordered maps
// 3. Multimaps

// map stores the key-value pairs and it uses Red-Black Trees (Self balancing tree) internally

   // In the normal maps keys stored in the sorted order like:
   // {1:"abc" ,2:"cbd",9:"nmj"};

   // Whereas in unordered maps keys are not stored in the sorted order
#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout << m.size() << endl;
    for(auto &value : m){
        cout << value.first << " : " << value.second << endl;
  }
}



int main(){

  cout <<endl << "***************************************************************" <<endl;
   
   map<int,string> m; // Here key is of type int and value is of type string

   // Method-1 to insert elements in the maps
   // O(log(n)) is the time complexity for the below insertion method where n is the
   // current size of the map.
   
   m[0]; // By default it's empty string is it's value. And in case of int values 0 is the default value.
   m[1] = "abc";
   m[2] = "bcd";
   m[3] = "efgh";
   
   // Method-2 ----> map_name.insert("and it takes pair")
   //  

   m.insert({4, "afg"});
   m.insert(make_pair(5, "dfgh"));

   // Method-1 for Printing map using iterator

   /*

   map<int,string> :: iterator iter;
   for(iter = m.begin() ; iter != m.end() ; iter++){

       cout << iter->first << " " << iter->second << endl; // Since iter is at the pair so to access the elements of the pairs we use .first and .second
   }

   */

  // Method-2 for printing map using  auto keyword and range based loop
  
  /*

  for(auto &value : m){

    cout << value.first << " : " << value.second << endl;
  }

  */

  // You can see that keys are prined in the sorted order
  // If keys are strings then they are printed in the Lexicographical order

  // In the map keys are Unique.
  // If we are giving a different value to the existing key then 
  // the existing value will be over-written.

  /*

  m[5] = "University";

  print(m); // printing map uisng user-defined function

  */


  // Summary for normal-map : -

  // 1. keys in maps are unique 

  // 2. keys in maps are stored in the sorted order and in case of string, keys are stored 
  //    lexicographical order.

  // 3. And inserting any value in the map takes O(log(n)) time. And accessing any value 
  //    from the map also takes O(log(n)).


  // --------------- map_name.find() method -------------------------------

  // It returns iterator. And it's time complexity is also O(log(n)).

  // If .find method unable to find the value from the map then it returns
  // an iterator of the end i.e m.end();


/*

  auto iter = m.find(3); // it returns the iterator of 3 and if 
// their is no 3 in the map then it returns m.end()

if(iter == m.end()){
    cout << "This value is not in the map" <<endl;
}else{
    cout << (*iter).first << " " << (*iter).second << endl;
}

*/

//-------------------- map_name.erase() method -----------------------

// It's time complexity is also O(log(n)).
// It takes two types of input
// 1. Directly take key as input
// 2. Iterator input

// taking key as input

/*
m.erase(3); 

auto iter = m.find(3);
if(iter == m.end()){
    cout << "This value is not in the map" <<endl;
}else{
    cout << (*iter).first << " " << (*iter).second << endl;
}

*/

/*

auto iter = m.find(5);

m.erase(iter);

print(m);

*/

// Note, we cannot give a iterator in the earse function which doesn't exists.
// Otherwise it will through an error.

/*

auto it = m.find(7); // as 7 does not exists in the map so it returns m.end()

if(it == m.end()){
    cout << "Unable to erase 7 from the map as 7 does not exists" <<endl;
}else{

    m.erase(it);
    print(m);
}

*/


// --------------- map_name.clear() method ------------------------

/*

m.clear();
print(m);

*/

// ----------------- Important -------------------------

// Time Complexity of the insertion method is not always O(log(n)).

// It also depends on the key.
// For ex:

/*

map<string,string> m_string;

m_string["abcd"] = "abcd";  // In this case as the key length increases time complexity also varies.

*/

// Time complexity in case of string key :-

// string.size() * log(n)


// Question :-

/*

 Given N strings, print unique strings in 
 lexicographical order with their frequency.

 N <= 10^5
 |S| <= 100

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

Output

abc : 3
def : 1
ghj : 3
jkl : 1

 */

map<string,int> m_question; // Since, we requires unique and sorted string i.e we use map 

int n;
cout << "Enter the number of strings : "<<endl;
cin >> n;

for(int i = 0 ; i<n ;i++){
    
    string s;
    cin >> s;

    // Since in map only unique keys are stored 
    // So, we will assign values to all the strings(keys) as 1.
    // And if any string repeats then we will update the value using count++

 //                      -------- initially 0 
 //                      |
 //                      V
 //   m_question[s] = m_question[s] + 1; 
 //                 Or
     m_question[s]++;

    m_question.insert(make_pair(s,m_question[s]));
}

for(auto &pr : m_question){
   cout << pr.first << " : " << pr.second << endl;
}


   cout <<endl << "***************************************************************" <<endl;
   return 0;

}
