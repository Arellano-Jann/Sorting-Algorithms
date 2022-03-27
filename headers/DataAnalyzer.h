#pragma once
#define DATAANALYZER_H

#include "SortingAlgorithms.h"

class DataAnalyzer
{
private:
	// generates data for one line
	int numComparisons, numSwaps;
	double runTime;

public:
	// DataAnalyzer(/* args */);
	template <typename T>
	DataAnalyzer(const SortingAlgorithms<T> *algo){
	runTime = algo->getRunTime();
	numComparisons = algo->getComparisons();
	numSwaps = algo->getSwaps();
	}

	double getRunTime();
	int getComparisons();
	int getSwaps();
	~DataAnalyzer();
};
