#pragma once
#include "Transport.h"

class Tram : public Transport {
	string controlSystem;
public:
	void Input();
	void Print();
	string GetControlSystem() const;
	void SetControlSystem(string);
};
