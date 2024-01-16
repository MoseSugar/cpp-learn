#include "Class.h"

void Log::SetLevel(Level level)
{
    m_LogLevel = level;
}

// �������� Error, Warning, �� Info ������û���޸��κγ�Ա���������ѽ���Щ�������Ϊ const���������Щ���������޸Ķ����״̬����˿����ڳ��������ϵ��á�

void Log::Error(const char* message) const
{
    if (m_LogLevel >= LevelError)
    {
        std::cout << "[ERROR]: " << message << std::endl;
    }
}

void Log::Warning(const char* message) const
{
    if (m_LogLevel >= LevelWarning)
    {
        std::cout << "[WARNING]: " << message << std::endl;
    }
}

void Log::Info(const char* message) const
{
    if (m_LogLevel >= LevelInfo)
    {
        std::cout << "[INFO]: " << message << std::endl;
    }
}


// Ϊ��ȷ���� Enity �ĳ�Ա���� X �� Y ʼ�ձ���ʼ������Ӧ��ʹ�ù��캯���ĳ�ʼ���б���ʼ���б�ֱ���ڹ��캯������֮��ʹ��ð�źͳ�ʼ�����ʽ����ʼ����Ա���������ַ������ڹ��캯�����ڸ�ֵ����Ч�������Ƕ��ڸ������͵ĳ�Ա������
Entity::Entity(float x, float y) : X(x), Y(y) {}

void Entity::print() const
{
    std::cout << X << ", " << Y << std::endl;
}
