#include<iostream>
using namespace std;

class Car { //The Class
    public: //Access specifier
    string brand; //Atrribute
    string model; // Attribute
    int year; //Attribute
    int speed; //Attribute
    Car(string w, string x, int y, int z); //Constructor declaration
};

//Constructor definition outside the class
Car::Car(string w, string x, int y, int z) {
    brand = w;
    model = x;
    year = y;
    speed = z;
}

int main() {
    //Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999, 180);
    Car carObj2("Ford", "Mustang", 1969, 150);

    //Print Values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    cout << "Top speed for " << carObj1.brand << " " << carObj1.model << " is: " << carObj1.speed << "\n";
    cout << "Top speed for " << carObj2.brand << " " << carObj2.model << " is: " << carObj2.speed << "\n";
    return 0;
}