#include <Novice.h>
#include "TitleScene.h"

void TitleScene::Init() {}

void TitleScene::Update(char* keys, char* preKeys) {
	titleHandle = Novice::LoadTexture("./Resources/T.png");
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw() {
	Novice::DrawSprite(0, 0, titleHandle, 1.0f, 1.0f, 0.0f, WHITE);
}