#pragma once
#define DATAANALYZER_H

#include "SortingAlgorithms.h"

template <typename T>
class DataAnalyzer
{
private:
	// generates data for one line
	int numComparisons, numSwaps;
	double runTime;

public:
	// DataAnalyzer(/* args */);
	DataAnalyzer(SortingAlgorithms<T> *algo);
	double getRunTime();
	int getComparisons();
	int getSwaps();
	~DataAnalyzer();
};
