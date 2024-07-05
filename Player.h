#pragma once
#include "Bullet.h"

class Player {
private:
	Transform transform_;
	int r_;
	int speedX_;
	int speedY_;
	bool Alive_;

public:
	Bullet* bullet_;
	Player(Transform transform, int r, int s, bool a);
	~Player();

	int GetPosX() const { return transform_.x; };
	int GetPosY() const { return transform_.y; };
	int GetRadius() const { return r_; };
	int GetSpeedX() const { return speedX_; };
	int GetSpeedY() const { return speedY_; };
	int GetAlive() const { return Alive_; };

	void SetAlive(bool Alive);

	void Update(char* keys, char* preKeys);
	void Draw();
};