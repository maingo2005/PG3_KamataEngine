#include <Novice.h>
#include "Enemy.h"
#include "Bullet.h"

Enemy::Enemy(Vector2 pos, int s, int r, int isAlive) {
	pos_ = pos;
	radius_ = r;
	speed_ = s;
	isAlive_ = isAlive;

	enemyHandle = Novice::LoadTexture("./Resources/Enemy.png");
}

void Enemy::Update() {
	pos_.x += speed_;

	if (pos_.x - radius_ <= 0 || pos_.x + radius_ >= 1280) {
		speed_ *= -1;
	}
}

void Enemy::Draw() {
	if(isAlive_==true){
		Novice::DrawEllipse((int)pos_.x, (int)pos_.y, radius_, radius_, 0.0f, RED, kFillModeSolid);
		Novice::DrawSprite((int)pos_.x - 15, (int)pos_.y - 15, enemyHandle, 1.0f, 1.0f, 0.0f, WHITE);
	}
}