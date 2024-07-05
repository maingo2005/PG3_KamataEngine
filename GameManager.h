#pragma once
#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "STangScene.h"
#include "ClearScene.h"
#include "Novice.h"

class GameManager {
public:

	GameManager();
	~GameManager();

	int Run(char* keys, char* preKeys);

private:
	std::unique_ptr<IScene>sceneArr_[3];

	int currentSceneNo_;
	int prevSceneNo_;
};
