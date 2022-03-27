#pragma once
#define TABLEMAKER_H

#include "DataAnalyzer.h"
#include "Csvfile.h"
#include <iostream>

class TableMaker
{
private:
	// generate table and graph based on these values
	int avgComparisons, avgSwaps, rows, columns, totalRows, totalColumns;
	double avgRunTime;
	// std::string** arr; // hopefully this works
	// if this doesn't work, convert back to int and just add headers in the csvfile
	int** arr;
	std::string filename;
	
	
	// use avgRunTime to make a graph
	// sort between sorted and unsorted graphs w algos

public:
	TableMaker(std::string filename, int rows, int columns);
	bool insertRow(DataAnalyzer *data);
	void calculateAverages();
	// void setupTableHeaders();
	void outputCSV();
	~TableMaker();
};
