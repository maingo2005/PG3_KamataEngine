#pragma once
#include <Struct.h>

class Enemy {
public:

	Enemy(Transform t, int r, int sX, bool a);

	int GetPosX() const { return transform_.x; };
	int GetPosY() const { return transform_.y; };
	int GetRadius() const { return radius_; };
	int GetSpeedX() const { return speedX_; };
	int GetAlive() const { return Alive_; };

	void SetPosX(int a) { transform_.x = a; }
	void SetAlive(bool Alive);
	void SetSpeedX(bool SpeedX);

	void Update(char* keys, char* preKeys);

	void Draw();

private:
	Transform transform_;
	int speedX_;
	int radius_;
	bool Alive_;
};