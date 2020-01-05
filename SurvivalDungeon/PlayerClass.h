// ÉvÉåÉCÉÑÅ[ 

#pragma once

#include "ObjectBase.h"

#include <vector>

class PlayerClass : public ObjectBase
{
	typedef ObjectBase MY_SUPER_CLASS;
public:
	PlayerClass();
	~PlayerClass();

	void Calc();

private:
	void Controller();


};



