#pragma once
#define DATAANALYZER_H

#include "SortingAlgorithms.h"

template <typename T>
class DataAnalyzer
{
private:
	// generates data for one line
	int runTime;
	int numComparisons;
	int numSwaps;

public:
	// DataAnalyzer(/* args */);
	DataAnalyzer(SortingAlgorithms<T> *algo);
	~DataAnalyzer();
};

template <typename T>
DataAnalyzer<T>::DataAnalyzer(SortingAlgorithms<T> *algo){
	runTime = algo->getRunTime();
	numComparisons = algo->getComparisons();
	numSwaps = algo->getSwaps();
}

template <typename T>
DataAnalyzer<T>::~DataAnalyzer()
{
}
