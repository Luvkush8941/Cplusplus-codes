/*

Let's say we have an array : 4, 5, 2, 25 ,7, 8

So, we have to check the next greater element on the right side i.e :

For 4 next greater element is 5 . Now for '5' next greater element is 25.
For 2 also next greater element is 25.
For 25 their is no next greater element as 25 itself the greatest element in the array.
So,we have to write -1 in this case.

So, till now output is : 5 25 25 -1

Now, for 7 next  greater element is 8. And for 8 their is no next greater element 
on the right side i.e we'll write -1

Final Output :

5 25 25 -1 8 -1


We can find that output in the time complexity of O(n^2). In which we'll fix 4 and 
checking greatest element in the left array i.e after 4 array.
Similarly now, fixing 5 we'll check the greatest element in the right.


But we can get the above output in O(n) time complexity using stack.

Given array :  4, 5, 2, 25 ,7, 8

Step-1

                        ---------------             
                        |             |
              |         V    |        4 (Kya 4 stack main pade kisi bhi element se bada
              ----------------             ho sakta hain agar 4 stack main present 
              |              |             kisi bhi element se bada nhi hain toh 
              ----------------             usse stack main insert kardo.)
              |              |
              ----------------
              |       4      |
              ----------------

Step-2        
               
              
                        ---------------           
                        |             |
              |         V    |        5 (Kya 5 stack main pade kisi bhi element kaa next
              ----------------             greater element ho sakta hain agar 5 stack 
              |              |             main present kisi bhi element kaa next greater 
              ----------------             ho sakta hain toh pop 4 and assign the next 
              |       5      |             greater of the top element (4) to  
              ----------------             to 5(so 5 will be assigned to 5) and insert 5. 
              | 4-->X(pop)   |             Else insert 5.)
              ---------------- 
      
      Output Till now : 5


Step-3        

          
                        ---------------             
                        |             |
              |         V    |        2 (Kya 2 stack main pade kisi bhi element kaa next
              ----------------             greater element ho sakta hain agar 2 stack 
              |       2      |             main present kisi bhi element kaa next greater 
              ----------------             ho sakta hain toh pop 5 and assign the next greater
              |       5      |             of top element to 2 and then insert 2 .Else insert 2.)
              ----------------
              | 4-->X(pop)   |
              ---------------- 
      
      Output Till now : 5



Step-4 :

Here in this step 25 will come and 25 is the next greaterter element of 2 and 5 so, pop 
top element and cout 25. Now, again check is their any element in the stack for which 25
can be the next greater element. So, we got 5 i.e pop 5 and cout 25.
          
                        ---------------             
                        |             |
              |    25   V    |        25 (Kya 25 stack main present kisi bhi element kaa next
              ----------------             greater element ho sakta hain agar 25 stack 
              |  2--X(pop)   |             main present kisi bhi element kaa next greater 
              ----------------             ho sakta hain then pop top element and assign
              |  5--X(pop)   |             the next greater of top element to 25 again
              ----------------             check that is their any element present in the  
              | 4-->X(pop)   |             stack which is greater than 25 if it so then again
              ----------------             pop.And if their is no element present in the stack
                                           for that ,25 is greater element then insert 25.
      Output Till now : 5 25 25


Step-5         
               
                        ---------------             
                        |             |
              |         V    |        8 (Kya 8 stack main pade kisi bhi element kaa next
              ----------------             greater element ho sakta hain agar 8 stack 
              |      8       |             main present kisi bhi element kaa next greater 
              ----------------             ho sakta hain toh pop 7 and cout 8 then again check.
              |   7--X(pop)  |             still is their any element present in the stack
              ----------------             For which 8 can be the next greater element.
              |      25      |             else insert 8. Since for 25, 8 cannot be the next 
              ----------------             greater element. i.e at the end insert 8.
      
      Output Till now : 5 25 25 8


Step-6 

After traversing if stack is not empty it means some elements are left.
Then pop them one-by-one and cout -1. Since they donot have their next greater element.

              |              |  
              ----------------              
              |              |              
              ----------------             
              |  8-->X(pop)  |             
              ----------------
              |  25-->X(pop) |
              ---------------- 
      
      Output Till now : 5 25 25 -1 8 -1


*/


#include<bits/stdc++.h>
using namespace std;

vector<int> Next_Greater_Element(vector<int> v){
        
        /*
           We will store the indexes of the next greater elements inplace of
           their values as it will be helpful in the later code.

        */
        vector<int> nge(v.size());
        stack<int> st;

        for(int i=0 ; i < v.size() ; i++){
            while(!st.empty() && v[i] > v[st.top()]){ // Jab tak hamaara v[i] stack ke top 
            // se bada hain tab tak loop chalega aur stack jab tak empty nhi hain tab tak.

            nge[st.top()] = i;
            st.pop();
        }
        st.push(i); // Jab 4 hoga tab while loop chalega nhi aur woh satck main insert ho 
        // jaayega.
      }

      // At the end left values jo hogyi stack main unkaa koi NGE nhi hoga toh unhe -1 
      // Assign kar dengye.

      while(!st.empty()){
            nge[st.top()] = -1;
            st.pop();
      }

      return nge;
}





int main(){
    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

    int n;
    cout << "Enter the size of the vector : " << endl;
    cin >> n;

    // Declaring a vector of size n 
    vector<int> v(n); 

    // Input taking
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << endl;
    
    vector<int> NGE = Next_Greater_Element(v);
    
    for(int i=0; i < NGE.size(); i++){
       
        cout << v[i] << "    " << (NGE[i] == -1 ? -1 : v[NGE[i]]) << endl; // Using Ternary Operator.

        // NGE[i] index hain NGE kaa toh v[NGE[i]] gives us 
        // the value at that index.
    }
   
    cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
    return 0;
}
