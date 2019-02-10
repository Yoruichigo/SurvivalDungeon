#include "MoveNormal.h"

#include "Calculation.h"

#include <iostream>

using namespace std;

MoveNormal::MoveNormal(const ArgMoveNormal& obj) :
	m_argData(obj)
{
}


MoveNormal::~MoveNormal()
{
}


void MoveNormal::PositionCalc()
{ 
	const Vector2& oldPos = *m_argData.pObjectPos;
	const double angle = GetAngle();
	const double speed = m_argData.moveSpeed;

	m_calcEndPos.x = oldPos.x + Calculation::GetCosinThetaCalc(angle) * speed;
	m_calcEndPos.y = oldPos.y + Calculation::GetSineThetaCalc(angle) * speed;
}
