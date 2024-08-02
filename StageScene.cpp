#include <Novice.h>
#include <math.h>
#include "StageScene.h"
#include "Player.h"

StageScene::~StageScene() {
	delete player_;
	delete enemy_;
}

void StageScene::Init() {
	player_ = new Player({ 1280 / 2, 720 / 2 }, 16, 4);
	enemy_ = new Enemy({ 100, 300 }, 3, 16, true);
}

int StageScene::enemyHP(int hp) {

	if (hp == 0) {
		sceneNo = CLEAR;
		return 0;
	}

	float a = enemy_->pos_.x - player_->bullet_->pos_.x;
	float b = enemy_->pos_.y - player_->bullet_->pos_.y;
	float distance1 = sqrtf(a * a + b * b);

	float r1 = (float)enemy_->radius_;
	float r2 = (float)player_->bullet_->r_;

	if (distance1 <= r1 + r2) {
		hp = hp - 1;
	}

	return enemyHP(hp);
}

void StageScene::Update(char* keys, char* preKeys) {
	player_->Update(keys, preKeys);
	enemy_->Update();

	float r1 = (float)enemy_->radius_;
	float r3 = (float)player_->r_;

	float c = player_->pos_.x - enemy_->pos_.x;
	float d = player_->pos_.y - enemy_->pos_.y;
	float distance2 = sqrtf(c * c + d * d);

	int hp = 3;
	int m = enemyHP(hp);

	if (distance2 >= r3 - r1) {
		sceneNo = OVER;
	}
}

void StageScene::Draw() {
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, 0x00000064, kFillModeSolid);
	player_->Draw();
	enemy_->Draw();
}
