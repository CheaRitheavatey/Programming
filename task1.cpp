#include <iostream>
#include <cstring>
using namespace std;

struct employees{
    string name;
    int age;
   
};

int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    employees emp[n];
    // take in the information
    for (int i = 0; i < n; i++) {
        cout << "Enter the name of employee " << i + 1 << ": ";
        cin >> emp[i].name;
        cout << "Enter the age of employee " << i + 1 << ": ";
        cin >> emp[i].age;
        cout << endl;
    }

    // print out the information
    for (int i = 0; i < n; i++) {
        cout << "Name: " << emp[i].name << endl;
        cout << "Age: " << emp[i].age << endl;
        cout << endl;
    }
    // search employees by name
    string search;
    cout << "Enter name of employee to search for: ";
    cin >> search;
   
    bool found =false;
    for (int i=0; i<n; i++) {
        if (search == emp[i].name) {
           
            cout << "Employee found: " << endl;
            cout << "Name: " << emp[i].name << endl << "Age: " << emp[i].age << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee not found" << endl;
    }
   
   
    return 0;
}