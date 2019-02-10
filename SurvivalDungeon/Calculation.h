#pragma once


/*
	計算補助を行うクラスです。
	角度や速度計算などを行います。

	pi = DX_PIを使用
*/

#include "Vector2.h"

namespace Calculation
{
	// テーブル作成とかの為に呼び出してください 
	void CalculationInitialize();


	// 高速用、予め作成したテーブルから参照 (int型 0°～359°) 
	double GetCosinThetaTable(int angle);		// x座標の取得等に 
	double GetSineThetaTable(int angle);		// y座標の取得等に


	// 精度が欲しい場合はこっち使ってください 
	double GetRadian2(const Vector2& pos1, const Vector2& pos2);
	double GetAngle2(const Vector2& pos1, const Vector2& pos2);
	int    GetAngle2Int(const Vector2& pos1, const Vector2& pos2);
	double GetCosinThetaCalc(double angle);
	double GetSineThetaCalc(double angle);





};

