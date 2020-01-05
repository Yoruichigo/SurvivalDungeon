#pragma once
/*
	�ړ������̊��N���X

*/

#include "Vector2.h"


class MoveBase
{
public:
	MoveBase();
	virtual ~MoveBase();

	virtual void Calc();

	double GetAngle();


	virtual void Init(){};
	virtual void PositionCalc() = 0;
	virtual bool CheckIsMoveFlg();


private:
};


/*

�R�s�y�p �p���N���X�e���v��

///////////////
// h


#pragma once

#include "MoveBase.h"

class MoveNormal : public MoveBase
{
	typedef MoveBase MY_SUPER_CLASS;
public:
	struct ArgMoveNormal : public ArgMoveBase
	{
	};

	MoveNormal(const ArgMoveNormal&);
	virtual ~MoveNormal();

	virtual void PositionCalc();

private:
	ArgMoveNormal m_argData;
};


// h
//////////////
// cpp 


#include "MoveNormal.h"

using namespace std;

MoveNormal::MoveNormal(const ArgMoveNormal& obj) :
	MY_SUPER_CLASS(obj),
	m_argData(obj)
{
}


MoveNormal::~MoveNormal()
{
}


void MoveNormal::PositionCalc()
{
}


// cpp
/////////////

*/

