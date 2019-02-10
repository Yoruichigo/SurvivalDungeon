#pragma once



#include "MoveBase.h"

class MoveDodge : public MoveBase
{
	typedef MoveBase MY_SUPER_CLASS;
public:
	struct ArgMoveDodge 
	{
		double	range;	// 移動距離
		int		frame;	// 完了速度(計フレーム数)

		ArgMoveDodge()
		{
			range = 0;
			frame = 0;
		}
	};

	MoveDodge(const ArgMoveDodge&);
	virtual ~MoveDodge();

	virtual void Init() override;
	virtual bool CheckIsMoveFlg() override;

private:
	virtual void PositionCalc() override;

	ArgMoveDodge m_argData;

	bool	m_isInitSucceed;
	int		m_nowFrame;
	double	m_moveDirAngle;
	Vector2 m_startPos;
	Vector2 m_dir;
};