

// Main �֐� 
#include "DxLib.h"

#include "Calculation.h"
#include "AppManager.h"

using namespace std;

void CreateConsoleWindow();

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
#ifdef _DEBUG
	// �f�o�b�O�p�R���\�[���E�B���h�E�쐬 
	CreateConsoleWindow();
#endif

	ChangeWindowMode(true);		// window���[�h�ŋN�� 

	SetBackgroundColor(0,0,0);		// �w�i�F 

	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	// �v�Z�e�[�u�������� 
	Calculation::CalculationInitialize();

	// �A�v���N�� 
	AppManager *appManager = new AppManager();

	while (!appManager->IsEnd())
	{
		// ���b�Z�[�W������DxLib�ɔC���� 
		if (ProcessMessage() == -1)  break;

		appManager->Calc();
	}

	delete appManager;

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}


/*
	�f�o�b�O�p
	�R���\�[����ʂ̐���
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
