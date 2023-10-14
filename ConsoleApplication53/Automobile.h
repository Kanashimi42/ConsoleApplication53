#pragma once
#include "Transport.h"

class Automobile : public Transport {
	string tireBrand;
public:
	void Input();
	void Print();
	string GetTireBrand() const;
	void SetTireBrand(string);
};
