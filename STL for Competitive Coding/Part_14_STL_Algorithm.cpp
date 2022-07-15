#include<bits/stdc++.h>
using namespace std;

// In case of arrays and vectors these below functions have a time complexity of  O(n). 

int main(){

    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
   
   /*

    int n;
    cout << "Enter the size of vector : " << endl;
    cin >> n;

    vector<int> v; // Providing the size in the () curly braces not a array  of vectors.

    for(int i=0; i<n;i++){
        int element;
        cin >> element;

        v.push_back(element);
    }

    // All the sorting algorithms takes the starting address and address after the end
    
    // ********* Max_element and Min_element algorithm in C++ *****************

    auto itmin = min_element(v.begin(),v.end()); // It returns iterator
    cout << "Minimum value in the vector is : " << (*itmin) << endl;

    auto itmax = max_element(v.begin(),v.end()); // It returns iterator
    cout << "Maximum value in the vector is : " << (*itmax) << endl;

    // Skipping some element from the range.

    auto itminran = min_element(v.begin() + 3,v.end()); // It returns iterator
    cout << "Minimum value in the vector in b/w the given range is : " << (*itminran) << endl;


    // ******** Accumulate provides us the sum of the array,vector,.... ***********

    // Note : we have to provide the initial sum as a third argument in the
    // accumulate function.
    // So, sum = vector_sum + initial_sum_provided_by_the_user.


    int sum = accumulate(v.begin(),v.end(),0);
    cout << "Sum of all the elements of the vector is : " << sum << endl;

    // ----------------- Count function ------------------------

    int CountOfElement;
    cout << "Enter the element of which you want to find the count : " << endl;
    cin >> CountOfElement;

    int ct = count(v.begin(),v.end(),CountOfElement);
    cout << "Count of " << CountOfElement << " is : " << ct << endl;

    // ------------------ Find function -------------------------

    int ElementToFind;
    cout <<"Enter the element to find in the vector : " << endl;
    cin >> ElementToFind;

    auto fd = find(v.begin(),v.end(),ElementToFind);
    
    if(fd != v.end()){
        cout << ElementToFind << " is successfully found." << endl;
    }else{
        cout << "Element not found !!!" << endl;
    }


    // ------------------ Reverse function ------------------------

    reverse(v.begin(),v.end());

    cout<< "Reversed Vector : " << endl;

    for(auto &value : v){
        cout << value << " ";
    }

    cout << endl;

    

    */

   string s;
    cout << "Enter the string  : " << endl;

    //  Removing the problem with getline() function in C++
    // Using ws

    /*
      The getline() function in C++ is used to read a string or a line from the input 
      stream. The getline() function does not ignore leading white space characters.
      But sometimes getline() function is unable to read the string so, for this we 
      can use cin >> ws in the getline argument in place of cin.


    */

    /*

     Usage of std :: ws will extract all the whitespace character.

    */

    getline(cin >> ws,s);

    reverse(s.begin(),s.end());

    cout << "Reversed string : " << s << endl;

    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";


    return 0;
}
