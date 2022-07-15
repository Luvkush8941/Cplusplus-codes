#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> vec){

    cout << "Current size of the vector is " << vec.size() << endl;

    for(int i=0 ; i < vec.size() ; i++){  // Time complexity of .size() function is O(1)

        cout << "Value at "<< i <<" is " << vec.at(i) <<endl;
    }
}

void printVector(vector<string> vec){

    cout << "Current size of the vector is " << vec.size() << endl;

    for(int i=0 ; i < vec.size() ; i++){  // Time complexity of .size() function is O(1)

        cout << "Value at "<< i <<" is " << vec.at(i) <<endl;
    }
}

int main(){

    // Vectors are just like arrays having dynamic size
    /*
        Syntax :
         vector <of_which_data_type_you_want_create_the_vector> vector_name; 

                    |
                    ------>  Currently size of this vector is 0 but if we form an array
                    then memory block will be created while declaring the array as we
                    have to give the size during the declaring of the array.

    */
   
   /*

   vector <int> v;  // 0 length vector

   int n;
   cout << "Enter the size of the vector : \n";
   cin >> n;
   
   for(int i=0 ; i<n ;i++){
      int x;
      cin >> x;
      printVector(v); // initially size of the vector is 0
      v.push_back(x); // inserting value in the vector using push_back function

      // Time complexity of push_back is O(1)
   }

   printVector(v); 

  */
   
   /*
  
  // Giving size at the time of declaring vector
  vector <int> v(5); // it does not mean that we cannot increase or decrease the size of the vector
  printVector(v);

  v.push_back(678); // will we pushed at the position 6
  printVector(v);

  // and we want to fill the places at the time declaring the size of the vector.

  vector <int> v1(10,4);
  printVector(v1);

  // ------------- pop_back() function removes last element from the vector------------------

  v1.pop_back();  // -----> Having time complexity of O(1)
  printVector(v1);

  // -----------------Copy whole element of one vector into another vector--------------------
  // Note :
  // Changes in v2 doesn't changes v1

  vector <int> v2 = v1;  // Having Time complexity is O(n)
  printVector(v2);

  v2[3] = 456;
  printVector(v1);
  printVector(v2);

  // Generally try to pass the reference of one vector into another as 
  // it donot makes the whole copy of the vector1 so, it will not take that much time.

  vector <int> &v3 = v2;  // Having Time complexity is O(n)
  v3[0] = 956;
  v3[3] = 456;
  printVector(v2);
  printVector(v3);

  */

 // -------------- Vector of strings -----------------------

 vector <string> v;

 int n;
 cout << "Enter the size of the vector : "<<endl;
 cin >> n;

 for(int i=0 ; i<n ; i++){
    string s;
    cin >> s;

    v.push_back(s);
 }

 printVector(v);
  
    return 0;
}
