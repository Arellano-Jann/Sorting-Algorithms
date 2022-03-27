#pragma once
#define INSERTIONSORT_H

template <typename T>
class InsertionSort : public SortingAlgorithms<T>{
private:
	T* arr;
	int size;
	void sort() override;
public:
	InsertionSort(T *arr, int size);
	~InsertionSort();
};

#include "../src/InsertionSort.cpp"