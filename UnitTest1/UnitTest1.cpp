#include <time.h>
#include <ctime>
#include <iomanip>
#include "pch.h"
#include "CppUnitTest.h"
#include "G:\Программирование\2 курс\1 сем\Project2\Project2\sort.h"
#include "G:\Программирование\2 курс\1 сем\Project2\Project2\sort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(binarySearch)
		{
			int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
			bool check = true;
			int funcvalue = -1;
			funcvalue = BinarySearch(array, 0, 9, 5);
			if (funcvalue != 4)
			{
				check = false;
			}
			Assert::IsTrue(check);
		}
		TEST_METHOD(qickSort)
		{
			int array[10];
			double time = 0;
			int N = sizeof(array) / sizeof(array[0]);
			for (int i = 0; i < N - 1; i++) {
				array[i] = rand();
			}
			QuickSort(array, 0, N - 1);
			bool check = true;
			for (int i = 0; i < N - 2; i++)
			{
				if (array[i] > array[i + 1])
				{
					check = false;
				}
			}
			Assert::IsTrue(check);
		}
		TEST_METHOD(insertionSort)
		{
			int array[10];
			double time = 0;
			int N = sizeof(array) / sizeof(array[0]);
			for (int i = 0; i < N - 1; i++) {
				array[i] = rand();
			}
			InsertionSort(array, N-1);
			bool check = true;
			for (int i = 0; i < N - 2; i++)
			{
				if (array[i] > array[i + 1])
				{
					check = false;
				}
			}
			Assert::IsTrue(check);
		}
		TEST_METHOD(bogoSort)
		{
			int array[10];
			double time = 0;
			int N = sizeof(array) / sizeof(array[0]);
			for (int i = 0; i < N - 1; i++) {
				array[i] = rand();
			}
			BogoSort(array, N - 1);
			bool check = true;
			for (int i = 0; i < N - 2; i++)
			{
				if (array[i] > array[i + 1])
				{
					check = false;
				}
			}
			Assert::IsTrue(check);
		}
		TEST_METHOD(countingSort)
		{
			int array[256];
			double time = 0;
			int N = sizeof(array) / sizeof(array[0]);
			for (int i = 0; i < N - 1; i++) {
				array[i] = rand()%256;
			}
			CountingSort(array,N-1);
			bool check = true;
			for (int i = 0; i < N - 2; i++)
			{
				if (array[i] > array[i + 1])
				{
					check = false;
				}
			}
			Assert::IsTrue(check);
		}
	};
}
