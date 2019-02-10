


#include "Easing.h"
#include "InputClass.h"

#include "PlayerClass.h"

#include "MoveNormal.h"
#include "MoveDodge.h"

#include <cassert>

using namespace std;

PlayerClass::PlayerClass() :
	MY_SUPER_CLASS()
{
	m_moveSpeed = 2.0;

	m_moveList.resize(MOVE_NONE);

	for(int i = 0 ; i < MOVE_NONE ; i++)
	{
		MoveBase::ArgMoveBase tmpBase;
		tmpBase.isPositionAddFlg = true;
		tmpBase.pObjectPos = GetNowPos();
		tmpBase.pMoveDirPos = InputClass::GetJoyStickPosL();

		switch(i)
		{
			default:
			{
				assert(false);
				break;
			}
			case MOVE_NORMAL:
			{
				MoveNormal::ArgMoveNormal tmp;
				tmp.BaseSet(tmpBase);
				tmp.moveSpeed = &m_moveSpeed;

				m_moveList.at(i) = make_shared<MoveNormal>(tmp);
				break;
			}
			case MOVE_DODGE:
			{
				MoveDodge::ArgMoveDodge tmp;
				tmp.BaseSet(tmpBase);
				tmp.range = 85;
				tmp.frame = 44;

				m_moveList.at(i) = make_shared<MoveDodge>(tmp);
				break;
			}
		}
	}
}


PlayerClass::~PlayerClass()
{
}


void PlayerClass::Calc()
{
	// �v���C���[���̓`�F�b�N 
	Controller();
}


/*
	�R���g���[���`�F�b�N
*/
void PlayerClass::Controller()
{
	MOVE_STATE tmpState = MOVE_NONE;

	// L�X�e�B�b�N 
	float inputLength[2] = {InputClass::GetLX(),InputClass::GetLY()};
	
	for(int i = 0; i < 2; i++)
	{
		// �ړ����x���X�e�B�b�N�̓|����ɂ���Đ��i�K�ɕ����� 
		float tmpLength = inputLength[i];
		int  moveLength = 0;
		int moveDir = 0;

		if(tmpLength > 500 || tmpLength < -500)
		{
			moveLength = 3;
		}
		else if(tmpLength > 300 || tmpLength < -300)
		{
			moveLength = 2;
		}
		else if(tmpLength > 1 || tmpLength < -1)
		{
			moveLength = 1;
		}

		const double SpeedType[4] = {0.0f,0.7f,1.2f,2.0f};
		//m_moveSpeed = SpeedType[moveLength];

		tmpState = MOVE_NORMAL;
	}

	// �_�b�V�� 
	if(InputClass::GetButton(InputClass::JOY_1))
	{
		tmpState = MOVE_DODGE;
	}

	// ���� or None�Ȃ�ȉ��������Ȃ� 
	if(tmpState == MOVE_NONE ||
		tmpState == m_moveState)
	{
		return;
	}

	bool isStateChange = true;

	// ����ړ����̏��� 
	switch(m_moveState)
	{
		case MOVE_DODGE:
		{
			if(m_moveList.at(MOVE_DODGE)->CheckIsMoveFlg())
			{
				// ��𒆂͏I���܂ŏ�����ύX�����Ȃ� 
				isStateChange = false;
			}
			break;
		}
	}

	if(isStateChange)
	{
		m_moveState = tmpState;
		SetMoveType(m_moveList.at(m_moveState));
	}
}


