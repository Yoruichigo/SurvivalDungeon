
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
	�ړ����邩�ǂ���
*/
bool MoveBase::CheckIsMoveFlg()
{
//	bool isMove = true;
//
//	auto dir = GetObjPos();
//
//	// �ړ��ʂ������Ȃ珈�����Ȃ� 
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
	�v�Z����
*/
void MoveBase::Calc()
{
//	// �����l�Ƃ��ē���Ă��� 
//	m_calcEndPos = (*m_argData.pObjectPos);
//
//	if(CheckIsMoveFlg())
//	{
//		PositionCalc();
//	}
}


/*
	�A���O���v�Z
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