#include <Novice.h>
#include "OverScene.h"

void OverScene::Init() {}

void OverScene::Update(char* keys, char* preKeys) {
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void OverScene::Draw() {
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, 0xffff0064, kFillModeSolid);
	Novice::ScreenPrintf(600, 360, "Over");
}