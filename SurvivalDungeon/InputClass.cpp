
#include <cassert>
#include "InputClass.h"


DINPUT_JOYSTATE InputClass::joyState;
Vector2 InputClass::joyStickPosL;
Vector2 InputClass::joyStickPosR;

InputClass::InputClass()
{
}


InputClass::~InputClass()
{
}


/*
	入力更新
*/
void InputClass::Update()
{
	GetJoypadDirectInputState(DX_INPUT_PAD1, &joyState);

	joyStickPosL.x = joyState.X;
	joyStickPosL.y = joyState.Y;
	joyStickPosR.y = joyState.Z;
	joyStickPosR.x = joyState.Rz;
}

#include "Calculation.h"

/*
	入力情報の表示
*/
void InputClass::DebugDraw()
{
	// 画面に構造体の中身を描画
	int Color = GetColor(255, 255, 255);
	DrawFormatString(0, 0, Color, "X:%d Y:%d Z:%d",
		joyState.X, joyState.Y, joyState.Z);
	DrawFormatString(0, 16, Color, "Rx:%d Ry:%d Rz:%d",
		joyState.Rx, joyState.Ry, joyState.Rz);
	DrawFormatString(0, 32, Color, "Slider 0:%d 1:%d",
		joyState.Slider[0], joyState.Slider[1]);
	DrawFormatString(0, 48, Color, "POV 0:%d 1:%d 2:%d 3:%d",
		joyState.POV[0], joyState.POV[1],
		joyState.POV[2], joyState.POV[3]);
	DrawString(0, 64, "Button", Color);
	for(int i = 0; i < 32; i++)
	{
		DrawFormatString(64 + i % 8 * 64, 64 + i / 8 * 16, Color,
			"%2d:%d", i, joyState.Buttons[i]);
	}


	DrawFormatString(0, 160, Color, "Radian = %f", Calculation::GetRadian2(Vector2(0, 0), Vector2(joyState.X, joyState.Y)));
	DrawFormatString(0, 160+16,Color, "Angle = %f",Calculation::GetAngle2(Vector2(0,0),Vector2(joyState.X,joyState.Y)));


	DrawFormatString(0, 160+16*2, Color, "Radian = %f", Calculation::GetRadian2(Vector2(GetRX()+0.01, GetRY()), Vector2(GetLX(), GetLY())));
	DrawFormatString(0, 160 + 16*3, Color, "Angle = %f", Calculation::GetAngle2(Vector2(GetRX()+0.02, GetRY()), Vector2(GetLX(), GetLY())));
}


// 入力関連 
bool InputClass::GetButton(JOY_BUTTON buttonNo)
{
	assert( buttonNo < JOY_NONE );

	if(joyState.Buttons[buttonNo] != 0)
	{
		return true;
	}

	return false;
}

int InputClass::GetPovX()
{
	switch(joyState.POV[0])
	{
		// 右
		case 4500:
		case 9000:
		case 13500:
		{
			return 1;
		}

		// 左 
		case 22500:
		case 27000:
		case 31500:
		{
			return -1;
		}
	}

	return 0;
}

int InputClass::GetPovY()
{

	switch(joyState.POV[0])
	{
		// 下 
		case 13500:
		case 18000:
		case 22500:
		{
			return 1;
		}

		// 上
		case 31500:
		case 0:
		case 4500:
		{
			return -1;
		}
	}

	return 0;
}

float InputClass::GetLX()
{
	return joyState.X;
}

float InputClass::GetLY()
{
	return joyState.Y;
}

float InputClass::GetRX()
{
	return joyState.Z;
}

float InputClass::GetRY()
{
	return joyState.Rz;
}