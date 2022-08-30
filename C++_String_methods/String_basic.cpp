/*

--------------------------------------------------------------------------------------
             Character Arrays                                Strings
--------------------------------------------------------------------------------------
1.      Needed to know size  beforehand           No need to know size beforehand

2.      Larger size required for operations/      Performing operations like concatenation
        concatenation or append.                   and append is easier.

3.      No terminating extra character            Terminated with a special character '\0'
---------------------------------------------------------------------------------------


*/

#include<iostream>
#include<cstdio>
#include<string> // ----> for c++
#include<cstring> // ---> for C functions
#include<algorithm>
using namespace std;


int main(){

// ------------- Different methods to declare the string --------------

// string str1 = "hello hhii";
// cout<<str1<<endl;

// string str2(5,'L');
// cout<<str2<<endl;

// string str ;                     |
// cout<<"Enter the string : \n";   |
// cin>>str;                        |----> Not able to read the words after spaces 
// cout<<str<<endl;                 |


// --------- getline method to read the string from the user --------
// string str4;
// cout<<"Enter the string : "<<endl;
// getline(cin , str4);  // It will also read the words after the spaces.
// cout<<"str4 --> "<<str4<<endl;


// ----------------- Methods in the string ------------------------

// string s1,s2;

// s1 = "fam";
// s2 = "ily";

//--- Concatenating the string -----

// M-1
// s1.append(s2);
// cout<<"String after concatenation : "<<s1<<endl;

// M-2

// cout<<"String after concatenation : "<<(s1 + s2)<<endl;


// ---- Accessing a particular character of a string


// M-1
// cout<<"Accessing the second character of the string : "<<s1[1]<<endl;

// M-2
// cout<<"Accessing the second character of the string : "<<s1.at(1)<<endl;


//  -------- clear function ----------

// string abc = "asdfghjklzcvbnm,..  dfghjkl;";
// cout<<abc<<endl;

// abc.clear();

// cout<<"String after applying the clear function : "<<abc<<endl;


// -------- Comparing the strings ----------

// string s1,s2;

// s1 = "abc";
// s2 = "abc";

// if(s1.compare(s2) == 0){

//     cout<<"Both the strings are same"<<endl;
// }else{
//     cout<<"Strings are different "<<endl;
// }


// ---------- empty function -------------

/*

string s1;
cout<<"Enter the string : "<<endl;
getline(cin , s1);
cout<<s1<<endl;

s1.clear();

if(s1.empty()){

    cout<<"String is empty"<<endl;
}else{
    cout<<"String is not empty"<<endl;
}

*/

// -------------- erase function -------------

/*

string s1;
cout<<"Enter the string : "<<endl;
getline(cin , s1);
cout<<s1<<endl;

// erasing the characters from 3rd index to  index

// Syntax : string.erase(starting index , no. of characters to erase)

s1.erase(3,3);
cout<<"String after erasing the characters : "<<s1<<endl;

s1.erase(1,4);
cout<<"String after erasing the characters : "<<s1<<endl;

*/

// ------------ find function in C++ ------------------

/*
string s1;
cout<<"Enter the string : "<<endl;
getline(cin , s1);
cout<<s1<<endl;

int required_index = s1.find("Cambridge");

cout<<"Returns the index of the sub-string : "<<required_index<<endl; 

required_index = s1.find("College");
cout<<"Returns the index of the sub-string : "<<required_index<<endl; 

required_index = s1.find('C');
cout<<"Returns the index of the sub-string : "<<required_index<<endl;

*/

// ------------- insert function -------------------

/*

string s1;
cout<<"Enter the string : "<<endl;
getline(cin , s1);
cout<<s1<<endl;

s1.insert(9, "Cambridge");

cout<<"String after inserting a sub-string : "<<s1<<endl;

*/

// ------------ getting the length of the string --------------

/*

string s1;
cout<<"Enter the string : "<<endl;
getline(cin , s1);
cout<<s1<<endl;

int len = s1.size();
cout<<"Length of the string is : "<<len<<endl;

len = s1.length();
cout<<"Length of the string is : "<<len<<endl;

*/


// ----------getting the substring -------------

/*

string s1 = "helooo bro hii";

// syntax : string.substr(starting index , no. of characters you want);
string s2 = s1.substr(7,3);
cout<<"Sub-string of the string is : "<<s2<<endl;

*/

// -------------- String to integer -----------------

/*

string s1 = "786";

int number = stoi(s1);

cout<<"number = "<<number<<endl;
cout<<"(number + 14) = "<<(number + 14)<<endl;

*/

// -------------- integer to string -----------


/*

int number = 2345;

string s1 = to_string(number);

cout<<"s1 = "<<s1<<endl;
cout<<"s1 + hello ---> "<<(s1 + " hello")<<endl;

*/

// ------------ sorting the string -------------

/*

string s1 = "zxyvmnopdcba";
cout<<"string before sorting : "<<s1<<endl;

// use algorithm library function to sort the string

sort(s1.begin() , s1.end());

cout<<"Sorted string is : "<<s1<<endl;

*/

/*
 // reversing the string using 
string str;
cout<<"Enter the string : "<<endl;
getline(cin, str);

string str_reverse;

for (int i = (str.size() - 1); i >= 0; i--)
{
    // M-1
    // Not a good practise
    // str_reverse = str_reverse + str[i]; // adding characters in the string

    // M-2

    str_reverse.push_back(str[i]);
}

cout<<"Reverse string : "<<str_reverse<<endl;

*/

// Number greater than the maximum limit of a integer i.e 10^18.
// So, in this case we take the number in the form of a string and then perform the tasks

/*

string s;
cout<<"Enter the number : "<<endl;
cin>>s;

// let's say you have a number :-
// 123456789123456789123456789123456781234567891234567812345
// and you have to add 1 in it so for that first we have to extract the last digit

cout<<s[s.size() - 1]<<endl; // gives us the character not a integer

cout<<int(s[s.size() - 1])<<endl; // it gives us the ascii value of 5

int last_digit = s[s.size() - 1] - '0';
cout<<"last_digit = "<<last_digit<<endl;

*/


return 0;
}