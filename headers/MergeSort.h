#pragma once
#define MERGESORT_H

template <typename T>
class MergeSort : public SortingAlgorithms<T>{
private:
	T* arr;
	int size;
	void sort() override;
public:
	MergeSort(T *arr, int size);
	~MergeSort();
};

#include "../src/MergeSort.cpp"