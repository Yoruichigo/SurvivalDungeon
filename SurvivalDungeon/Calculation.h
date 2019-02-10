#pragma once


/*
	�v�Z�⏕���s���N���X�ł��B
	�p�x�⑬�x�v�Z�Ȃǂ��s���܂��B

	pi = DX_PI���g�p
*/

#include "Vector2.h"

namespace Calculation
{
	// �e�[�u���쐬�Ƃ��ׂ̈ɌĂяo���Ă������� 
	void CalculationInitialize();


	// �����p�A�\�ߍ쐬�����e�[�u������Q�� (int�^ 0���`359��) 
	double GetCosinThetaTable(int angle);		// x���W�̎擾���� 
	double GetSineThetaTable(int angle);		// y���W�̎擾����


	// ���x���~�����ꍇ�͂������g���Ă������� 
	double GetRadian2(const Vector2& pos1, const Vector2& pos2);
	double GetAngle2(const Vector2& pos1, const Vector2& pos2);
	int    GetAngle2Int(const Vector2& pos1, const Vector2& pos2);
	double GetCosinThetaCalc(double angle);
	double GetSineThetaCalc(double angle);





};

