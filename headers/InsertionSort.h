#pragma once
#define INSERTIONSORT_H

template <typename T>
class InsertionSort{
private:
	T *arr;
	int size;
	int swaps;
	int comparisons;
	int numRunTime;
	void sort();
	void swap(int currentIndex, int swapIndex);
public:
	InsertionSort(T *arr, int size);
	int* getArray() const;
	int getSize() const;
	int getSwaps() const;
	int getComparisons() const;
	int getNumRunTime() const;
	~InsertionSort();
};

#include "../src/InsertionSort.cpp"