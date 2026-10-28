#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_6.2 it.cpp" // шлях до файлу проєкту з функціями (ітераційний)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:

		TEST_METHOD(TestIndexOfMax)
		{
			int a[5] = { 3, -5, 8, 1, -7 };
			int b[5] = { 5, 5, -2, -2, 0 };
			Assert::AreEqual(2, IndexOfMax(a, 5)); // звичайний випадок
			Assert::AreEqual(0, IndexOfMax(b, 5)); // однакові максимуми - перше входження
		}

		TEST_METHOD(TestIndexOfMin)
		{
			int a[5] = { 3, -5, 8, 1, -7 };
			int b[5] = { 5, 5, -2, -2, 0 };
			Assert::AreEqual(4, IndexOfMin(a, 5)); // мінімум в кінці
			Assert::AreEqual(2, IndexOfMin(b, 5)); // однакові мінімуми - перше входження
		}
	};
}