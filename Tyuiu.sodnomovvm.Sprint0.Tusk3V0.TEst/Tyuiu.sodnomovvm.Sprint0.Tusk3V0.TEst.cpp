#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.sodnomovvm.Sprint0.Tusk3V0.LIB/Tyuiu.sodnomovvm.Sprint0.Tusk3V0.LIB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UNitTest2
{
	TEST_CLASS(UNitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3* date = new Service1();
			int a = 3;
			int b = 4;
			int c = 5;
			int d;

			d = date->SummV3(a, b, c);

			Assert::AreEqual(12, d);
		};
	};
}
