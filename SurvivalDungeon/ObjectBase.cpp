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
	�X�V
*/
void ObjectBase::Update()
{
	Calc();
}


/*
	�`��
*/
void ObjectBase::Draw()
{

}


/*
	�e�X�g�p�l�p�\��
*/
void ObjectBase::TestDraw()
{
	square.TestDraw();
}




/*
	�l�p�f�[�^�Z�b�g
*/
void ObjectBase::SetSquare(const SquareBase& obj)
{
	memcpy(&square,&obj,sizeof(square));
}


