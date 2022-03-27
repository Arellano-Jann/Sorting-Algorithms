#pragma once
#define SORTINGALGORITHMS_H
#include <ctime>

template <typename T>
class SortingAlgorithms {
private:
	T *arr;
	int size;
	int swaps;
	int comparisons;
	int runTime;
	virtual void sort() = 0;
public:
	SortingAlgorithms(T *arr, int size);
	int* getArray() const;
	int getSize() const;
	void swap(int currentIndex, int swapIndex);
	int getSwaps() const;
	int getComparisons() const;
	int getRunTime() const;
	void incrementComparisons();
	void incrementSwaps();
	void setRunTime(int newRunTime);
	~SortingAlgorithms();
};

#include "../src/SortingAlgorithms.cpp"
