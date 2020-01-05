/*

	�ړ�����N���X
	�ړ��Ɋւ���I�u�W�F�N�g�͂��̃N���X���g���ĉ������B

*/


#pragma once

#include <vector>
#include <memory>
#include "Vector2.h"

#include "MoveInformation.h"


class MovementControl
{
public:
	struct ArgMovementControl
	{
		Vector2*		pPosition;	// ���W�̓I�u�W�F�N�g�Ɖ^�������̂ł��B 
		MoveInitData	initData;	// �������p�f�[�^���������B 

		ArgMovementControl(){
			pPosition = nullptr;
		}
	};

public:
	MovementControl(const ArgMovementControl&);
	~MovementControl();

	const Vector2& GetPosition();

private:
	Vector2* m_pObjPos;
	
	enum MOVE_STATE
	{
		MOVE_NORMAL = 0,
		MOVE_DODGE,
		MOVE_NONE,
	};

	std::vector<std::shared_ptr<MoveBase>> m_moveList;
};



