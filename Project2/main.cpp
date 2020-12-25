#include <iostream>
#include <ctime>
#include <iomanip>
#include "sort.h"
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int array[150];
	double time = 0;
	int N = sizeof(array) / sizeof(array[0]);
	cout << "������ �� ����������: ";
	for (int i = 0; i < N-1; i++) {
		array[i] = rand();
		cout << array[i]<< ", ";
	}
	cout << endl;
	cout << endl;
	double start = clock();
	InsertionSort(array,N-1);
	double end = clock();
	time = end - start;
	cout << "������ ����� ����������: ";
	for (int i = 0; i < N - 1; i++) {
		cout << array[i]<< ", ";
	}
	cout << endl;
 	cout << "����� � ������������� �� ���������� " << N << " ��������:"<< time;
	return 0;
}