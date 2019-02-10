#include "ObjectBase.h"

using namespace std;


ObjectBase::ObjectBase()
{
	square.Set(0,0,40,40);
}


ObjectBase::~ObjectBase()
{
}


/*
	更新
*/
void ObjectBase::Update()
{
	Calc();
}


/*
	描画
*/
void ObjectBase::Draw()
{

}


/*
	テスト用四角表示
*/
void ObjectBase::TestDraw()
{
	square.TestDraw();
}




/*
	四角データセット
*/
void ObjectBase::SetSquare(const SquareBase& obj)
{
	memcpy(&square,&obj,sizeof(square));
}


