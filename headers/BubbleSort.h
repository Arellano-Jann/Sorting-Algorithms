#pragma once
#define BUBBLESORT_H
#include "SortingAlgorithms.h"

template <typename T>
class BubbleSort : public SortingAlgorithms<T> {
private:
	T* arr;
	int size;
	void sort() override;
public:
	BubbleSort(T *arr, int size);
	~BubbleSort(){
		// delete[] arr;
	}
};

#include "../src/BubbleSort.cpp"