/*
	キャラのベースクラス
	描画や移動を行う
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
	void TestDraw();		// テスト描画用 

	void SetSquare(const SquareBase& obj);

	const Vector2& GetNowPos(){ return square.Pos; }
private:
	virtual void Calc() = 0;

	SquareBase square;
};

