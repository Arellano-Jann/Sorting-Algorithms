#pragma once
#define INSERTIONSORT_H

template <typename T>
class InsertionSort{
private:
	T *arr;
	int size;
	int swaps;
	int comparisons;
	void sort();
	void swap(int currentIndex, int swapIndex);
public:
	InsertionSort(T *arr, int size);
	~InsertionSort();
};

#include "../src/InsertionSort.cpp"