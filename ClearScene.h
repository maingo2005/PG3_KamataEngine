#pragma once
#include "IScene.h"
#include "Enemy.h"
#include "Novice.h"

class ClearScene :public IScene {
public:
	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
private:
	Enemy* enemy = new Enemy({ 100,300 }, 16, 10, true);
};