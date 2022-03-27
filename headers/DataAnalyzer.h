#pragma once
#define DATAANALYZER_H

#include "SortingAlgorithms.h"

template <typename T>
class DataAnalyzer
{
private:
	// generates data for one line
	int runTime, numComparisons, numSwaps;

public:
	// DataAnalyzer(/* args */);
	DataAnalyzer(SortingAlgorithms<T> *algo);
	int getRunTime();
	int getComparisons();
	int getSwaps();
	~DataAnalyzer();
};
