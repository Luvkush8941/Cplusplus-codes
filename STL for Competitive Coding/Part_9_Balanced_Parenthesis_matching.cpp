/*

(   (    (      )    )    )

^   ^    ^      ^    ^    ^
|   |    |      |    |    |
|   |    --------    |    |
|   ------------------    |
---------------------------

You can see that in the above example every opening parenthesis has it's 
closing parenthesis also. i.e first bracket has it's closing bracket also 
similarly second and third brackets also has their closing one.
So, this is called parenthesis matching.


But, in the below example you can see that second parenthesis donot has it's closing one.

(   (    (      )         )

^   ^    ^      ^         ^
|   |    |      |         |
|   |    --------         |
|   ------------------    |
---------------------------

More examples of unbalanced  parenthesis.

1. (((  2. ((())  3. [(()]

*/

/*
We have to insert the opening parenthesis in the stack till we get the closing parenthesis.
And when we get the closing one then check it's opening parenthesis. If it is present
in the stack then pop it otherwise it is a sign of unbalanced parenthesis.

We will traverse the whole string i.e (())() and after traversing the whole string
stack should be empty. If the stack is empty at the end then the Balanced parenthesis
otherwise unbalanced parenthesis.

          BALANCED PARENTHESIS EXAMPLE

Ex:-     (     (    )     )    (    )
         ^     ^    ^     ^    ^    ^
         |     |    |     |    |    |
     Insert  Insert pop  pop Insert pop
      1st      2nd  2nd  1st   3rd   3rd
    at bottom

              |              |
              ----------------
              |              |
              ----------------
              |              |
              ----------------
              |              |
              ----------------
              |   ( -- X     |
              ----------------
              |   ( -- X     |
              ----------------
              |   ( -- X     |
              ----------------


              UNBALANCED PARENTHESIS EXAMPLE

Ex:-     (     {    }     )    (    )     (       (
         ^     ^    ^     ^    ^    ^     ^       ^ 
         |     |    |     |    |    |     |       |
     Insert  Insert pop  pop Insert pop  Insert Insert
      1st      2nd  2nd  1st   3rd   3rd   4th    5th
    at bottom

              |              |
              ----------------
              |              |
              ----------------
              |   (          |
              ----------------
              |   (          |
              ----------------
              |   ( -- X     |
              ----------------
              |   { -- X     |
              ----------------
              |   ( -- X     |
              ----------------


*/

/*

------------------------------ Hackerrank Problem ----------------------------------------

A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

* It contains no unmatched brackets.
* The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.

Given n strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, return YES. Otherwise, return NO.

Function Description :

Complete the function isBalanced in the editor below.

isBalanced has the following parameter(s):

* string s: a string of brackets

Returns
* string: either YES or NO

Input Format

The first line contains a single integer n, the number of strings.
Each of the next n lines contains a single string s, a sequence of brackets.

Constraints

* 1<=n<=10^3
* 1<=|s|<=10^3 , where  is the length of the sequence.
*All chracters in the sequences ∈ { {, }, (, ), [, ] }.

Output Format

For each string, return YES or NO.

Sample Input

STDIN           Function
-----           --------
3               n = 3
{[()]}          first s = '{[()]}'
{[(])}          second s = '{[(])}'
{{[[(())]]}}    third s ='{{[[(())]]}}'

Sample Output

YES
NO
YES

Explanation

1. The string {[()]} meets both criteria for being a balanced string.
2. The string {[(])} is not balanced because the brackets enclosed by the matched pair { and } are not balanced: [(]).
3. The string {{[[(())]]}} meets both criteria for being a balanced string.

*/


#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string s) {

      stack<char> st;  // stack of characters

      // We will solve this using unordered map as order doesn't matter here
      // i.e we will use unordered map as it takes O(1) time for it's operations to be done.
      
      // For opening brackets set it's value as -ve for integer 
      // And for closing brackets set it's value as +ve for integer
      // So, that their sum becomes 0 

      unordered_map<char,int> symbols = {{'[',-1},{'(',-2},{'{',-3}, {']',1},{')',2},{'}',3}};

      // We will check the value of bracket if it is -ve then it will be a opening bracket
      // else it will be closing bracket.

      // -------------- How we will use map values --------------------------
      /*
        
        If we get a +ve value then it will be a closing bracket.
        Then we will check the key at the top of the stack.
        If it's map value is -ve then it will be a opening bracket.
        Then we will find the sum of their map's values.
        If sum = 0. then pop that bracket from the stack as it is a balanced bracket.
        If sum !=0 then break the loop for traversing and simply return No.

      */

     for(char bracket : s){
        if(symbols[bracket] < 0){  // If value is negative then it means 
                                   // it is a opening bracket.
                                   // So, insert that bracket in the stack         
            st.push(bracket);

        }else{ // it means Closing type bracket so check top bracket

            if(st.empty()){  // If stack is empty it means no opening bracket is their in the stack

                  return "NO";

            }else{  // If stack is not empty then get the top element(bracket) and store  in char top.
                    // After that get it's map value.
                    // Then do sum = symbols[top] + symbols[bracket].
                    // If sum = 0 then move further
                    // Otherwise return NO.

                    char top = st.top(); // Opening Bracket at the top will go to
                                         // the character variable top.
                    
                    if( symbols[top] + symbols[bracket] != 0){ // If sum != 0
                // It means closing bracket do not have it's opening pair 
                        return "NO";
                    }else{
                        st.pop();
                    }
            }
        }
     }

     if(st.empty()){ // If stack is empty at the end then return "YES" else return "NO"
        
        return "YES";
     }else{
        return "NO";
     }
}

int main()
{
    cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

    int t;
    cout << "Enter the number of testcases : "<< endl;
    cin >> t;
    while(t--){
        
        cout << "Enter the string : "<<endl;
        string brackets;
        cin >> brackets;

        cout << isBalanced(brackets) << endl;
    }

    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";


    return 0;
}


