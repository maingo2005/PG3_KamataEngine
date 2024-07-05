#pragma once
#include "IScene.h"
#include "Bullet.h"
#include "Novice.h"

class TitleScene :public IScene {
public:
	void Init() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
private:
	Bullet* bullet_ = new Bullet({ 0,0 }, 10, 10, false);
};