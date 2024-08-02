#include "Bullet.h"
#include "Novice.h"

Bullet::Bullet(Vector2 pos, int speed, int r, bool isShot) {
	pos_ = pos;
	speed_ = speed;
	r_ = r;
	isShot_ = isShot;

	bulletHandle = Novice::LoadTexture("./Resources/Bullet.png");
}

void Bullet::Update() {
	if (isShot_ == true) {
		pos_.y -= speed_;
		if (pos_.y <= 0) {
			isShot_ = false;
		}
	}
}

void Bullet::Draw() {
	if (isShot_ == true) {
		Novice::DrawEllipse((int)pos_.x, (int)pos_.y, r_, r_, 0.0f, WHITE, kFillModeSolid);
		Novice::DrawSprite((int)pos_.x - 10, (int)pos_.y - 10, bulletHandle, 1.0f, 1.0f, 0.0f, WHITE);
	}
}