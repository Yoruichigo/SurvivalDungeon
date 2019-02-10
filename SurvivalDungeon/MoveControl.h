/*

	移動制御クラス
	移動に関するオブジェクトはこのクラスを使って下さい。

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
		Vector2*		pPosition;	// 座標はオブジェクトと運命共同体です。 
		MoveInitData	initData;	// 初期化用データを下さい。 

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



