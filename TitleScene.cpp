#include "TitleScene.h"

void TitleScene::Init(){}

void TitleScene::Update(char* keys, char* preKeys){
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
	bullet_->transform_.x = 0;
	bullet_->transform_.y = 0;
	bullet_->speed_ = 0;
}

void TitleScene::Draw() { Novice::DrawBox(0, 0, 1280, 740, 0.0f, RED, kFillModeSolid); }
