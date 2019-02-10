/*

	�ړ��Ɋւ�������Ǘ�����N���X	

	�ړ��N���X���쐬������o�^���Ă��������B
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


// �������p�f�[�^(�O�����o�͂Ɏg�p�\��Ȃ̂ŁA��`�����ɒ���) 
struct MoveInitData
{
	// �g�p����Ȃ�true���A�g��Ȃ��Ȃ�false��ok�ł��B 
	bool IsTypeUseFlg[MOVE_TYPE_MAX];
	
	// �ړ����x�ȂǁA�e�K�v�ȃf�[�^�i�[�p
	struct {
		MoveNormal::ArgMoveNormal normal;
		MoveDodge::ArgMoveDodge dodge;
	} Data ;
};

