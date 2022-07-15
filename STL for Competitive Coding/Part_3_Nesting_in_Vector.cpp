#include <bits/stdc++.h>
using namespace std;

// printing pairs
void printVector(vector< pair<int,int> > v){

    cout << "Current size of the vector is " << v.size() << endl;
    
    //  since v[i] is a pair so to get it's first value we will do v[i].first and v[i].second

    for(int i=0 ; i < v.size() ; i++){ 

        cout << v[i].first << " " << v[i].second <<endl;
       
     }
}

// Printing nested  vectors
void printVector(vector<int> v){

    cout << "Current size of the vector is " << v.size() << endl;
    
    //  since v[i] is a pair so to get it's first value we will do v[i].first and v[i].second

    for(int i=0 ; i < v.size() ; i++){ 

        cout << v[i] << " ";
       
     }

     cout << endl;
}




int main(){

    cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;

     /*

    // -------- Vector of pair --------------
    // vector< pair<int,int> > v; // Each element of the vector is a pair now
    // v = {{1,2},{3,4},{4,5},{6,7},{8,9}};

    // printVector(v);

    // Taking input in the nested vector

    vector < pair<int,int> > vec;
    printVector(vec); // initially vector is empty

    int n;
    cin >> n;

    for(int i=0 ; i<n ;i++){
        int x,y;
        cin >> x >> y;
        
        // Method-1
         vec.push_back({x,y});

        // Method-2
        // vec.push_back(make_pair(x,y));
    }

    printVector(vec);

    swap(vec[0], vec[2]); // whole pairs will be swapped
    printVector(vec);

    */

    // ------------ Array of vector -----------------
    
    /*

    int N;
    cout << "Enter the number of vectors you want to form : "<<endl;
    cin >> N;
    vector <int> v[N]; // n vectors of size 0

    // i.e v[0] is a vector ,  v[1] is also a vector and so,on

    for(int i=0; i<N ;i++){
        int n; // size of child vector
        cout << "Enter the size of child vector : "<<endl;
        cin >> n;

        for(int j=0; j<n ;j++){
            int x;
            cout << "Enter the element at j = " << j << " : "<<endl;
            cin >> x;
            v[i].push_back(x); // v[i] is itself a vector
        }
    }

    for(int i=0 ; i<N ;i++){
        printVector(v[i]);
    }
    
    // So, array of vectors is behaving like a 2-D array where rows are fixed but
    // columns are not fixed.

    cout << v[0][0] << " " << v[0][1] << " " << v[0][2] <<endl; // printing vector-1

    */

   // Since in array of vectors N (i.e rows) is fixed so to make it dynamic we will
   // form vectors of vectors



   // -------------------- Vectors of vectors --------------------



   // To form rows and columns both dynamic we use vector of vector

   vector <vector<int> > father_vector; // each element is of type vector i.e v[0] is a vector , v[1] is a vector and so on.

   int N;
   cout << "Enter the number of rows : "<<endl;
   cin >> N;

   /* Method-1 for vectors of vector

   for(int i=0 ; i<N ;i++){
      int n;
      cout << "Enter the size of the nested vector : "<<endl;
      cin >> n;
      vector <int> child_vector;

      for(int j=0 ; j <n ; j++){
        int x;
        cout << "Enter the element at j = "<< j <<" : "<<endl;
        cin >> x;

        child_vector.push_back(x); // since hamne father_vector abhi khaali hain toh father_vector[i] exists hee nhi karega
      }
      
      father_vector.push_back(child_vector);
   }

   father_vector[0].push_back(10); // father_vector[0] ek vector hain jisme hamne 10 insert kiyaa hain
   
   father_vector.push_back(vector<int> ()); // inserting a empty vector in the father_vector


   for(int i=0 ; i < father_vector.size() ; i++){
        
        printVector(father_vector.at(i));

   }

   cout << father_vector[0][1]; // v[0] ek vector hain jisme se hamne 2nd element extract kiya hain

   */



  // Method-2

  /*

  for(int i=0 ; i<N ;i++){
      int n;
      cout << "Enter the size of the nested vector : "<<endl;
      cin >> n;

      father_vector.push_back(vector<int> ()); // Inserting a empty vector , now we can apply father_vector[i] approach

      for(int j=0 ; j <n ; j++){
        int x;
        cout << "Enter the element at j = "<< j <<" : "<<endl;
        cin >> x;

        father_vector[i].push_back(x);
      }
      
   }

   for(int i=0 ; i < father_vector.size() ; i++){
        
        printVector(father_vector.at(i));

   }

   */


  /*

   vector <vector < vector <int> > > grandfather_vector;

   so, grandfather_vector[0][0][1];
                  
                  ^
                  |
                  ------------- Now, grandfather_vector[0][0] is a vector itself and we are trying to extract its 2nd element.


  */


    cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;

    return 0;
}
