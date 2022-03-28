#include "../headers/TableMaker.h"

TableMaker::TableMaker(std::string filename, int rows, int columns)
	: totalRows(rows), totalColumns(columns) // might want to not take in rows and calculate total rows via a getline
	, avgRunTime(0), avgComparisons(0), avgSwaps(0)
	// , filename(filename)
	, csvfile(filename)
{	
	// arr = new std::string*[rows];
	// for(int i = 0; i < rows; ++i)
    // 	arr[i] = new std::string[columns];
	// arr = new int*[rows];
	// for(int i = 0; i < rows; ++i)
    // 	arr[i] = new int[columns];

	// std::cout << "TableMaker constructor" << std::endl;
	// std::cout << arr[totalRows - 1][0] << arr[totalRows - 1][1] << arr[totalRows - 1][2] << std::endl;
	// std::cout << rows << std::endl;
}
	

void TableMaker::setupCSVHeaders(std::string algo){
	csvfile << algo << "Run Time" << "Comparisons" << "Swaps" << endrow;
}

// another way to do this would be to insert directly into the csvfile to avoid the need for a 2d array
// bool TableMaker::insertRow(DataAnalyzer *data){
// 	if (rows == 0) return false;

// 	double runTime = data->getRunTime();
// 	int comparisons = data->getComparisons();
// 	int swaps = data->getSwaps();
// 	// otherwise insert data into last rowrow
// 	// arr[rows - 1][0] = std::to_string(runTime); // rows - 1 allows for no looping
// 	// arr[rows - 1][1] = std::to_string(comparisons); // time complexity go brrr
// 	// arr[rows - 1][2] = std::to_string(swaps);

// 	// *(*(arr + rows - 1) + 0) = data->getRunTime(); // rows - 1 allows for no looping
// 	// *(*(arr + rows - 1) + 1) = data->getComparisons();
// 	// *(*(arr + rows - 1) + 2) = data->getSwaps();

// 	// arr[rows - 1][0] = data->getRunTime(); // rows - 1 allows for no looping
// 	// arr[rows - 1][1] = data->getComparisons(); // time complexity go brrr
// 	// arr[rows - 1][2] = data->getSwaps();

// 	arr[rows - 1][0] = runTime; // rows - 1 allows for no looping
// 	arr[rows - 1][1] = comparisons;
// 	arr[rows - 1][2] = swaps;

// 	avgRunTime += runTime;
// 	avgComparisons += comparisons;
// 	avgSwaps += swaps;

// 	// std::cout << "insertRow" << std::endl;
// 	// std::cout << arr[rows - 1][0] << arr[rows - 1][1] << arr[rows - 1][2] << std::endl;
// 	// std::cout << rows << std::endl;
// 	// std::cout << "Run Time: " << runTime << std::endl;
// 	// std::cout << "Comparisons: " << comparisons << std::endl;
// 	// std::cout << "Swaps: " << swaps << std::endl;
// 	--rows;
// 	return true;
// }

// insert directly into the csvfile to avoid the need for a 2d array
bool TableMaker::insertRow(DataAnalyzer *data){

	double runTime = data->getRunTime();
	int comparisons = data->getComparisons();
	int swaps = data->getSwaps();

	csvfile << "" << runTime << comparisons << swaps << endrow;

	avgRunTime += runTime;
	avgComparisons += comparisons;
	avgSwaps += swaps;
	return true;
}



void TableMaker::calculateAverages(){
	avgRunTime /= totalRows;
	avgComparisons /= totalRows;
	avgSwaps /= totalRows;
	csvfile << "AVG" << avgRunTime << avgComparisons << avgSwaps << endrow;
	avgRunTime = 0;
	avgComparisons = 0;
	avgSwaps = 0;
	// arr[1][0] = std::to_string(avgRunTime);
	// arr[1][1] = std::to_string(avgComparisons);
	// arr[1][2] = std::to_string(avgSwaps);
}

// Csvfile TableMaker::getCSV() const{ return csvfile; }

void TableMaker::appendCSV(const TableMaker &table){
	// csvfile << table.getCSV() << endrow;
}

TableMaker::~TableMaker(){}
// { delete [] arr; }