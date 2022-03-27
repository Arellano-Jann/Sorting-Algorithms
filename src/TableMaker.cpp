#include "../headers/TableMaker.h"

TableMaker::TableMaker(int rows, int columns)
	: rows(rows), columns(columns)
	, avgRunTime(0), avgComparisons(0), avgSwaps(0)
{}

bool TableMaker::insertRow(DataAnalyzer *data){
	// check if rows are full
	double runTime = data->getRunTime();
	int comparisons = data->getComparisons();
	int swaps = data->getSwaps();

	avgRunTime += runTime;
	avgComparisons += comparisons;
	avgSwaps += swaps;



	return true;
}

void TableMaker::calculateAverages(){
	avgRunTime /= rows;
	avgComparisons /= rows;
	avgSwaps /= rows;
}

TableMaker::~TableMaker()
{}