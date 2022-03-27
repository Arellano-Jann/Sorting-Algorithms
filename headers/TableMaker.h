#pragma once
#define TABLEMAKER_H

#include "DataAnalyzer.h"

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
	void calculateAverages();
	~TableMaker();

	bool insertRow(DataAnalyzer *data);
};

#include "../src/TableMaker.cpp"
