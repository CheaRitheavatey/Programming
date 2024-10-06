#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;

    // ask input
    cout<< "Enter two integers a and b: ";
    cin >> a >>b;

    cout << "Enter c: ";
    cin >> c;

    // if a<=c<=b => yes else no
    if (a <= c <= b) 
    {
       cout << c << "is within the interval" << a << "and" << b << endl;

    } else {
        cout << c << "is within the interval" << a << "and" << b << endl;
    }
    
    return 0;

}