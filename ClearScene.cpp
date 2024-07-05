#include "ClearScene.h"

void ClearScene::Init(){}

void ClearScene::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = TITLE;
		enemy->SetAlive(false);
		enemy->SetPosX(10);
	}
}

void ClearScene::Draw(){ Novice::DrawBox(0, 0, 1280, 740, 0.0f, BLACK, kFillModeSolid); }
