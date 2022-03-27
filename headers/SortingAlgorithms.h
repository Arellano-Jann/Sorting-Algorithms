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
	void swap(int currentIndex, int swapIndex);
	~SortingAlgorithms();

	int* getArray() const;
	int getSize() const;
	int getSwaps() const;
	int getComparisons() const;
	double getRunTime() const;

	void incrementComparisons();
	void incrementSwaps();
	void setRunTime(double newRunTime);
};

#include "../src/SortingAlgorithms.cpp"
