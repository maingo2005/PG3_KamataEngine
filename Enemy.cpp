#include <Novice.h>
#include "Enemy.h"
#include "Bullet.h"

Enemy::Enemy(Vector2 pos, int s, int r, int isAlive){
	pos_ = pos;
	radius_ = r;
	speed_ = s;
	isAlive_ = isAlive;
}

void Enemy::Update() {
	pos_.x += speed_;

	if (pos_.x - radius_ <= 0 || pos_.x + radius_ >= 1280) {
		speed_ *= -1;
	}
}

void Enemy::Draw() {
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, radius_, radius_, 0.0f, RED, kFillModeSolid);
}