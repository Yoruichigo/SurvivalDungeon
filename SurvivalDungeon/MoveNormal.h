#pragma once

/*
	�����I�Ȉړ��p
	�w������Ɍ������Ĉ�葬�x�ňړ����邾��
*/

#include "MoveBase.h"

class MoveNormal : public MoveBase
{
	typedef MoveBase MY_SUPER_CLASS;
public:
	struct ArgMoveNormal
	{
		double moveSpeed;
	};

	MoveNormal(const ArgMoveNormal&);
	virtual ~MoveNormal();

	virtual void PositionCalc();

private:
	ArgMoveNormal m_argData;
};

