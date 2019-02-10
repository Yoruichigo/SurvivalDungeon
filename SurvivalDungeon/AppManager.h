#pragma once

#include <memory>

#include "CharaBase.h"

// アプリ管理基底クラス
class AppManager
{
public:
	AppManager();
	~AppManager();

	void Calc();
	
	bool IsEnd();
private:
	void Draw();

	std::unique_ptr<CharaBase> m_pChar;
};

