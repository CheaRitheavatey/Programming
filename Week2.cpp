#include <iostream>

using namespace std;

void month() {
     // example 3
    int month;

    cout << "Enter month number: ";
    cin >> month;

    switch (month)
    {
    case 12:
    case 1:
    case 2:
    cout << "winter";
        break;
    case 3:
    case 4:
    case 5:
    cout << "spring";
        break;
    case 6:
    case 7:
    case 8:
    cout << "summer";
        break;
    case 9:
    case 10:
    case 11:
    cout << "fall";
        break;
    
    default:
    cout << "enter 1-12";
        break;
    }
}

void season() {
    int month;

    cout << "Enter month number: ";
    cin >> month;

    switch (month)
    {
    case 1:/* constant-expression */
        cout << "January" << endl;
        break;
    case 2: 
        cout << "February" << endl;
        break;
    case 3:/* constant-expression */
        cout << "March" << endl;
        break;
    case 4: 
        cout << "April" << endl;
        break;
    case 5:/* constant-expression */
        cout << "May" << endl;
        break;
    case 6: 
        cout << "June" << endl;
        break;
    case 7:/* constant-expression */
        cout << "July" << endl;
        break;
    case 8: 
        cout << "August" << endl;
        break;
    default:
        cout << "enter number from 1-12";
        break;
    }
}

void triangle() {
    // example 1

    int a;
    int b;
    int c;

    cout << "Enter a b c: ";
    cin >> a>>b>> c;
    if (a + b < c || a + c < b || b + c<a)
    {
        cout << "cannot construct triangle";
    } else {
        cout << "can construct triangle"; 
    }

}

void postiveORnegative(){
     // example 2

    int num; 
    cout << "enter a number: ";
    cin >> num;

    if (isdigit(num)) {
        if (num > 0)
            cout << "the number is positive" << endl;
        else if (num < 0)
            cout << "The number is negative" << endl;
        else
            cout << "The number is 0" << endl;    
    
    } 
    else {
        cout << "Enter integer number" << endl;
        
    }
}
    // main method
int main() {
    // month();
    // season();
    // triangle();
    // postiveORnegative();

    return 0;    
}
