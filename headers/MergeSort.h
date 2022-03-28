#pragma once
#define MERGESORT_H

template <typename T>
class MergeSort : public SortingAlgorithms<T>{
private:
	T* arr;
	int size;
	// T* finalArray;
	// int* finalArray;
	void sort() override;
	void splitArray(int left, int right);
	void mergeArray(int left, int middle, int right);
public:
	MergeSort(T *arr, int size);
	~MergeSort(){
		// delete[] arr;
		// delete[] finalArray;
	}
};

#include "../src/MergeSort.cpp"