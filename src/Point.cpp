#include "Point.h"


// ָ��ֻ�Ǵ洢�ڴ��ַ��һ��������ָ��Ĵ�С��ϵͳ�йأ�32λϵͳΪ4�ֽڣ�64λϵͳΪ8�ֽ�

void PointTest()
{
	int var = 8;
	// ����һ��ָ�������ָ��var
	int* ptr = &var;
	// �����ã���ȡָ��ָ���ֵ����ֵΪ10 �ȼ��� var = 10
	*ptr = 10;

	// ����һ��ָ�������ָ��8bit��char����
	char* buffer = new char[8];
	// ��bufferָ����ڴ�����
	memset(buffer, 0, 8);
	// ����һ��ָ�������ָ��bufferָ����ڴ�
	char** doublePointer = &buffer;
	// ��bufferָ����ڴ�����
	delete[] buffer;
	std::cin.get();
}