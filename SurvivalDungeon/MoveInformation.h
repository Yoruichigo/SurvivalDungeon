/*

	移動に関する情報を管理するクラス	

	移動クラスを作成したら登録してください。
*/

#pragma once



#include "MoveNormal.h"
#include "MoveDodge.h"



enum MOVE_TYPE : unsigned int
{
	MOVE_TYPE_NORMAL = 0,
	MOVE_TYPE_DODGE,

	MOVE_TYPE_MAX
};


// 初期化用データ(外部入出力に使用予定なので、定義順等に注意) 
struct MoveInitData
{
	// 使用するならtrueを、使わないならfalseでokです。 
	bool IsTypeUseFlg[MOVE_TYPE_MAX];
	
	// 移動速度など、各必要なデータ格納用
	struct {
		MoveNormal::ArgMoveNormal normal;
		MoveDodge::ArgMoveDodge dodge;
	} Data ;
};

