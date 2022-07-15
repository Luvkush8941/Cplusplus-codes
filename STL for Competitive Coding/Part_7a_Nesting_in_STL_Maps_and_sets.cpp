#include<bits/stdc++.h>
using namespace std;

int main(){

    /*

    // Pair as a key and keys in maps are stored in the sorted 
    // manner. In case of unordered map we cannot take complex container for keys.

    map< pair< string, string>,vector<int> > m;  // Taking vector for the marks of the students

    int N;
    cout << "Enter the size of the map : " << endl;
    cin >> N;

    for(int i=0; i<N ;i++){
        string firstName,lastName;

        int n; // size of the vector
        
        cin >> firstName >> lastName >> n;
        
        for(int j=0 ; j<n ;j++){
            int x;
            cin >> x;
            m[{firstName,lastName}].push_back(x); // m[key] = value and value is a vector
            // i.e pushing x in a vector
        }
    }

    for(auto &pr : m){
          auto &key = pr.first;    // pr.first contains fullname
          auto &value = pr.second; // value is a vector itself

          cout << key.first << " " << key.second << endl;
          cout << "Size of vector : " << value.size() << endl;

          for(auto &elements : value){
            cout << elements << " ";
          }
        cout << endl;
    }

    // In the output you can see that pairs are arranged in the increasing order.

    */

    /*
       Question :

       Alien is a multi-talented person, and prepares results for his alien college
       in his free time. He gets a list of students with their marks. 
       The maximum marks which can be obtained in the exam is 100.

       The alien is supposed to arrange the list in such a manner that the list
       is sorted in decreasing order of marks. And if two students have the same marks
       ,they should be arranged in lexicographical manner.

       Help alien prepare the same!

       Sample Input :                                       Sample Output :
      
      3                                                      Bob 99
      Eve 78                                                 Alice 78
      Bob 99                                                 Eve 78
      Alice 78

    */
    
    // Since we want marks to be sorted i.e we take them as key.
    map<int,multiset<string>> marks_map; // since their may be a chance that we have two 
    // students having same name so, set will not take two same name i.e we will
    // take multiset.

    int n;
    cin >> n;

    for(int i=0; i<n ;i++){
        int marks;
        string name;
        cin >> name >> marks;

        marks_map[marks].insert(name);
    }

    // Since we want marks in the decreasing order i.e iterate the map in reverse.

    auto current_it = --marks_map.end(); // it will give the iterator of the last element
    while(true){

        auto &students = (*current_it).second;
        int marks = (*current_it).first;
        
        for(auto student : students){
            cout << student << " " << marks << endl;
        }

        if(current_it == marks_map.begin())break;
    }


    return 0;
}
