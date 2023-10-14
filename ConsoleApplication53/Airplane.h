#pragma once
#include "Transport.h"

class Airplane : public Transport {
	float wingspan;
	float rangeOfFlight;
public:
	void Input();
	void Print();
	float GetWingspan() const;
	float GetRangeOfFlight() const;
	void SetWingspan(float);
	void SetRangeOfFlight(float);
};