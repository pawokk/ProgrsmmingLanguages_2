#include "pch.h"
#include "CppUnitTest.h"
#include "../Polygon/Square.h"
#include "../Polygon/Helplib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit::polygon;

namespace PolygonTest
{
	TEST_CLASS(PolygonTest)
	{
	public:
		TEST_METHOD(Ctor_NegativeSide_ExeptionExpected)
		{
			Point center_point = Point(20, 0.5);
			double side = -999;
			Assert::ExpectException<std::out_of_range>([center_point, side]()
				{auto x = Square(center_point, side);});
		}

		TEST_METHOD(Ctor_NotSquare_ExeptionExpected)
		{
			Point point_1 = Point(0, 0);
			Point point_2 = Point(10, 10.1);
			Assert::ExpectException<std::out_of_range>([point_1, point_2]()
				{auto x = Square(point_1, point_2); });
		}

		TEST_METHOD(GetPerimetrTestSquare_ValidDataSuccess)
		{
			Point point_1 = Point(0, 0);
			Point point_2 = Point(10.2, 10.2);
			Square square = Square(point_1, point_2);
			double expect_perimetr = 40.8;
			Assert::IsTrue(miit::helplib::is_double_equal(expect_perimetr, square.get_perimeter()));
		}

		TEST_METHOD(GetAreaTestSquare_ValidDataSuccess)
		{
			Point point_1 = Point(0, 0);
			Point point_2 = Point(10, 10);
			Square square = Square(point_1, point_2);
			double expect_area = 100;
			Assert::IsTrue(miit::helplib::is_double_equal(expect_area, square.get_area()));
		}

		TEST_METHOD(EqualOperatorTestPoint_ValidDataSuccess)
		{
			Point point_1 = Point(10, 10.2);
			Point point_2 = Point(10, 10.2);
			Assert::IsTrue(point_1 == point_2);
		}

		TEST_METHOD(NotEqualOperatorTestPoint_ValidDataSuccess)
		{
			Point point_1 = Point(10, 10.2);
			Point point_2 = Point(10, 12.2);
			Assert::IsTrue(point_1 != point_2);
		}
	};
}
