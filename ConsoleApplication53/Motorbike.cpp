#include "Motorbike.h"

void Motorbike::Input() {
    Transport::Input();
}
void Motorbike::Print() {
    cout << "Motorbike: " << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Fuel Type: " << fuelType << endl;
    cout << "Max Speed: " << maxSpeed << endl;
    cout << "Number of Passengers: " << numberOfPassengers << endl;
    cout << "Price: " << price << endl;
    printf("Rental Option: %s\n", rent == true ? "available" : "not available");
}
