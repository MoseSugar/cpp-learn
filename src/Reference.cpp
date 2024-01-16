#include "Reference.h"

static void Increment_prt(int* value)
{
	(*value)++;
}

static void Increment_ref(int& value)
{
	value++;
}

void ReferenceTest()
{
	int a = 5;
	int b = 8;

	// ����ֻ��ָ����﷨�ǣ���������һ��������ʵ������������һ����ref�ڱ����ref���ᱻ�滻��a
	int& ref = a;

	// �ȼ��� a = 6
	ref = 6;

	// �ȼ��� a = b = 8
	ref = b;
	Increment_prt(&a);
	Increment_ref(a);
	std::cout << a << std::endl;
}
