
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
	InputClass::Update();	// ���͍X�V 

	m_pChar->Update();

	Draw();	// �`�� 
}

void AppManager::Draw()
{
	// ��ʃN���A�Ɨ���ʂɕ`�揀�� 
	ClearDrawScreen();
	SetDrawScreen(DX_SCREEN_BACK);

	InputClass::DebugDraw();

	m_pChar->TestDraw();

	// ����ʂ̓��e��\��ʂɔ��f���܂�
	ScreenFlip();
}


// �A�v���P�[�V�����̏I���`�F�b�N�֐�
// true �I�� / false ���s�� 
bool AppManager::IsEnd()
{
	return false;
}




