﻿// Tyuiu.sodnomovvm.Sprint0.Tusk3V0.LIB.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: Это пример библиотечной функции.
class Service1 :public ISprint0Task3

{
	virtual int SummV3(int a, int b, int c) override
	{
		return a + b + c;
	};
};
