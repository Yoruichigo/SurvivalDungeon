// ÉvÉåÉCÉÑÅ[ 

#pragma once

#include "CharaBase.h"

#include <vector>

class PlayerClass : public CharaBase
{
	typedef CharaBase MY_SUPER_CLASS;
public:
	PlayerClass();
	~PlayerClass();

	void Calc();

private:
	void Controller();


	enum MOVE_STATE
	{
		MOVE_NORMAL = 0,
		MOVE_DODGE,
		MOVE_NONE,
	};

	MOVE_STATE m_moveState;
	double m_moveSpeed;
	std::vector<std::shared_ptr<MoveBase>> m_moveList;
};



