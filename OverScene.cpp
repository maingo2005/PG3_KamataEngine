#include <Novice.h>
#include "OverScene.h"

void OverScene::Init() {
	overHandle = Novice::LoadTexture("./Resources/O.png");
}

void OverScene::Update(char* keys, char* preKeys) {

	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void OverScene::Draw() {
	Novice::DrawSprite(0, 0, overHandle, 1.0f, 1.0f, 0.0f, WHITE);
}