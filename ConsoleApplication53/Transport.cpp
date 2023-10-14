#include "Transport.h"

void Transport::Input() {
    char log;

    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Fuel Type: " << fuelType << endl;
    cout << "Maximum Speed: " << maxSpeed << endl;
    cout << "Number of Passengers: " << numberOfPassengers << endl;

    do {
        cout << "Will it be available for rent? (y - yes, n - no)\n> ";
        cin >> log;

        if (log == 'y')
            rent = true;
        else if (log == 'n')
            rent = false;
        else
            cout << "You entered an incorrect character!!" << endl << endl;
    } while (log != 'y' && log != 'n');

    cout << "Enter the price: ";
    cin >> price;
}

void Transport::Input(string br, string md, string cl, string ft, float sp, int nop, int pr, bool rnt) {
    brand = br;
    model = md;
    color = cl;
    fuelType = ft;
    maxSpeed = sp;
    numberOfPassengers = nop;
    price = pr;
    rent = rnt;
}

void Transport::Print() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Fuel Type: " << fuelType << endl;
    cout << "Maximum Speed: " << maxSpeed << endl;
    cout << "Number of Passengers: " << numberOfPassengers << endl;
    cout << "Price: " << price << endl;
    printf("Rent availability: %s\n", rent == true ? "available" : "not available");
}

string Transport::GetBrand() const { return brand; }
string Transport::GetModel() const { return model; }
string Transport::GetColor() const { return color; }
string Transport::GetFuelType() const { return fuelType; }

float Transport::GetMaxSpeed() const { return maxSpeed; }
int Transport::GetNumberOfPassengers() const { return numberOfPassengers; }
int Transport::GetPrice() const { return price; }

bool Transport::GetRent() const { return rent; }
void Transport::SetBrand(string b) { brand = b; }
void Transport::SetModel(string m) { model = m; }
void Transport::SetColor(string c) { color = c; }
void Transport::SetFuelType(string f) { fuelType = f; }

void Transport::SetMaxSpeed(float m) { maxSpeed = m; }
void Transport::SetNumberOfPassengers(int n) { numberOfPassengers = n; }
void Transport::SetPrice(int p) { price = p; }

void Transport::SetRent(bool r) { rent = r; }
