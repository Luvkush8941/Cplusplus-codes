#include<bits/stdc++.h>
using namespace std;

/*

Below algorithms returns 1 for true or 0 for false:-
 1. all_of : Let say, we have a condition so, all_of checks that condition is true or not
             for each element without using any loop.
             If that condition is true for all the elements then all_of returns true.
             and if the condition is false for even a single element then, it will
             return 0 i.e false.

 2. none_of : Returns 1 if lambda function returns 0 for all the elements in the range
              [first,last]

 3. any_of : If the given condition is false for 99 elements and true for a single element
             Then also any_of function returns 1 i.e true.
             If that condition is false for all the elements in the container then only
             any_of returns 0 i.e false.

*/

int main(){

    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

    
    // ***************** Lambda Function in C++ *************************

    // It is a small syntax temporary type function.

    /*
       Syntax for lambda function :

    [] (write_the_variables_you_want_to_pass) {return return_value} (value_to_be_passed)

    */  

       // We can directly print the lambda function return value.
       // And if we want to reuse it then we assign it to a variable.
       // In the below examples i had assigned the lambda function to the variable value.
        
         /*

         // Using lambda value 
         auto value =  [](int x){return x+2;}(2);

         cout << "Lambda Function using one variable : " << value << endl; // Output = 4

          */

    /*

    auto value = [](int x,int y){return (x + y);}(4,6);
    cout << "Lambda Function passing two variables : " << value << endl;

    */

    

    //  Declaring a vector :
        vector<int> v = {-1,2,3,4,5};

        // ************* Using all_of function *********************
        /*
          Like the all algorithms, the all_of algorithm also takes the starting address
          of the container as it's first argument and in the second argument it takes
          the address of the position next to the end.

          In the third argument we can send the lambda function. 

        */
         
         // In the below code we use the lambda function which checks whether 
         // all the elements in the container are greater than 0 i.e positive or not
         // If it so, then it will return 1 otherwise returns 0.

        auto all = all_of( v.begin(), v.end(),
        [](int x){return x > 0;});

        // We can also use "is_positive function in place of [](int x){return x > 0; this"

        cout << "Is all the values in the vector are +ve : " << all << endl;
        

        // **************** Using any_of function ************************

         auto any = any_of( v.begin(), v.end(),
        [](int x){return x > 0;});

       // Since, for only one element our condition is false i.e 
       // any_of will return 1 i.e true.

        cout << any << endl;

        // ****************** none_of *********************************

        auto none = none_of(v.begin(), v.end(),
        [](int x){return x > 0;});

         cout << "Is none of the elements in the vector are -ve : " << none << endl;

        
        //----- Making lambda function that checks whether a number is even or odd ------

        auto all_eve_or_odd = all_of( v.begin(), v.end(),
        [](int x){return x % 2==0;});

        cout << "Is all the values in the vector are even : " << all_eve_or_odd << endl;


    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

    return 0;
}
