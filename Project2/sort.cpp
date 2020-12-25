#include <iostream>
#include "sort.h"

using namespace std;

int BinarySearch(int* array, int leftB, int rightB, int key)
{
    int center = 0;
    while (true) {
        center = (leftB + rightB) / 2;

        if (key < array[center])
            rightB = center - 1;
        else if (key > array[center])
            leftB = center + 1;
        else
            return center;

        if (leftB > rightB)
            return -1;
    }
}

void QuickSort(int* array, int leftB, int rightB)
{
    int i = leftB;
    int j = rightB;
    int core = array[(i + j) / 2];
    int temp;

    while (i <= j) {
        while (array[i] < core)
            i++;
        while (array[j] > core)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > leftB)
        QuickSort(array, leftB, j);
    if (i < rightB)
        QuickSort(array, i, rightB);
}

void InsertionSort(int* array, int sizeOfArray)
{
    int key;
    int j;
    for (int i = 1; i < sizeOfArray; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}


void BogoSort(int* array, int sizeOfArray)
{
    bool sortcheck = false;
    int index;
    int temp;
    while (sortcheck == false) {
        for (int i = 0; i < sizeOfArray; i++) {
            index = rand() % sizeOfArray;
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }

        for (int i = 0; i < sizeOfArray - 1; i++) {
            sortcheck = true;
            if (array[i] > array[i + 1]) {
                sortcheck = false;
                break;
            }

        }
    }
}

void CountingSort(int* array, int sizeOfArray)
{
    int countArray[256] = { 0 };

    for (int i = 0; i < sizeOfArray; i++)
        countArray[array[i]] = countArray[array[i]] + 1;

    int counter = 0;
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < countArray[i]; j++) {
            array[counter] = i;
            counter++;
        }
    }
}
