#pragma once
#include <iostream>

using namespace std;

class Transport {
protected:
	string brand;
	string model;
	string color;
	string fuelType;

	float maxSpeed;
	int numberOfPassengers;
	int price;

	bool rent;
public:
	Transport() = default;

	virtual void Input();
	void Input(string, string, string, string, float, int, int, bool);

	virtual void Print();
	string GetBrand() const;
	string GetModel() const;
	string GetColor() const;
	string GetFuelType() const;

	float GetMaxSpeed() const;
	int GetNumberOfPassengers() const;
	int GetPrice() const;

	bool GetRent() const;
	void SetBrand(string);
	void SetModel(string);
	void SetColor(string);
	void SetFuelType(string);

	void SetMaxSpeed(float);
	void SetNumberOfPassengers(int);
	void SetPrice(int);

	void SetRent(bool);
};
