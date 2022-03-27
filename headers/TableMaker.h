#pragma once
#define TABLEMAKER_H

#include "DataAnalyzer.h"

template <typename T>
class TableMaker
{
private:
	// generate table and graph based on these values
	int avgComparisons, avgSwaps, rows, columns;
	double avgRunTime;

	// use avgRunTime to make a graph
	// sort between sorted and unsorted graphs w algos

public:
	TableMaker(int rows, int columns);
	bool insertRow(DataAnalyzer<T> *data);
	void calculateAverages();
	~TableMaker();
};

#include "../src/TableMaker.cpp"
