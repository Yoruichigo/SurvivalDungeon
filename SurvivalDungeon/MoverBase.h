#pragma once

/*
	移動用のベースクラス
	移動処理を行う場合はこのクラスを継承して作成してください。

	※アクセス量を減らすために、多量のポインタ管理を行ってます。
*/

/*
	継承クラスに関して

	void PositionCalc()関数をoverrideして処理を行ってください。

	処理が終わったら、下記の変数に結果を入れてください。
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

コピペ用 継承クラステンプレ

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