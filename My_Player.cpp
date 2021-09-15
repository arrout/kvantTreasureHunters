#include "My_Player.h"


My_Player::My_Player()
{
	cout << "Create player" << endl;
}

My_Player::My_Player(int id, My_Point start)
{
	this->id = id;
	this->ammo = 3;
	this->tnt = 3;
	this->isAlive = true;
	this->hasTreasure = false;

}

bool My_Player::is_alive()
{
	return this->isAlive;
	
}

bool My_Player::shoot()
{
	if (this->ammo > 0)
	{
		cout << "bang" << endl;
		this->ammo--;
		return true;
	}
	else
	{
		cout << "No ammo" << endl;
		return false;
	}
	
}


My_Player::~My_Player()
{
	cout << " delete" << endl;
}
