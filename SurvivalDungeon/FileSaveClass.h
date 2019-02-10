/*
	�f�[�^�̏�������/�ǂݍ��݂��s��
	�\���̂̃|�C���^�ŊǗ�����

	���f�[�^�̒��ɉς���ϐ����g�p���Ȃ��ŉ������I
	����:string�^��char[128] ���ɂ��Ă�������
*/

#pragma once

#include <string>


class FileSaveClass
{
public:
	FileSaveClass() {}
	virtual ~FileSaveClass() {}

	// .dat�`���ł̊Ǘ��֐� 
	static bool FileCheckDat(std::string fileName);
	static bool WriteDat(std::string fileName, const void* data, size_t dataSize);
	static bool ReadDat(std::string fileName, void* data, size_t dataSize);
};

