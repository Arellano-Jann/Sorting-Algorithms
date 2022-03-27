#pragma once
#define SORTINGALGORITHMS_H
#include <ctime>
#include <chrono>

template <typename T>
class SortingAlgorithms {
private:
	T *arr;
	int size;
	int swaps;
	int comparisons;
	double runTime;
	virtual void sort() = 0;
public:
	SortingAlgorithms(T *arr, int size);
	int* getArray() const;
	int getSize() const;
	void swap(int currentIndex, int swapIndex);
	int getSwaps() const;
	int getComparisons() const;
	double getRunTime() const;
	void incrementComparisons();
	void incrementSwaps();
	void setRunTime(double newRunTime);
	~SortingAlgorithms();
};

#include "../src/SortingAlgorithms.cpp"
