#include "Constructor.h"
#include <iostream>

// Ϊ��ȷ���� Enity �ĳ�Ա���� X �� Y ʼ�ձ���ʼ������Ӧ��ʹ�ù��캯���ĳ�ʼ���б���ʼ���б�ֱ���ڹ��캯������֮��ʹ��ð�źͳ�ʼ�����ʽ����ʼ����Ա���������ַ������ڹ��캯�����ڸ�ֵ����Ч�������Ƕ��ڸ������͵ĳ�Ա������
Entity::Entity(float x, float y) : X(x), Y(y) {}

void Entity::print() const
{
	std::cout << X << ", " << Y << std::endl;
}
