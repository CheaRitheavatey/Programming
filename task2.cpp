#include <iostream>
#include <cstring>
using namespace std;


class Car {
    // data field
    private:
        int numberPlate;
        string type;
        string color;
        int year;
   
    // constructor
    public:
        Car(int plate, string t, string c, int y) {
            numberPlate = plate;
            type = t;
            color = c;
            year = y;
        }

        // getter
        int getNumberPlate() {return numberPlate;}
        string getType() {return type;}
        string getColor() {return color;}
        int getYear() {return year;}

        // setter
        void setNumberPlate(int plate) {numberPlate = plate;}
        void setType(string t) {type = t;}
        void setColor(string c) {color = c;}
        void setYear(int y) {year = y;}
};
   

int main() {
    Car cars[3] = {
        Car(1234, "sedan", "red", 2000),
        Car(2345, "Audi", "red", 2010),
        Car(3456, "SUV", "red", 2015)
    };

    // print out the details of the car
    for (int i = 0; i < 3; i++) {
        cout << "Car " << i + 1 << ": " << endl;
        cout << "Plate number: " << cars[i].getNumberPlate() << endl;
        cout << "Type: " << cars[i].getType() << endl;
        cout << "Color: " << cars[i].getColor() << endl;
        cout << "Year: " << cars[i].getYear() << endl;
        cout << endl;
    }

    cout << "Change the type and year of car 1" << endl;
    cout << "Update cars detail: " << endl;
    // change the type and year of car 1
    cars[0].setType("SUV");
    cars[0].setYear(2020);

    // print out the details of the car
    for (int i = 0; i < 3; i++) {
        cout << "Car " << i + 1 << ": " << endl;
        cout << "Plate number: " << cars[i].getNumberPlate() << endl;
        cout << "Type: " << cars[i].getType() << endl;
        cout << "Color: " << cars[i].getColor() << endl;
        cout << "Year: " << cars[i].getYear() << endl;
        cout << endl;
    }
    return 0;
}