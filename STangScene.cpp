#include "STangScene.h"
#include <corecrt_math.h>

void StangScene::Init(){}

StangScene::~StangScene(){
	delete player;
	delete enemy;
}

void StangScene::Update(char* keys, char* preKeys) {
	player->Update(keys, preKeys);
	enemy->Update(keys, preKeys);

	CollisionBulletEnemy();
}

void StangScene::CollisionBulletEnemy(){
	int distance1 = player->bullet_->GetPosX() - enemy->GetPosX();
	int distance2 = player->bullet_->GetPosY() - enemy->GetPosY();


	int a = (int)sqrtf((float)distance1 * (float)distance1 + (float)distance2 * (float)distance2);

	if (a <= (player->bullet_->GetRadius() + enemy->GetRadius())) {
		enemy->SetAlive(true);
		enemy->SetSpeedX(0);
		sceneNo = CLEAR;
	}
}

void StangScene::Draw(){
	player->Draw();
	enemy->Draw();
}
