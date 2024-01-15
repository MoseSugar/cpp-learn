#pragma once 

//在C++中，类的声明通常应该放在头文件（.h或.hpp文件）中，而类的定义（即成员函数的实现）通常放在相应的源文件（.cpp文件）中。这种做法有助于提高代码的组织性、可读性和重用性，同时也避免了某些编译和链接错误。
class Entity {
public:
    Entity(float x, float y);
    void print() const;

private:
    float X, Y;
};