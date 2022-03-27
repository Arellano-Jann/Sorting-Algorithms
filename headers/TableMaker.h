#pragma once
#define TABLEMAKER_H

#include "DataAnalyzer.h"

class TableMaker
{
private:
	// generate table and graph based on these values
	int avgRunTime;
	int avgComparisons;
	int avgSwaps;
	int totalRows;

	// use avgRunTime to make a graph
	// sort between sorted and unsorted graphs w algos

public:
	TableMaker(/* args */);
	~TableMaker();
};

TableMaker::TableMaker(/* args */)
{
}

TableMaker::~TableMaker()
{
}
