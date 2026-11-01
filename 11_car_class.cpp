#include <iostream>
#include <string>
using namespace std;

// Class Car
class Car
{
public:
    string brand;
    float price;

    // Function to display car details
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    // Creating multiple objects
    Car car1, car2;

    car1.brand = "Toyota";
    car1.price = 1500000;

    car2.brand = "Honda";
    car2.price = 1200000;

    cout << "Car 1 Details" << endl;
    car1.display();

    cout << "\nCar 2 Details" << endl;
    car2.display();

    return 0;
}
