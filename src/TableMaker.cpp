#include "../headers/TableMaker.h"

TableMaker::TableMaker(std::string filename, int rows, int columns)
	: rows(rows), columns(columns)
	, avgRunTime(0), avgComparisons(0), avgSwaps(0)
	, filename(filename)
{	
	arr = new std::string*[rows];
	for(int i = 0; i < rows; ++i)
    	arr[i] = new std::string[columns];
}

void TableMaker::setupTableHeaders(){
	arr[0][0] = "Run Time";
	arr[0][1] = "Comparisons";
	arr[0][2] = "Swaps";
}

bool TableMaker::insertRow(DataAnalyzer *data){
	if (rows == 1) return false; // this is rows == 1 bc top rows are header and avg rows

	double runTime = data->getRunTime();
	int comparisons = data->getComparisons();
	int swaps = data->getSwaps();
	// otherwise insert data into last rowrow
	arr[rows - 1][0] = std::to_string(runTime); // rows - 1 allows for no looping
	arr[rows - 1][1] = std::to_string(comparisons); // time complexity go brrr
	arr[rows - 1][2] = std::to_string(swaps);
	--rows;
	avgRunTime += runTime;
	avgComparisons += comparisons;
	avgSwaps += swaps;
	return true;
}



void TableMaker::calculateAverages(){
	avgRunTime /= rows;
	avgComparisons /= rows;
	avgSwaps /= rows;
	arr[1][0] = std::to_string(avgRunTime);
	arr[1][1] = std::to_string(avgComparisons);
	arr[1][2] = std::to_string(avgSwaps);
}

void TableMaker::outputCSV(){
	
}

TableMaker::~TableMaker()
{}