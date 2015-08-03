#pragma once

#ifndef _MEMORY_INFO_H
#define _MEMORY_INFO_H

#include <iostream>
#include <Windows.h>

using namespace std;

#define DIV 1024   // MB/KB
#define WIDTH 7

class MemoryInfo
{
public:
	MemoryInfo();
	~MemoryInfo();

	MEMORYSTATUSEX statex;

	DWORDLONG GetTotalPhysMemSize();
	DWORDLONG GetAvailPhysMemSize();
	DWORDLONG GetUsedPhysMemSize();

	DWORDLONG GetTotalPageFileSize();
	DWORDLONG GetAvailPageFileSize();
	DWORDLONG GetTotalVirtMemSize();
	DWORDLONG GetAvailVirtMemSize();

	DWORD GetMemoryUsedRate();

private:

	DWORDLONG TotalPhysMemSize;		//�ܹ������ڴ�
	DWORDLONG AvailPhysMemSize;		//���������ڴ�
	DWORDLONG TotalPageFileSize;	//ȫ��ҳ���ļ�
	DWORDLONG AvailPageFileSize;	//ʣ��ҳ���ļ�
	DWORDLONG TotalVirtMemSize;		//ȫ�������ڴ�
	DWORDLONG AvailVirtMemSize;		//���������ڴ�

	DWORD MemUsedRate;
};

#endif

