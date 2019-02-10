

#include <Dxlib.h>
#include <vector>
#include <math.h>


#include "Calculation.h"


using namespace std;


#define ANGLE_TABLE_NUM		(360)
#define ANGLE_90			(90.0)
#define ANGLE_180			(180.0)
#define ANGLE_360			(360.0)

// 変数など 
static vector<double> s_cosinTable;
static vector<double> s_sineTable;


namespace Calculation
{
	// 初期化 
	void CalculationInitialize()
	{
		s_cosinTable.resize(ANGLE_TABLE_NUM);
		s_sineTable.resize(ANGLE_TABLE_NUM);

		for(int i = 0; i < ANGLE_TABLE_NUM; i++)
		{
			s_cosinTable.at(i) = GetCosinThetaCalc(i);
			s_sineTable.at(i) = GetSineThetaCalc(i);
		}
	}

	// テーブルから取得 
	double GetCosinThetaTable(int angle)
	{
		angle = angle % ANGLE_TABLE_NUM;
		return s_cosinTable.at(angle);
	}

	double GetSineThetaTable(int angle)
	{
		angle = angle % ANGLE_TABLE_NUM;
		return s_sineTable.at(angle);
	}

	// 計算 
	double GetRadian2(const Vector2& pos1, const Vector2& pos2)
	{
		return atan2(pos2.y - pos1.y, pos2.x - pos1.x);
	}


	double GetAngle2(const Vector2& pos1, const Vector2& pos2)
	{
		const double tmp2 = 2;
		double rad = atan2(pos2.y - pos1.y, pos2.x - pos1.x);

		if(rad < 0)
		{
			rad = rad + tmp2 * DX_PI;
		}

		return (rad * ANGLE_360 / (tmp2*DX_PI));
	}


	int GetAngle2Int(const Vector2& pos1, const Vector2& pos2)
	{
		return floor(GetAngle2(pos1,pos2));
	}


	double GetCosinThetaCalc(double angle)
	{
		return cos(angle * DX_PI / ANGLE_180);
	}


	double GetSineThetaCalc(double angle)
	{
		return sin(angle * DX_PI / ANGLE_180);
	}


};
