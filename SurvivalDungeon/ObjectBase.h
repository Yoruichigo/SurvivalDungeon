/*
	�L�����̃x�[�X�N���X
	�`���ړ����s��
*/


#pragma once

#include <DxLib.h>
#include <memory>

#include "SquareBase.h"

class ObjectBase 
{
public:
	ObjectBase();
	virtual ~ObjectBase();

	void Update();

	void Draw();
	void TestDraw();		// �e�X�g�`��p 

	void SetSquare(const SquareBase& obj);

	const Vector2& GetNowPos(){ return square.Pos; }
private:
	virtual void Calc() = 0;

	SquareBase square;
};

