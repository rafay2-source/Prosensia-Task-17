#include <iostream>
using namespace std;

class Vehicle {
    string company, model;
    int year;
    static int count;

public:
    Vehicle() {
        company = "Unknown";
        model = "Unknown";
        year = 0;
        count++;
        cout << "Default Constructor Called\n";
    }

    
    Vehicle(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
        count++;
        cout << "Parameterized Constructor Called\n";
    }

    
    void display() {
        cout << "Company: " << company << ", Model: " << model << ", Year: " << year << endl;
    }

    
    ~Vehicle() {
        cout << "Destructor Called for " << model << endl;
        count--;
        cout << "Vehicles Remaining: " << count << endl;
    }

    
    static void showCount() {
        cout << "Total Vehicles: " << count << endl;
    }
};


int Vehicle::count = 0;

int main() {
    Vehicle::showCount();

    Vehicle v1;
    v1.display();

    Vehicle v2("Toyota", "Corolla", 2021);
    v2.display();

    Vehicle::showCount();

    return 0;
}
