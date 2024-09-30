#include <iostream>

using namespace std;

int main() {
    // write a program to cnovert a temperature from fahrenheit to celsius
    // as user to input fahrenheit
    double temperatureF;
    double temperatureC;
    cout << "Enter temperature in fahrenheit: " << endl;
    cin >> temperatureF;

    // calculation
    temperatureC = (temperatureF - 30) / 2;
    // output the celsius
    cout << "Temperature Fahrenheit: " << temperatureF << endl;
    cout << "Temperature Celsius: " << temperatureC << endl;



    return 0;
}