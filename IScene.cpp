#include "IScene.h"
#include "Novice.h"

void IScene::Update(char* keys, char* preKeys){
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE]) {

	}
}

int IScene::sceneNo = TITLE;

IScene::IScene(){}

IScene::~IScene() {};