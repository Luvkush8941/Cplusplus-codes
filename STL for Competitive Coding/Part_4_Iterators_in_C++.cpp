// In maps and sets we cannot do indexing so to acces their elements 
// we have to make iterators and with the help of iterators we can easily access the 
// elements.

// Iterators are pointers like structure in C++

/*

Think it like a vector having continuous memory
                       -------------------------- v (vector)
                       |
                       V  
           -------------------------
           | 2 | 3 | 4 | 5 | 6 | 7 |
           -------------------------
             ^                        ^
             |                        |
          iter = v.begin()            v.end()

    ---> iter.begin() is a iterator that points to the first element of the conatiner

    ---> Whereas, iter.end() is a iterator that points to the next to last element or thing of the conatiner.
         i.e 7 is the last element of the vector so iter.end() points to the next element just after 7.

    and ,

       v.begin() points to the v[0] th element.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;

    /*

    vector <int> v = {2,3,5,6,7};

    // Declaring iterator
     vector<int> :: iterator iter;

     for(iter = v.begin() ; iter != v.end() ; iter++){

        cout << (*iter) << " ";
     }


     */

     // So, iter is a moving pointer and we are trying to extract value at that address
     // using the dereference operator --> *iter.


     /*

      Differenec b/w iter++ and iter+1

       0  1  2  3  4  5  6  7
      -------------------------
      |  |  |  |  |  |  |  |  |
      -------------------------
       ^
       |
      v.begin()

      iter++ ----> moves to next iterator
            
             whereas 

      iter + 1 ----> moves to the next location 

---> In case of vector both iter++ and iter+1 is same as in vector memory is continuous.

---> But if memory is not continuous like in set and map we donot have the continuous memory
     so, in that case we are required to move to the next iterators not to the next location
     i.e we will use iter++ to move to the next iterator.



     */

    // -----------iterator for Vector of pairs ----------------

    vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};

    vector<pair<int,int>> :: iterator it; // iterator for the vector of pair

// getting pair elements separately . Since (*it) is a pair so we can access each element
// of the pair using *it.first and *it.second 

for(it = v_p.begin() ; it != v_p.end() ; it++){

        // Here (*it) is a pair not a vector
        cout << (*it).first << " " << (*it).second << endl; 
    }

// When our iterator is pointing to the pair then we can also use the below approach
// Replacing (*it).first by it->first similarly (*it).second by it->second.

// (*it).first <=> it->first
// (*it).second <=> it->second

for(it = v_p.begin() ; it != v_p.end() ; it++){

        // Here (*it) is a pair not a vector
        cout << it->first << " " << it->second << endl; 
    }


     cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;


    return 0;
}
