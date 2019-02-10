
#include <DxLib.h>
#include "InputClass.h"

#include "AppManager.h"

#include "PlayerClass.h"
using namespace std;

AppManager::AppManager()
{
	m_pChar = make_unique<PlayerClass>();
}



AppManager::~AppManager()
{
}



void AppManager::Calc()
{
	InputClass::Update();	// 入力更新 

	m_pChar->Update();

	Draw();	// 描画 
}

void AppManager::Draw()
{
	// 画面クリアと裏画面に描画準備 
	ClearDrawScreen();
	SetDrawScreen(DX_SCREEN_BACK);

	InputClass::DebugDraw();

	m_pChar->TestDraw();

	// 裏画面の内容を表画面に反映します
	ScreenFlip();
}


// アプリケーションの終了チェック関数
// true 終了 / false 実行中 
bool AppManager::IsEnd()
{
	return false;
}




