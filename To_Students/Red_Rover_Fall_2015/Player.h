#pragma once
#include "PlayerInterface.h"
#include <string>
using namespace std;

class Player : public PlayerInterface {
public:
	Player(string nameIn, int speedIn, int strengthIn);
	~Player();

	string getName();
	int getStrength();
	int getSpeed();

private:
	string name;
	int speed;
	int strength;
};