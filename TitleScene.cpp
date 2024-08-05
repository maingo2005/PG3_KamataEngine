#include <Novice.h>
#include "TitleScene.h"
#include "Sounds.h"

void TitleScene::Init() {
	titleHandle = 0;
}

void TitleScene::Update(char* keys, char* preKeys) {
	titleHandle = Novice::LoadTexture("./Resources/T.png");

	TitleAudio();

	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw() {
	Novice::DrawSprite(0, 0, titleHandle, 1.0f, 1.0f, 0.0f, WHITE);
}