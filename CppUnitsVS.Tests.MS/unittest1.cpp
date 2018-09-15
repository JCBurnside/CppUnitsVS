#include "stdafx.h"
#include "CppUnitTest.h"
#include "../CppUnitsVS/Meter.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Units::Distance::Literals;
using Units::Distance::Meter;

namespace CppUnitsVSTestsMS
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(typeid(1_m),typeid(Meter));
		}

	};
}