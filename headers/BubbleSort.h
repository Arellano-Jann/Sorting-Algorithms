#pragma once

template <typename T>
class BubbleSort{
private:
	T *arr;
	int size;
	int swaps;
	int comparisons;
	sort();
public:
	BubbleSort(T *arr, int size);
	~BubbleSort();
};

#include "BubbleSort.cpp"