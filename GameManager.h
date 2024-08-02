#pragma once

#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"
#include "OverScene.h"
#include <Novice.h>
using namespace std;//stdを省略できる

class GameManager
{
public:

	GameManager();

	~GameManager();

	int Run(char* keys, char* preKeys);

private:
	unique_ptr<IScene> sceneArr_[4];

	int currentSceneNo_;
	int prevSceneNo_;
};