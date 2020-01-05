
#include "MoveBase.h"

#include <cassert>
#include "Calculation.h"


MoveBase::MoveBase()
{

}


MoveBase::~MoveBase()
{
}


/*
	移動するかどうか
*/
bool MoveBase::CheckIsMoveFlg()
{
//	bool isMove = true;
//
//	auto dir = GetObjPos();
//
//	// 移動量が無いなら処理しない 
//	if(dir>0)
//	{
//		if((*m_objData.pMoveDirPos).x == 0 &&
//			(*m_objData.pMoveDirPos).y == 0)
//		{
//			isMove = false;
//		}
//	}
//	else
//	{
//		if(((*m_objData.pMoveDirPos).x - (*m_argData.pObjectPos).x) == 0 &&
//			((*m_argData.pMoveDirPos).y - (*m_argData.pObjectPos).y) == 0)
//		{
//			isMove = false;
//		}
//	}
//
//	return isMove;
	return true;

}


/*
	計算処理
*/
void MoveBase::Calc()
{
//	// 初期値として入れておく 
//	m_calcEndPos = (*m_argData.pObjectPos);
//
//	if(CheckIsMoveFlg())
//	{
//		PositionCalc();
//	}
}


/*
	アングル計算
*/
double MoveBase::GetAngle()
{
//	if(m_argData.isPositionAddFlg)
//	{
//		return Calculation::GetAngle2(Vector2(0, 0), (*m_argData.pMoveDirPos));
//	}
//	else
//	{
//		return Calculation::GetAngle2((*m_argData.pObjectPos), (*m_argData.pMoveDirPos));
//	}
//
	return 0;
}