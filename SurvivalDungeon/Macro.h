/*

	�Ȃ񂩕֗��n�}�N��

*/

#pragma once

#include <iostream>
#include <cassert>



#ifdef _DEBUG

// �f�o�b�O���ɂ̂݃A�T�[�g�ŗ��Ƃ� 
#define DEBUG_ASSERT(x,comment)	{ if(!x){ std::cout << comment; assert(false); } }

#else	// _DEBUG 

#define DEBUG_ASSERT(x,comment)	{}

#endif	// _DEBUG

