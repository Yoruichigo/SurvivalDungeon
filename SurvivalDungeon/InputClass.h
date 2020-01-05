#pragma once

/*
	入力関連の取得
*/

#include <Dxlib.h>

#include "Vector2.h"

class InputClass
{
public:
	enum JOY_BUTTON
	{
		// 最大32個まで登録可能 
		JOY_0 = 0,
		JOY_1,
		JOY_2,
		JOY_3,
		JOY_4,
		JOY_5,
		JOY_6,
		JOY_7,
		JOY_8,
		JOY_9,
		JOY_10,
		JOY_11,
		JOY_12,
		JOY_13,
		JOY_14,
		JOY_15,
		JOY_16,
		JOY_17,
		JOY_18,
		JOY_19,
		JOY_20,
		JOY_NONE,
	};

public:
	InputClass();
	~InputClass();

	static void Update();
	static void DebugDraw();

	// 入力取得関連
	static bool GetButton( JOY_BUTTON );
	static int GetPovX();		// 0 = none , 1 = Right, -1 = Left 
	static int GetPovY();		// 0 = none , 1 = Down,  -1 = Up 
	static float GetLX();		// 1000 = Right, -1000 = Left
	static float GetLY();		// 1000 = Down,  -1000 = Up
	static float GetRX();		// 1000 = Right, -1000 = Left
	static float GetRY();		// 1000 = Down,  -1000 = Up

	static const Vector2* GetJoyStickPosL(){ return &joyStickPosL; }
	static const Vector2* GetJoyStickPosR(){ return &joyStickPosR; }

private:
	static DINPUT_JOYSTATE joyState;
	static Vector2 joyStickPosL;		// Lスティック
	static Vector2 joyStickPosR;		// Rスティック
	static int keybordState[256];		// キーボード入力情報
};

