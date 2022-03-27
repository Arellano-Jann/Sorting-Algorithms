#pragma once
#define BUBBLESORT_H
#include "SortingAlgorithms.h"

template <typename T>
class BubbleSort : public SortingAlgorithms<T> {
private:
	int* arr;
	int size;
	void sort() override;
public:
	BubbleSort(T *arr, int size);
	~BubbleSort();
};

#include "../src/BubbleSort.cpp"