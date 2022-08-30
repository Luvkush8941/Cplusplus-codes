/*

C++ comes with libraries which helps us in performing input/output.In C++ sequence of
bytes corresponding to input and output are commonly known as streams.

Input stream : Direction of flow of bytes takes place from input device(for ex Keyboard)
to the main memory.

Output stream : Direction of flow of bytes takes place from main memory to the output device
(for example display).

*/

#include <iostream>
using namespace std;

int main()
{

    int num1, num2;

    cout << "Enter the value of num1 : \n"; // << is called insertion operator

    cin >> num1; // >> is called Extraction operator i.e extract all the value entered through the keyboard

    cout << "Enter the value of num2 : \n";

    cin >> num2;

    cout << "The sum is " << num1 + num2;

    // Entering multiple spaced values from user in one line

    int a, b, c, d;

    cout << "\nEnter the values of a,b,c and d :\n";
    cin >> a >> b >> c >> d;

    cout << "Value of a = " << a << "\nValue of b = " << b << "\nValue of c = " << c << "\nValue of d = " << d;

    cout << "\nSum of a,b,c and d = " << (a + b + c + d);

    return 0;
}

