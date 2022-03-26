#pragma once

template <typename T>
class InsertionSort{
private:
	T *arr;
	int size;
	int swaps;
	int comparisons;
	sort();
public:
	InsertionSort(T *arr, int size);
	~InsertionSort();
};

#include "InsertionSort.cpp"