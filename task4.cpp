#include <iostream>
#include <cstring>
using namespace std;

// task 4: let the code query a string and then check if it matches a string given in the code
 
int main() {
    char text1[50];
    char text2[50];
    char ch;
    int i =0;
    int j = 0;
    cout << "Enter text 1: ";
    while ((ch = getchar()) != '\n' && i < 99) {
        text1[i++] = ch;
    }
    text1[i] = '\0';
   
    cout << "Enter text 2: ";
    while ((ch = getchar()) != '\n' && j < 99) {
        text2[j++] = ch;
    }
    text2[j] = '\0';

    if (strcmp(text1, text2) == 0) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }
   
}