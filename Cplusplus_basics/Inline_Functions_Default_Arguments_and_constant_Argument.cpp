#include<iostream>
#include<cstdio>
using namespace std;

int product(int a , int b){

    return a*b;
}

inline int productOfNumbers(int a , int b){

    return a*b;
}

float moneyReceived(int currencyMoney , float factor = 1.04){ // factor having default value 

return currencyMoney * factor;

}

// ----- constant argument -----

// int strlen(const char*p); // no one can change the value of p


int main(){

int a,b;

// cout<<"Enter the value of a and b : "<<endl;
// cin>>a>>b;

// cout<<"Product of a and b is : "<<product(a,b)<<endl;
// cout<<"Product of a and b is : "<<product(a,b)<<endl;
// cout<<"Product of a and b is : "<<product(a,b)<<endl;
// cout<<"Product of a and b is : "<<product(a,b)<<endl;
// cout<<"Product of a and b is : "<<product(a,b)<<endl;

// jab ham ek baar product function ko call karengye toh maan lo usne x time liyaa
// firse hamne product function ko call kiya woh bhi x time legaa
// toh time addup hota jaa raha hain. 
// isliye ham inline functions kaa use karengye.

// inline function likhne se hamaara function ek hee line main expand ho jaata hain.
// aur compiler replace kar deta hain function call ko iss function ke code se compile time main.
// isse product function a*b main convert ho jaayega.

// unn function ko inline banaana jo kii kam line of code lete hain.
// jab bhi recursion use ho raha ho tab inline functions ka use naa kare.
// jab bhi static variable use ho raha ho tab inline functions kaa use na kare.

int money = 100000;

cout<<"If you have "<<money<<" Rs in your account, you will receive "<<moneyReceived(money)<< " Rs after 1 year."<<endl;

cout<<"For VIP, if you have "<<money<<" Rs in your account, you will receive "<<moneyReceived(money,1.1)<< " Rs after 1 year."<<endl;



return 0;
}