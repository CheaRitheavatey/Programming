
#include <iostream>
#include <cmath>
using namespace std;

// task 3: using a function work with a code to find the height and radius of a cylinder then calculate its surface area and voloume make it with both local and gloal variables.
 
// global variable
double globalHeight = 10;
double globalRadius = 5;

void calculateCylinder(double height, double radius) {
    double surfaceArea;
    double volume;
    
    surfaceArea = (2 * M_PI * radius * radius) + (2 * M_PI * radius * height);
    volume = M_PI * radius * radius * height;
    
    cout << "Height: " << height << endl;
    cout << "Radius: " << radius << endl;
    cout << "Surface Area: " << surfaceArea << endl;
    cout << "Volume: " << volume << endl;
}
int main() {
    double localHeight = 4;
    double localRadius = 3;
    
    cout << "Using local height and radius variables: " << endl;
    calculateCylinder(localHeight, localRadius);

    cout << endl;

    cout << "Using global height and radius variables: " << endl;
    calculateCylinder(globalHeight, globalRadius);
    
    
}
