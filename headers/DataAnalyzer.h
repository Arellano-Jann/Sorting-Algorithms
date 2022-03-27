#pragma once
#define DATAANALYZER_H

#include "SortingAlgorithms.h"

class DataAnalyzer
{
private:
	// generates data for one line
	int numRunTime;
	int numComparisons;
	int numSwaps;

public:
	DataAnalyzer(/* args */);
	// DataAnalyzer(SortingAlgorithms *algo);
	~DataAnalyzer();
};

DataAnalyzer::DataAnalyzer(/* args */)
{
}

DataAnalyzer::~DataAnalyzer()
{
}
