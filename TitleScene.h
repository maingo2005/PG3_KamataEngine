#pragma once
#include "IScene.h"
#include "ClearScene.h"
#include "OverScene.h"

class TitleScene : public IScene
{
public:

	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;

public:
	int titleHandle;
	int titleAudioHandle;
	int titlePlayHandle;
};