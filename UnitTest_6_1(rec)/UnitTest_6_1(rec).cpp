#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_6_1(rec)\Lab_6_1(rec)\Lab_6_1(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rec
{
	TEST_CLASS(UnitTest61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int k = 1;
			int a[k];
			a[0] = 13;

			Replace(a, k, 0);
			Assert::AreEqual(a[0], 13);
		}
	};
}
