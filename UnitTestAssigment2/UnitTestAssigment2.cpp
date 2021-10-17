#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*); // lets the compiler know it exists outside of here
extern "C" int getArea(int*, int*); // lets the compiler know it exists outside of here
extern "C" void setLength(int input, int* length); // lets the compiler know it exists outside of here
extern "C" void setWidth(int input, int* width); // lets the compiler know it exists outside of here

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAssigment2
{
	TEST_CLASS(UnitTestAssigment2)
	{
	public:
		
		TEST_METHOD(getPerimeterFunctionality)
		//testing the Perimeter function, the perimeter of a 2 width 1 length rectangle is 6
		{
			
			int perimeterResult = 0;
			int width = 2;
			int length = 1;
			perimeterResult = getPerimeter(&length, & width);
			Assert::AreEqual(6, perimeterResult); // checking if the result is as expected 
		}

		TEST_METHOD(getAreaFunctionality)
		//testing the Area function, the Area of a 2 width 1 length rectangle is 2
		{
			
			int areaResult = 0;
			int width = 2;
			int length = 1;
			areaResult = getArea(&length, &width);
			Assert::AreEqual(2, areaResult); // checking if the result is as expected
		}


		TEST_METHOD(setLengthFunctionality1)
		// tests if the function works with correct input between 1 and 99 included
		// it should replace 1 with 2
		{
			int currentLength = 1;
			int newLength = 2;
			setLength(newLength, &currentLength);
			Assert::AreEqual(2, currentLength); // checking if the result is as expected
		}

		TEST_METHOD(setLengthFunctionality2)
		// tests if the function works with incorrect input below 1
		//it should not replace 1 with -5
		{
			int currentLength = 1;
			int newLength = -5;
			setLength(newLength, &currentLength);
			Assert::AreEqual(1, currentLength); 
			// checking if the result is as expected
		}

		TEST_METHOD(setLengthFunctionality3)
		// tests if the function works with incorrect input above 99
		//it should not replace 1 with 100
		{
			int currentLength = 1;
			int newLength = 100;
			setLength(newLength, &currentLength);
			Assert::AreEqual(1, currentLength); 
			// checking if the result is as expected
		}



		TEST_METHOD(setWidthFunctionality1)
		// tests if the function works with correct input between 1 and 99 included
		// it should replace 1 with 2
		{
			int currentWidth = 1;
			int newWidth = 2;
			setLength(newWidth, &currentWidth);
			Assert::AreEqual(2, currentWidth); 
			// checking if the result is as expected
		}

		TEST_METHOD(setWidthFunctionality2)
		// tests if the function works with incorrect input between 1 and 99 inclusive
		// it should not replace 1 with 101
		{
			int currentWidth = 1;
			int newWidth = 101;
			setLength(newWidth, &currentWidth);
			Assert::AreEqual(1, currentWidth); 
			// checking if the result is as expected
		}

		TEST_METHOD(setWidthFunctionality3)
		// tests if the function works with incorrect input between 1 and 99 inclusive
		// it should not replace 1 with -1
		{
			int currentWidth = 1;
			int newWidth = -1;
			setLength(newWidth, &currentWidth);
			Assert::AreEqual(1, currentWidth);
			// checking if the result is as expected
		}
	};
}
