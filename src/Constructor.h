#pragma once 

//��C++�У��������ͨ��Ӧ�÷���ͷ�ļ���.h��.hpp�ļ����У�����Ķ��壨����Ա������ʵ�֣�ͨ��������Ӧ��Դ�ļ���.cpp�ļ����С�����������������ߴ������֯�ԡ��ɶ��Ժ������ԣ�ͬʱҲ������ĳЩ��������Ӵ���
class Entity {
public:
    Entity(float x, float y);
    void print() const;

private:
    float X, Y;
};