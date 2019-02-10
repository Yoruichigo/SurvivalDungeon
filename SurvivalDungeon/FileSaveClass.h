/*
	データの書き込み/読み込みを行う
	構造体のポインタで管理する

	※データの中に可変する変数を使用しないで下さい！
	※例:string型→char[128] 等にしてください
*/

#pragma once

#include <string>


class FileSaveClass
{
public:
	FileSaveClass() {}
	virtual ~FileSaveClass() {}

	// .dat形式での管理関数 
	static bool FileCheckDat(std::string fileName);
	static bool WriteDat(std::string fileName, const void* data, size_t dataSize);
	static bool ReadDat(std::string fileName, void* data, size_t dataSize);
};

