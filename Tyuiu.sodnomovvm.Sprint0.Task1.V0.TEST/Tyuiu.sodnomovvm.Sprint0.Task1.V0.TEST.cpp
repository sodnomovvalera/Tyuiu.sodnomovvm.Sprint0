#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.sodnomovvm.Sprint0.Task2.V0.Lib/Tyuiu.sodnomovvm.Sprint0.Task2.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint0Task2V0* service = new Service();
			int a = 4;
			int b = 5;
			int c;

			//run
			c = service->Add(a, b);

			//Valid
			Assert::AreEqual(45, c)

		};
	};
}
