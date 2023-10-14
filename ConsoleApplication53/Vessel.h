#pragma once
#include "Transport.h"

class Vessel : public Transport {
	float boardHeight;
	int numberOfDecks;
public:
	void Input();
	void Print();
	float GetBoardHeight() const;
	int GetNumberOfDecks() const;
	void SetBoardHeight(float);
	void SetNumberOfDecks(int);
};
