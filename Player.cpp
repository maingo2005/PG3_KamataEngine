#include "Player.h"
#include "Novice.h"

Player::Player(Vector2 pos, int r, int speed) {
	pos_ = pos;
	r_ = r;
	speed_ = speed;

	bullet_ = new Bullet({ 0, 0 }, 10, 10, false);

	playerHandle = Novice::LoadTexture("./Resources/Player.png");
}

Player::~Player() {
	delete bullet_;
}

void Player::Update(char* keys, char* preKeys) {
	if (pos_.x > 1280 - (float)r_) {
		pos_.x = 1280 - (float)r_;
	}

	if (pos_.x < (float)r_) {
		pos_.x = (float)r_;
	}

	if (pos_.y > 720 - (float)r_) {
		pos_.y = 720 - (float)r_;
	}

	if (pos_.y < (float)r_) {
		pos_.y = (float)r_;
	}

	if (keys[DIK_W] && preKeys[DIK_W]) {
		pos_.y -= speed_;
	}

	if (keys[DIK_S] && preKeys[DIK_S]) {
		pos_.y += speed_;
	}

	if (keys[DIK_A] && preKeys[DIK_A]) {
		pos_.x -= speed_;
	}

	if (keys[DIK_D] && preKeys[DIK_D]) {
		pos_.x += speed_;
	}

	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && bullet_->isShot_ == false) {
		bullet_->pos_ = pos_;
		bullet_->isShot_ = true;
	}
	bullet_->Update();
}

void Player::Draw() {
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, r_, r_, 0.0f, GREEN, kFillModeSolid);
	Novice::DrawSprite((int)pos_.x - 15, (int)pos_.y - 15, playerHandle, 1.0f, 1.0f, 0.0f, WHITE);
	bullet_->Draw();
}