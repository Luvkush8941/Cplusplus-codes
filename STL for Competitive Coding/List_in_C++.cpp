// Helpful in deletion and insertion of element
// In the array for the deletion of element (placed between two elements) we have to shift the elements which takes a lot time 
// But in linked list deletion or insertion of a element in between two nodes is easy.

#include<iostream>
#include<cstdio>

#include<list>
using namespace std;


void pushing_elements(list<int> &lst){

int choice,element;

cout<<"\n--------- Enter 1 for push_back and 0 for stop --------"<<endl;
while(1){

   cout<<"Enter your choice : "<<endl;
   cin>>choice;
   if(choice == 1){
    cout<<"Enter the element to be pushed : "<<endl;
    cin>>element;

    lst.push_back(element); // pushing element inside the list

   }else{
    break;
   }
}

}



void display(list<int> &lst){

list<int> :: iterator iter;
cout<<"\nPrinting list elements : "<<endl;

for(iter = lst.begin(); iter != lst.end(); iter++){ // iter++ means moving iterator forward

   cout<< (*iter)<<" ";

}

}


int main(){

cout<<endl<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

/*

list<int> list1; // creates a list of 0 length.
pushing_elements(list1);
display(list1);

*/


/*

cout<<endl<<endl;

//  making list - 2
list<int> list2(5); // Empty list of size 5

list<int> :: iterator iter;

iter = list2.begin();

*iter = 45;
iter++; // Moving the iterator forward

*iter = 57;
iter++;

*iter = 65;
iter++;

*iter = 34;
iter++;

*iter = 57;
iter++;

display(list2);

*/

// ---------------- Pop function ----------------
// list2.pop_back();
// display(list2);

// list2.pop_front();
// display(list2);

// ---------------- Remove function ----------------

// list2.remove(34);
// display(list2);

// removing duplicate elements from the list removes all its occurences

// list2.remove(57);
// display(list2);

// making list-3

// cout<<endl;

// list<int> list3;

// pushing_elements(list3);
// display(list3);

// ------------ Sorting list elements using sort function ---------------

// list3.sort();
// display(list3);

// making list-4 

cout<<endl;

list<int> list4; // creates a list of 0 length.
pushing_elements(list4);
display(list4);

// ------------ Merging two lists using the merge function -------------

// cout<<"List 3 after merging"<<endl;

// list3.merge(list4);
// display(list3);

//-------------- Merging two sorted lists  gives another sorted list----------------
// list3.sort();
// list4.sort();

// cout<<"list3 after sorting : "<<endl;
// display(list3);

// cout<<"list4 after sorting : "<<endl;
// display(list4);

// cout<<endl;

// list3.merge(list4);
// display(list3);


//------------------ Reversing the list ------------------

list4.reverse();
display(list4);

cout<<endl<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
return 0;
}
