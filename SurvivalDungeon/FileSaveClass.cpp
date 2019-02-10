
#include <stdio.h>
#include "FileSaveClass.h"

using namespace std;


/*
	dat形式のfileName.datデータが存在するか確認
*/
bool FileSaveClass::FileCheckDat(string fileName)
{
	string datName = fileName + ".dat";
	FILE *fp;

	if(fopen_s(&fp,datName.c_str(), "rb") != 0)
	{
		return false; // 失敗
	}

	// データ在り 
	fclose(fp);
	return true;
}


/*
	dat形式で保存
*/
bool FileSaveClass::WriteDat(string fileName, const void* data, size_t dataSize)
{
	string datName = fileName + ".dat";
	FILE *fp;
	if(fopen_s(&fp, datName.c_str(), "wb") != 0)
	{
		return false; // 失敗
	}

	fwrite(data, dataSize, 1, fp);
	fclose(fp);
	return true;
}


/*
	dat形式で読み込み
*/
bool FileSaveClass::ReadDat(string fileName, void* data, size_t dataSize)
{
	string datName = fileName + ".dat";
	FILE *fp;

	if(fopen_s(&fp, datName.c_str(), "rb") != 0)
	{
		return false; // 失敗
	}

	fread(data, dataSize, 1, fp);
	fclose(fp);
	return true;

}