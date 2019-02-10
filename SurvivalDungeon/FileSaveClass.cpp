
#include <stdio.h>
#include "FileSaveClass.h"

using namespace std;


/*
	dat�`����fileName.dat�f�[�^�����݂��邩�m�F
*/
bool FileSaveClass::FileCheckDat(string fileName)
{
	string datName = fileName + ".dat";
	FILE *fp;

	if(fopen_s(&fp,datName.c_str(), "rb") != 0)
	{
		return false; // ���s
	}

	// �f�[�^�݂� 
	fclose(fp);
	return true;
}


/*
	dat�`���ŕۑ�
*/
bool FileSaveClass::WriteDat(string fileName, const void* data, size_t dataSize)
{
	string datName = fileName + ".dat";
	FILE *fp;
	if(fopen_s(&fp, datName.c_str(), "wb") != 0)
	{
		return false; // ���s
	}

	fwrite(data, dataSize, 1, fp);
	fclose(fp);
	return true;
}


/*
	dat�`���œǂݍ���
*/
bool FileSaveClass::ReadDat(string fileName, void* data, size_t dataSize)
{
	string datName = fileName + ".dat";
	FILE *fp;

	if(fopen_s(&fp, datName.c_str(), "rb") != 0)
	{
		return false; // ���s
	}

	fread(data, dataSize, 1, fp);
	fclose(fp);
	return true;

}