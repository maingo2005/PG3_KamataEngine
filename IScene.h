#pragma once

//シーン名を列拳型(Enum)で定義
enum SCENE { TITLE, STAGE, CLEAR };

//シーン内での処理を行う基底クラス
class IScene {
public:
	//継承先で実装される関数
	//抽象クラスなので純粋仮想関数とする
	virtual void Init() = 0;
	virtual void Update(char* keys, char* preKeys) = 0;
	virtual void Draw() = 0;

	//仮想デストラクタを用意しないと警告される
	IScene();
	virtual ~IScene();

	//シーン番号のゲッター
	int GetSceneNo() { return sceneNo; }
protected:
	//シーン番号で管理する変数
	static int sceneNo;

};