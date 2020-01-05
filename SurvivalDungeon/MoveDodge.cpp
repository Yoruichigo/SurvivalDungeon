
#include "MoveDodge.h"

#include "Easing.h"
#include "Calculation.h"

#include <iostream>

using namespace std;

MoveDodge::MoveDodge(const ArgMoveDodge& obj) :
	m_argData(obj)
{

}


MoveDodge::~MoveDodge()
{
}


void MoveDodge::Init()
{
	m_isInitSucceed = MY_SUPER_CLASS::CheckIsMoveFlg();
	m_nowFrame = 0;

	const double angle = GetAngle();

	//m_startPos = GetPosition();
	m_dir.x = Calculation::GetCosinThetaCalc(angle);
	m_dir.y = Calculation::GetSineThetaCalc(angle);
}


bool MoveDodge::CheckIsMoveFlg()
{
	if(!m_isInitSucceed)
	{
		return false;
	}

	if(m_nowFrame >= m_argData.frame)
	{
		return false;
	}

	return true;
}

void MoveDodge::PositionCalc()
{
	m_nowFrame++;

	double easVal = Easing::OutQuint(m_nowFrame, m_argData.frame);

//	m_calcEndPos.x = m_startPos.x + (m_dir.x * m_argData.range * easVal);
//	m_calcEndPos.y = m_startPos.y + (m_dir.y * m_argData.range * easVal);
}


