#pragma once

/*
	�ړ��p�̃x�[�X�N���X
	�ړ��������s���ꍇ�͂��̃N���X���p�����č쐬���Ă��������B

	���A�N�Z�X�ʂ����炷���߂ɁA���ʂ̃|�C���^�Ǘ����s���Ă܂��B
*/

/*
	�p���N���X�Ɋւ���

	void PositionCalc()�֐���override���ď������s���Ă��������B

	�������I�������A���L�̕ϐ��Ɍ��ʂ����Ă��������B
	m_calcEndPos
*/

#include "ObjectBase.h"

class MoveControl;

class MoverBase : public ObjectBase
{
public:
	MoverBase();
	virtual ~MoverBase();

	

	virtual double GetAngle();

private:

	Vector2 m_dir;


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