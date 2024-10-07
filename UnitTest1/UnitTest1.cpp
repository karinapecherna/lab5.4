#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.4/FileName.cpp"
#include <cassert>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int N1 = 1;
            double expected1 = (1 + sqrt(1 + pow(1, 2))) / pow(1, 2);
            assert(abs(S0(N1) - expected1) < 1e-9);
            assert(abs(S1(N1) - expected1) < 1e-9);
            assert(abs(S2(N1) - expected1) < 1e-9);
            assert(abs(S3(N1) - expected1) < 1e-9);
            assert(abs(S4(N1) - expected1) < 1e-9);


            int N2 = 2;
            double expected2 = (1 + sqrt(1 + pow(1, 2))) / pow(1, 2) +
                (1 + sqrt(1 + pow(2, 2))) / pow(2, 2);
            assert(abs(S0(N2) - expected2) < 1e-9);
            assert(abs(S1(N2) - expected2) < 1e-9);
            assert(abs(S2(N2) - expected2) < 1e-9);
            assert(abs(S3(N2) - expected2) < 1e-9);
            assert(abs(S4(N2) - expected2) < 1e-9);

           
            int N3 = 3;
            double expected3 = (1 + sqrt(1 + pow(1, 2))) / pow(1, 2) +
                (1 + sqrt(1 + pow(2, 2))) / pow(2, 2) +
                (1 + sqrt(1 + pow(3, 2))) / pow(3, 2);
            assert(abs(S0(N3) - expected3) < 1e-9);
            assert(abs(S1(N3) - expected3) < 1e-9);
            assert(abs(S2(N3) - expected3) < 1e-9);
            assert(abs(S3(N3) - expected3) < 1e-9);
            assert(abs(S4(N3) - expected3) < 1e-9);

		}
	};
}
