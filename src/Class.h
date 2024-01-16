#pragma once
#include <iostream>
//��C++�У��������ͨ��Ӧ�÷���ͷ�ļ���.h��.hpp�ļ����У�����Ķ��壨����Ա������ʵ�֣�ͨ��������Ӧ��Դ�ļ���.cpp�ļ����С�����������������ߴ������֯�ԡ��ɶ��Ժ������ԣ�ͬʱҲ������ĳЩ��������Ӵ���
class Log
{
public:
    // ö��
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    };

private:
    mutable Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level);
    void Error(const char* message) const;
    void Warning(const char* message) const;
    void Info(const char* message) const;
};

class Entity {
public:
    // ���캯��
    Entity(float x, float y);
    void print() const;

private:
    float X, Y;
};