#include "Constructor.h"
#include <iostream>

// 为了确保类 Enity 的成员变量 X 和 Y 始终被初始化，你应该使用构造函数的初始化列表。初始化列表直接在构造函数声明之后使用冒号和初始化表达式来初始化成员变量，这种方法比在构造函数体内赋值更高效，尤其是对于复杂类型的成员变量。
Entity::Entity(float x, float y) : X(x), Y(y) {}

void Entity::print() const
{
	std::cout << X << ", " << Y << std::endl;
}
