#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;

    /* Syntax for pairs :
     pair < data_type1 or container1 , data_type2 or container2> variable_name;

     for example write the pair of int and string :-
     pair <int , string > p;

     */

    /*

    // making a pair variable i.e p
    pair <int ,string > p;
    
    // Method-1
    // p = make_pair(2, "abc");

    // Method-2
    p = {2,"abcde"};

    cout << p.first << " " << p.second <<endl ;

    // p.first gives pair first value and p.second gives pairs second value.

    // copy one pair into another pair 

    pair <int,string> p1 = p;
    cout << p1.first << " " << p1.second <<endl ;

    // here copy of p will occur not by reference so changes in p1 donot changes p

    p1.first = 3;

    cout << p.first << " " << p.second <<endl ;

    // copy pairs of p into p2 by reference so changes in p2 changes p also.

    pair <int,string> &p2 = p;
    p2.first = 5;
    cout << p.first << " " << p.second <<endl ;

    */


    /*

    // We use pairs to maintain relation b/w two things

    int a[] = {1,2,3};
    int b[] = {2,3,4};

    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    for(int i=0 ; i <3 ;i++){

        cout << p_array[i].first << " " << p_array[i].second <<endl;
    }

    swap(p_array[0], p_array[2]); // now the pairs will be swapped 

    for(int i=0 ; i <3 ;i++){

        cout << p_array[i].first << " " << p_array[i].second <<endl;
    }

    */

   pair<string,double> p;

   cout << "Enter the pairs first value : "<<endl;
   getline(cin,p.first);
   
   cout << "Enter the pairs second value : "<<endl;
   cin >> p.second;

   cout << "Pairs first value = " << p.first << " and second value = " << p.second <<endl;

   cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
   
    return 0;
}
