#include <iostream>
#include "Point.h"
#include "Reference.h"
#include "Class.h"

// external linkage ����ȥѰ�������ļ��е�ͬ������
extern int s_Variable;
int main()
{

	// PointTest();
	ReferenceTest();

	Log log;
	log.SetLevel(Log::LevelError);
	log.Info("Hello!");
	log.Warning("Hello!");
	log.Error("Hello!");

	Entity e(10.0f, 5.0f);
	e.print();
	std::cin.get();
}