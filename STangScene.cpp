#include "STangScene.h"
#include <corecrt_math.h>

void StangScene::Init(){}

StangScene::~StangScene(){
	delete player;
	delete enemy;
}

void StangScene::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}

	player->Update(keys, preKeys);
	enemy->Update(keys, preKeys);

	int distance3 = enemy->GetPosX() - player->GetPosX();
	int distance4 = enemy->GetPosY() - player->GetPosY();

	int b = (int)sqrtf((float)distance3 * (float)distance3 + (float)distance4 * (float)distance4);

	if (b <= (enemy->GetRadius() + player->GetRadius())) {
		player->SetAlive(true);
	}
}

void StangScene::CollisionBulletEnemy(){
	int distance1 = player->bullet_->GetPosX() - enemy->GetPosX();
	int distance2 = player->bullet_->GetPosY() - enemy->GetPosY();


	int a = (int)sqrtf((float)distance1 * (float)distance1 + (float)distance2 * (float)distance2);

	if (a <= (player->bullet_->GetRadius() + enemy->GetRadius())) {
		enemy->SetAlive(true);
		enemy->SetSpeedX(0);
	}
}

void StangScene::Draw(){
	player->Draw();
	enemy->Draw();
}
