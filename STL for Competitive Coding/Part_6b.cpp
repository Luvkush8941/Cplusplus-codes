

// ************* Avg time taken by the unordered_maps is O(1) only ****************

#include<bits/stdc++.h>
using namespace std;

// Basic Differences in ordered and unordered maps can be made on the basis of below points:
// 1. Inbuilt implementation : unordered_maps uses hash tables not trees 

// 2. Time complexity : O(1)

// 3. Valid Keys : In case of ordered maps we can put complex keys but this is not applicable
//                 case of unordered_maps.

void print(unordered_map<int,string> &m){
    cout << "Size of the unordered_map : "<< m.size() << endl;
    for(auto &value : m){
        cout << value.first << " : " << value.second << endl;
  }
}

int main(){
    
    cout <<endl << "***************************************************************" <<endl;

    unordered_map<int, string> um;

    // Method-1 to insert elements in the unordered_maps
   // O(1) is the time complexity for the below insertion method where n is the
   // current size of the unordered_map.
   
   um[0]; // By default it's empty string is it's value. And in case of int values 0 is the default value.
   um[1] = "abc";
   um[2] = "bcd";
   um[3] = "efgh";
   
   // Method-2 ----> unordered_map_name.insert("and it takes pair")
   //  

   um.insert({4, "afg"});
   um.insert(make_pair(5, "dfgh"));

   // print(um);


   /*
   
   All the operations of ordered maps are also valid and applicable in case of 
   unordered_maps. Like, in case of unordered maps we can use erase,find, clear ,...
   functions and these operations takes O(1) time only.

   Recommended : Generally use unordered_maps as their operations takes O(1) time only.
   Use ordered maps only when order of numbers and for strings lexicographic order matters
   ,otherwise use unordered maps. 


   */

   /*

   3. Valid Keys : In case of ordered maps we can put complex keys but this is not applicable
                case of unordered_maps.

       Example : -

   */

  // unordered_map<pair<int,int>, string> up;  ----> Shows error as their is no hash function to compare pairs in unordered maps 

   // map<pair<int,int>, string> up; ----> This does not show error


   /*

   Question :-

   Given N strings and Q queries.
   In each query you are given a string 
   print frequency of that string

   N <= 10^6
   |S| <= 100
   Q <= 10^6

Sample Input : 

8
abc
def
abc
ghj
jkl
ghj
ghj
abc
2  ---> Number of Queries
abc
ghj

Sample Output :

Frequency of abc is : 3
Frequency of ghj is : 3




   */

/*

unordered_map<string,int> um_question; // Since, we requires unique and sorted string i.e we use map 

int n;
cout << "Enter the number of strings : "<<endl;
cin >> n;

for(int i = 0 ; i<n ;i++){   
    string s;
    cin >> s;
    um_question[s]++; // or m[s] = m[s] + 1

    um_question.insert(make_pair(s,um_question[s]));
}

int q;
cin >> q;

while(q--){

    string str;
    cin >> str;
    cout << "Frequency of "<< str << " is : " << um_question[str] << endl;
}

*/

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Multi-Map @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// Internal implementation of multi-map is also uses Red-black Tree.
// In multimap we can input multiple values corresponding to a single key.
// i.e their is no unique key in case of multimap.
    
    /*

    multimap<int, string> mm;
    
    mm.insert(make_pair(1,"abc"));
    mm.insert(make_pair(2,"pqr"));
    mm.insert(make_pair(1,"stu"));
    mm.insert(make_pair(3,"vwq"));
    mm.insert(make_pair(2,"ghc"));

    for(auto &pr : mm){
        cout << pr.first << " : " << pr.second << endl;
    }

    */

   // But inplace of multimap we can use map by some modifications like:

   map < int , vector<string> > c;

   int N;
   cout << "Enter the size of map : " << endl;
   cin >> N;

   for(int i=0 ; i<N ;i++){
    
    int key;
    cout << "Enter the key : " << endl;
    cin >> key;

    vector <string> child; // 0 length vector
    int n;
    cout << "Enter the number of strings you want to insert corresponds to the key : " << endl;
    cin >> n;

    for(int j = 0 ; j<n ; j++){
        string s;
        cout << "Enter the string : " << endl;
        cin >> s;

        child.push_back(s);
    }

    c.insert(make_pair(key,child));

   }

   for(auto &pr : c){
    cout << "\n-----------------------\n";
     for(auto &value : pr.second){ // since second value of the pair is a vector i.e taking one by one value from the vector and printing them.
          
          cout << pr.first << " : " << value << endl;
     }

     cout << "\n-----------------------\n";

   }


    cout <<endl << "***************************************************************" <<endl;

    return 0;
}
