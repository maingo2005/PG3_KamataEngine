#include <Novice.h>
#include "TitleScene.h"

void TitleScene::Init() {
	titleHandle = 0;
	titlePlayHandle = 0;
}

void TitleScene::Update(char* keys, char* preKeys) {
	titleHandle = Novice::LoadTexture("./Resources/T.png");
	titleAudioHandle = Novice::LoadAudio("./Resources/Tbgm.mp3");

	if (Novice::IsPlayingAudio(titlePlayHandle) == 0 || titlePlayHandle == -1) {
		titlePlayHandle = Novice::PlayAudio(titleAudioHandle, true, 0.1f);
	}

	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw() {
	Novice::DrawSprite(0, 0, titleHandle, 1.0f, 1.0f, 0.0f, WHITE);
}