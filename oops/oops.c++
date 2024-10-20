#include<bits/stdc++.h>
using namespace std;

class Car {
  public:
    string model;
    int price;

    void display(string model, int price) {
        cout << "Model: " << model << " Price: " << price << endl;
    }
};

int main() {
    Car myCar;
    myCar.display("Buggati", 230000);

    return 0;
}

// Inheritance 

class Vehicle {
public:
    string brand = "Ford";
};

class Car : public Vehicle {
public:
    string model = "Mustang";
};

int main() {
    Car myCar;
    cout << myCar.brand + " " + myCar.model << endl; // Output: Ford Mustang
}


// functional Overloading
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

// functional Overriding
class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->sound(); // Output: Dog barks
}
    
    
    













