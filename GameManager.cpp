#include "GameManager.h"
using namespace std;//stdを省略できる

GameManager::GameManager() {
	sceneArr_[TITLE] = make_unique<TitleScene>();
	sceneArr_[STAGE] = make_unique<StageScene>();
	sceneArr_[CLEAR] = make_unique<ClearScene>();
	sceneArr_[OVER] = make_unique<OverScene>();

	currentSceneNo_ = TITLE;
}

GameManager::~GameManager() {}

int GameManager::Run(char* keys, char* preKeys) {
	while (Novice::ProcessMessage() == 0) {

		Novice::BeginFrame();
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}

		sceneArr_[currentSceneNo_]->Update(keys, preKeys);
		sceneArr_[currentSceneNo_]->Draw();
		Novice::EndFrame();

		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}
	return 0;
}