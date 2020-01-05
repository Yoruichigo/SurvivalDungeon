#pragma once

#include <DxLib.h>

#include "Vector2.h"

/*
	���㒸�_�n�̎l�p
*/
struct SquareBase
{
	SquareBase(){ Pos.x = Pos.y = Size.x = Size.y = 0; }
	SquareBase(double x, double y, double w, double h){ Set(x, y, w, h); }

	void Set(double x, double y, double w, double h)
	{
		Pos.Set(x,y);
		Size.Set(w,h);
	}

	// ���`��p	 
	virtual void TestDraw()
	{
		auto color = GetColor(150, 150, 255);
		DrawBox(Pos.x, Pos.y, Pos.x + Size.x, Pos.y + Size.y, color, true);
	}

	Vector2 Pos;				// ����̍��W  
	Vector2 Size;				// �E���܂ł̃T�C�Y 
};








