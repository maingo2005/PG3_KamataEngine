#pragma once
#include "Vector2.h"
#include "Bullet.h"

class Player
{
public:
	Bullet* bullet_;
	Vector2 pos_;
	int r_;
	int speed_;
	int playerHandle;

public:
	Player(Vector2 pos, int r, int speed);
	~Player();
	void Update(char* keys, char* preKeys);
	void Draw();
};