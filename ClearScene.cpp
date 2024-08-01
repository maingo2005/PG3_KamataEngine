#include <Novice.h>
#include "ClearScene.h"

void ClearScene::Init() {}

void ClearScene::Update(char* keys, char* preKeys) {
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw() {
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, 0xffff0064, kFillModeSolid);
	Novice::ScreenPrintf(600, 360, "Clear");
}