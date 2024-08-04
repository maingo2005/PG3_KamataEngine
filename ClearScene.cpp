#include <Novice.h>
#include "ClearScene.h"

void ClearScene::Init() {
	clearHandle = Novice::LoadTexture("./Resources/C.png");
}

void ClearScene::Update(char* keys, char* preKeys) {
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw() {
	Novice::DrawSprite(0, 0, clearHandle, 1.0f, 1.0f, 0.0f, WHITE);
}