#include "Airplane.h"
#include "Transport.h"

void Airplane::Input() {
    Transport::Input();

    cout << "Enter wingspan: ";
    cin >> wingspan;

    cout << "Enter range of flight: ";
    cin >> rangeOfFlight;
}

void Airplane::Print() {
    cout << "Airplane: " << endl;

    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Fuel Type: " << fuelType << endl;
    cout << "Maximum Speed: " << maxSpeed << endl;
    cout << "Number of Passengers: " << numberOfPassengers << endl;
    cout << "Wingspan: " << wingspan << endl;
    cout << "Range of Flight: " << rangeOfFlight << endl;
    cout << "Price: " << price << endl;
    printf("Rental Availability: %s\n", rent == true ? "available" : "unavailable");
}
float Airplane::GetWingspan() const { return wingspan; }
float Airplane::GetRangeOfFlight() const { return rangeOfFlight; }
void Airplane::SetWingspan(float w) { wingspan = w; }
void Airplane::SetRangeOfFlight(float r) { rangeOfFlight = r; }