#pragma once
#define TABLEMAKER_H

#include "DataAnalyzer.h"

template <typename T>
class TableMaker
{
private:
	// generate table and graph based on these values
	int avgRunTime, avgComparisons, avgSwaps, rows, columns, ,

	// use avgRunTime to make a graph
	// sort between sorted and unsorted graphs w algos

public:
	TableMaker(int rows, int columns);
	bool insertRow(DataAnalyzer<T> *data);
	~TableMaker();
};

#include "../src/TableMaker.cpp"
