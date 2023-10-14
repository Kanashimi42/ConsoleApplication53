#include "Automobile.h"
#include "Transport.h"

void Automobile::Input() {
    Transport::Input();

    cout << "Enter tire brand: ";
    cin >> tireBrand;
}

void Automobile::Print() {
    cout << "Automobile: " << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Fuel Type: " << fuelType << endl;
    cout << "Maximum Speed: " << maxSpeed << endl;
    cout << "Number of Passengers: " << numberOfPassengers << endl;
    cout << "Tire Brand: " << tireBrand << endl;
    cout << "Price: " << price << endl;
    printf("Rentability: %s\n", rent == true ? "available" : "unavailable");
}

string Automobile::GetTireBrand() const {
    return tireBrand;
}

void Automobile::SetTireBrand(string t) {
    tireBrand = t;
}
