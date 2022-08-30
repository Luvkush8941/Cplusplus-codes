#include<iostream>
#include<cstdio>

using namespace std;

struct employee
{
    int id;
    float salary;
    char favchar;
};

typedef struct Employee
{

    int id;
    char favchar;
    float salary;
}ep;

// union shares the memory among the three rice,car and pounds
// teeno main se jis datatype kii memory maximum hain usme se teeno main bategyi.
union money
{
    int rice;
    float pounds;
    char car;
};



int main(){

// struct employee Luvkush;
// Luvkush.favchar = 'B';
// Luvkush.id = 1;
// Luvkush.salary = 100000.50;

// cout<<"Salary of the employee : "<<Luvkush.salary<<endl;
// cout<<"Favourite character of the employee : "<<Luvkush.favchar<<endl;
// cout<<"id of the employee : "<<Luvkush.id<<endl;


// ---------- Using Typedef -----------
// ep luvkush;
// ep tim;

// luvkush.favchar = 'B';
// luvkush.id = 1;
// luvkush.salary = 100000.50;

// tim.favchar = 'B';
// tim.id = 1;
// tim.salary = 100000.50;

//-------------------- Union -------------------
// For Better memory management

/*
union money m1;
m1.rice = 34;
cout<<m1.rice<<endl;

m1.car = 'c';
cout<<"Value of m1.rice is : "<<m1.rice<<endl; // This time we didn't get the correct value of m1.
// As it is being corrupted so, it gives us the garbage value
// Ek samay par ek hee use karna hoga

cout<<"Value of m1.car is : "<<m1.car<<endl; // iski value sahi milegyi

// abb pounds use karengye toh car waale kii value galat milegyi

m1.pounds = 12.23;

cout<<"Value of m1.car is : "<<m1.car<<endl; // We get garbage value of car

cout<<"Value of pounds is : "<<m1.pounds<<endl;

// So, inn teeno main se ham ek hee use kar paayengye ek hee samay main.

*/

//--------------- enum --------------------

enum Meal{Breakfast , Lunch , Dinner};

// cout<<Breakfast<<endl;
// cout<<Lunch<<endl;
// cout<<Dinner<<endl;

Meal m1 = Breakfast;
cout<<m1<<endl;

if(Breakfast == 0 && Lunch == 1){

    cout<<"Enum";
}else{
    cout<<"Enum bad";
}







return 0;
}