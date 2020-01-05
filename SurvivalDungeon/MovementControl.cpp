/*

	�ړ�����N���X

*/

#include "MovementControl.h"

#include "Macro.h"

using namespace std;


MovementControl::MovementControl(const ArgMovementControl& rArg)
{
	m_pObjPos = rArg.pPosition;

	// �ړ��p�N���X�𐶐� 
	for (int i = 0 ; i < MOVE_TYPE_MAX ; i++)
	{
		if (rArg.initData.IsTypeUseFlg[i] == false)
		{
			// �g�p�\��̖����ړ����@�́A��p�N���X�Ŗ��߂Ă��� 
		}
		else
		{
			switch (i)
			{
				default:
				{
					DEBUG_ASSERT(false, "move type none\n");
					break;
				}
				case MOVE_TYPE_NORMAL:
				{
					MoveNormal::ArgMoveNormal tmp;
					tmp.moveSpeed = 10;

					m_moveList.at(i) = make_shared<MoveNormal>(tmp);
					break;
				}
				case MOVE_TYPE_DODGE:
				{
					MoveDodge::ArgMoveDodge tmp;
					tmp.range = 85;
					tmp.frame = 44;

					m_moveList.at(i) = make_shared<MoveDodge>(tmp);
					break;
				}
			}
		}
	}
}

MovementControl::~MovementControl()
{

}