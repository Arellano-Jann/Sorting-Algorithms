#pragma once
#define BUBBLESORT_H

template <typename T>
class BubbleSort{
private:
	T *arr;
	int size;
	int swaps;
	int comparisons;
	int numRunTime;
	void sort();
	void swap(int currentIndex, int swapIndex);
public:
	BubbleSort(T *arr, int size);
	int* getArray() const;
	int getSize() const;
	int getSwaps() const;
	int getComparisons() const;
	int getNumRunTime() const;
	~BubbleSort();
};

#include "../src/BubbleSort.cpp"