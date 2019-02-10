#pragma once

/*
	直線的な移動用
	指定方向に向かって一定速度で移動するだけ
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

