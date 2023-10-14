#include "Vessel.h"
#include "Transport.h"

void Vessel::Input() {
	Transport::Input();

	cout << "Enter the board height: ";
	cin >> boardHeight;

	cout << "Enter the number of decks: ";
	cin >> numberOfDecks;
}

void Vessel::Print() {
	cout << "Vessel: " << endl;
	cout << "Brand: " << brand << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "Fuel type: " << fuelType << endl;
	cout << "Maximum speed: " << maxSpeed << endl;
	cout << "Number of passengers: " << numberOfPassengers << endl;
	cout << "Board height: " << boardHeight << endl;
	cout << "Number of decks: " << numberOfDecks << endl;
	cout << "Price: " << price << endl;
	printf("Rental availability: %s\n", rent == true ? "available" : "unavailable");
}

float Vessel::GetBoardHeight() const { return boardHeight; }
int Vessel::GetNumberOfDecks() const { return numberOfDecks; }
void Vessel::SetBoardHeight(float b) { boardHeight = b; }
void Vessel::SetNumberOfDecks(int n) { numberOfDecks = n; }
