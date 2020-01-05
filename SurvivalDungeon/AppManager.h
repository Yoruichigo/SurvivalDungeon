#pragma once

#include <memory>

#include "ObjectBase.h"

// �A�v���Ǘ����N���X
class AppManager
{
public:
	AppManager();
	~AppManager();

	void Calc();
	
	bool IsEnd();
private:
	void Draw();

	std::unique_ptr<ObjectBase> m_pChar;
};

