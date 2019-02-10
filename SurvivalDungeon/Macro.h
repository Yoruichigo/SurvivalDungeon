/*

	なんか便利系マクロ

*/

#pragma once

#include <iostream>
#include <cassert>



#ifdef _DEBUG

// デバッグ時にのみアサートで落とす 
#define DEBUG_ASSERT(x,comment)	{ if(!x){ std::cout << comment; assert(false); } }

#else	// _DEBUG 

#define DEBUG_ASSERT(x,comment)	{}

#endif	// _DEBUG

