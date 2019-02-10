

// Main 関数 
#include "DxLib.h"

#include "Calculation.h"
#include "AppManager.h"

using namespace std;

void CreateConsoleWindow();

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
#ifdef _DEBUG
	// デバッグ用コンソールウィンドウ作成 
	CreateConsoleWindow();
#endif

	ChangeWindowMode(true);		// windowモードで起動 

	SetBackgroundColor(0,0,0);		// 背景色 

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	// 計算テーブル初期化 
	Calculation::CalculationInitialize();

	// アプリ起動 
	AppManager *appManager = new AppManager();

	while (!appManager->IsEnd())
	{
		// メッセージ処理をDxLibに任せる 
		if (ProcessMessage() == -1)  break;

		appManager->Calc();
	}

	delete appManager;

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}


/*
	デバッグ用
	コンソール画面の生成
*/
void CreateConsoleWindow()
{
	AllocConsole();
	FILE *fp = NULL;
	freopen_s(&fp, "CONOUT$", "w", stdout);
	freopen_s(&fp,"CONIN$", "r", stdin);

	char titleBuf[512];
	HWND consoleWindow;
	RECT windowRect;

	GetConsoleTitle(titleBuf, sizeof(titleBuf));
	consoleWindow = FindWindow(NULL, titleBuf);
	GetWindowRect(consoleWindow, &windowRect);

	MoveWindow( consoleWindow, 0,0, windowRect.right - windowRect.left, windowRect.bottom - windowRect.top, TRUE);

}
