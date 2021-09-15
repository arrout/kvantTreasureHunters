#pragma once


#include <iostream>
#include "My_Point.h"

using namespace std;

class My_Player
{
public:

	My_Player();
	My_Player(int id, My_Point start);
	~My_Player();

	bool is_alive();

	bool shoot();




private:

	int id;
	bool isAlive;
	int ammo;
	int tnt;
	bool hasTreasure;
	My_Point coord;



};

