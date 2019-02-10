#include "MoverBase.h"

#include <cassert>
#include "Calculation.h"


MoverBase::MoverBase()
{

}


MoverBase::~MoverBase()
{
}


/*
	�ړ����邩�ǂ���
*/
bool MoverBase::CheckIsMoveFlg()
{
	bool isMove = true;

	auto dir = GetObjPos();

	// �ړ��ʂ������Ȃ珈�����Ȃ� 
	if(dir>0)
	{
		if((*m_objData.pMoveDirPos).x == 0 &&
			(*m_objData.pMoveDirPos).y == 0)
		{
			isMove = false;
		}
	}
	else
	{
		if(((*m_objData.pMoveDirPos).x - (*m_argData.pObjectPos).x) == 0 &&
			((*m_argData.pMoveDirPos).y - (*m_argData.pObjectPos).y) == 0)
		{
			isMove = false;
		}
	}

	return isMove;
}


/*
	�v�Z����
*/
void MoverBase::Calc()
{
	// �����l�Ƃ��ē���Ă��� 
	m_calcEndPos = (*m_argData.pObjectPos);

	if(CheckIsMoveFlg())
	{
		PositionCalc();
	}
}


/*
	�A���O���v�Z
*/
double MoverBase::GetAngle()
{
	if(m_argData.isPositionAddFlg)
	{
		return Calculation::GetAngle2(Vector2(0, 0), (*m_argData.pMoveDirPos));
	}
	else
	{
		return Calculation::GetAngle2((*m_argData.pObjectPos), (*m_argData.pMoveDirPos));
	}

}