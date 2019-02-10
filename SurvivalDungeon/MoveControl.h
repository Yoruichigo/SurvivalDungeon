/*

	�ړ�����N���X
	�ړ��Ɋւ���I�u�W�F�N�g�͂��̃N���X���g���ĉ������B

*/


#pragma once

#include <vector>
#include <memory>
#include "Vector2.h"

#include "MoveInformation.h"


class MoveControl
{
public:
	struct ArgMoveControl
	{
		Vector2*		pPosition;	// ���W�̓I�u�W�F�N�g�Ɖ^�������̂ł��B 
		MoveInitData	initData;	// �������p�f�[�^���������B 

		ArgMoveControl(){
			pPosition = nullptr;
		}
	};

public:
	MoveControl(const ArgMoveControl&);
	~MoveControl();

	const Vector2& GetPosition();

private:
	Vector2* m_pObjPos;

	std::vector<std::shared_ptr<MoveBase>> m_moveList;
};



