#pragma once
#include "IScene.h"
#include "StageScene.h"

class OverScene : public IScene
{
public:
	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
public:
	int overHandle;
};