#include "ClearScene.h"

void ClearScene::Init(){}

void ClearScene::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = CLEAR;
	}
}

void ClearScene::Draw(){}
