#include "Tram.h"

void Tram::Input() {
    Transport::Input();

    cout << "Enter the control system: ";
    cin >> controlSystem;
}

void Tram::Print() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Fuel Type: " << fuelType << endl;
    cout << "Maximum Speed: " << maxSpeed << endl;
    cout << "Number of Passengers: " << numberOfPassengers << endl;
    cout << "Control System: " << controlSystem << endl;
    cout << "Price: " << price << endl;
    printf("Rent Availability: %s\n", rent == true ? "available" : "not available");
}

string Tram::GetControlSystem() const { return controlSystem; }
void Tram::SetControlSystem(string c) { controlSystem = c; }
