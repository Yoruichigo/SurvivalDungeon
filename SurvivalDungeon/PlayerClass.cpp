


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
}


PlayerClass::~PlayerClass()
{
}


void PlayerClass::Calc()
{
	// プレイヤー入力チェック 
	Controller();
}


/*
	コントローラチェック
*/
void PlayerClass::Controller()
{
//	MOVE_STATE tmpState = MOVE_NONE;
//
//	// Lスティック 
//	float inputLength[2] = {InputClass::GetLX(),InputClass::GetLY()};
//	
//	for(int i = 0; i < 2; i++)
//	{
//		// 移動速度をスティックの倒し具合によって数段階に分ける 
//		float tmpLength = inputLength[i];
//		int  moveLength = 0;
//		int moveDir = 0;
//
//		if(tmpLength > 500 || tmpLength < -500)
//		{
//			moveLength = 3;
//		}
//		else if(tmpLength > 300 || tmpLength < -300)
//		{
//			moveLength = 2;
//		}
//		else if(tmpLength > 1 || tmpLength < -1)
//		{
//			moveLength = 1;
//		}
//
//		const double SpeedType[4] = {0.0f,0.7f,1.2f,2.0f};
//		//m_moveSpeed = SpeedType[moveLength];
//
//		tmpState = MOVE_NORMAL;
//	}
//
//	// ダッシュ 
//	if(InputClass::GetButton(InputClass::JOY_1))
//	{
//		tmpState = MOVE_DODGE;
//	}
//
//	// 同じ or Noneなら以下処理しない 
//	if(tmpState == MOVE_NONE ||
//		tmpState == m_moveState)
//	{
//		return;
//	}
//
//	bool isStateChange = true;
//
//	// 特殊移動中の処理 
//	switch(m_moveState)
//	{
//		case MOVE_DODGE:
//		{
//			if(m_moveList.at(MOVE_DODGE)->CheckIsMoveFlg())
//			{
//				// 回避中は終わるまで処理を変更させない 
//				isStateChange = false;
//			}
//			break;
//		}
//	}
//
//	if(isStateChange)
//	{
//		m_moveState = tmpState;
//		SetMoveType(m_moveList.at(m_moveState));
//	}
}


