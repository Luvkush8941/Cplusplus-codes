// Stack uses LIFO (last in first out) approach:-

/*

stack functions :-

1. push at top
2. pop at top
3. top

*/

// Queues uses FIFO (First in first out) approach:-

/*

Queues functions :-

1. push at end
2. pop at beginning
3. front

*/

#include<bits/stdc++.h>
using namespace std;   

void print_stack(stack<int> &s){
    
    while(!s.empty()){
        cout << "| " << s.top() << " |" << endl; // s.top() directly goes to the top of the stack.
        s.pop(); // it will pop the top element from the stack and by this top moves downward.
    }
}



void print_queue(queue<string> &que){

    while(!que.empty()){ // If queue is not empty then this will run
      
      // q.front() directly takes us to the front i.e "hii".
      cout << que.front() << " "; // printing the value at the front

      que.pop(); // deleting the front value as deletion in the queue is done from 
      // left to right. So, after the deletion of front now front moves rightwards

   }
}

int main(){

    cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

    
    // Syntax: stack <data_type_of_elements_you_want_to_insert> variable_name;
    stack<int> s;

    // Inserting elements in the stack

    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(9);

    // s.empty() returns a boollean that stack is empty or not

     // Accessing elements from the stack

    /*
    while(!s.empty()){
        cout << s.top() << endl;  // s.top() directly goes to the top of the stack as we have 9 at the top so first 9 will be printed
        s.pop(); // so top value i.e 9 here will be popped from the stack.

        // Now top value becomes 5 and top moves downward till the stack becomes empty.
    }

    */

   // print_stack(s);

   // ------------------- Queue ------------------------------------

   // Declaring queue of string
   queue <string> q;

   // Inserting elements in the queue at the back
   q.push("hii");
   q.push("hello");
   q.push("Lithi");
   q.push("Berg");
   q.push("BCNOF");

   // Accessing elements from the queue from the front

   /*

   while(!q.empty()){ // If queue is not empty then this will run
      
      // q.front() directly takes us to the front i.e "hii".
      cout << q.front() << " "; // printing the value at the front

      q.pop(); // deleting the front value as deletion in the queue is done from 
      // left to right.

   }

   */

  print_queue(q);

   cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

    return 0;
}
