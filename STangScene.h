#pragma once
#include "IScene.h"
#include "Player.h"
#include "Enemy.h"
#include "Novice.h"

class StangScene :public IScene {
public:
	void Init() override;
	~StangScene();
	void Update(char* keys, char* preKeys);
	void CollisionBulletEnemy();
	void Draw() override;
private:
	Player* player = new Player({ 1280 / 2,720 / 2 }, 16, 0, false);
	Enemy* enemy = new Enemy({ 100,300 }, 16, 10, false);
};
