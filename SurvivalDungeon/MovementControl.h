/*

	移動制御クラス
	移動に関するオブジェクトはこのクラスを使って下さい。

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
		Vector2*		pPosition;	// 座標はオブジェクトと運命共同体です。 
		MoveInitData	initData;	// 初期化用データを下さい。 

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



