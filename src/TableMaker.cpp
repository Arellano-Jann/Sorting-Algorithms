#include "../headers/TableMaker.h"

TableMaker::TableMaker(std::string filename, int rows, int columns)
	: rows(rows), columns(columns)
	, totalRows(rows), totalColumns(columns)
	, avgRunTime(0), avgComparisons(0), avgSwaps(0)
	, filename(filename)
{	
	// arr = new std::string*[rows];
	// for(int i = 0; i < rows; ++i)
    // 	arr[i] = new std::string[columns];
	arr = new int*[rows];
	for(int i = 0; i < rows; ++i)
    	arr[i] = new int[columns];

	std::cout << "TableMaker constructor" << std::endl;
	std::cout << arr[totalRows - 1][0] << arr[totalRows - 1][1] << arr[totalRows - 1][2] << std::endl;
	std::cout << rows << std::endl;
}

// void TableMaker::setupTableHeaders(){
// 	arr[0][0] = "Run Time";
// 	arr[0][1] = "Comparisons";
// 	arr[0][2] = "Swaps";
// }

// another way to do this would be to insert directly into the csvfile to avoid the need for a 2d array
bool TableMaker::insertRow(DataAnalyzer *data){
	if (rows == 0) return false; // this is rows == 1 bc top rows are header and avg rows

	double runTime = data->getRunTime();
	int comparisons = data->getComparisons();
	int swaps = data->getSwaps();
	// otherwise insert data into last rowrow
	// arr[rows - 1][0] = std::to_string(runTime); // rows - 1 allows for no looping
	// arr[rows - 1][1] = std::to_string(comparisons); // time complexity go brrr
	// arr[rows - 1][2] = std::to_string(swaps);

	// arr[rows - 1][0] = runTime; // rows - 1 allows for no looping
	// arr[rows - 1][1] = comparisons; // time complexity go brrr
	// arr[rows - 1][2] = swaps;

	// *(*(arr + rows - 1) + 0) = data->getRunTime(); // rows - 1 allows for no looping
	// *(*(arr + rows - 1) + 1) = data->getComparisons();
	// *(*(arr + rows - 1) + 2) = data->getSwaps();

	arr[rows - 1][0] = data->getRunTime(); // rows - 1 allows for no looping
	arr[rows - 1][1] = data->getComparisons(); // time complexity go brrr
	arr[rows - 1][2] = data->getSwaps();

	avgRunTime += runTime;
	avgComparisons += comparisons;
	avgSwaps += swaps;

	std::cout << "insertRow" << std::endl;
	std::cout << arr[rows - 1][0] << arr[rows - 1][1] << arr[rows - 1][2] << std::endl;
	std::cout << rows << std::endl;
	std::cout << "Run Time: " << runTime << std::endl;
	std::cout << "Comparisons: " << comparisons << std::endl;
	std::cout << "Swaps: " << swaps << std::endl;
	--rows;
	return true;
}



void TableMaker::calculateAverages(){
	avgRunTime /= totalRows;
	avgComparisons /= totalRows;
	avgSwaps /= totalRows;
	// arr[1][0] = std::to_string(avgRunTime);
	// arr[1][1] = std::to_string(avgComparisons);
	// arr[1][2] = std::to_string(avgSwaps);
}

void TableMaker::outputCSV(){
	std::cout << "outputCSV" << std::endl;
	std::cout << arr[totalRows - 1][0] << arr[totalRows - 1][1] << arr[totalRows - 1][2] << std::endl;
	std::cout << rows << std::endl;
	try
    {
        Csvfile csv(filename  ); // make this take a filename in
		csv << "Run Time" << "Comparisons" << "Swaps" << endrow;
        for (int i = 0; i < totalRows; i++)
		{
			for (int j = 0; j < totalColumns; j++)
			{
				csv << arr[i][j]; // csv << arr[i][j] << ",";
				std::cout << arr[i][j] << ",";
				// csv << "hi";
			}
			csv << endrow;
			std::cout << std::endl;
		}
		calculateAverages();
		csv << avgRunTime << avgComparisons << avgSwaps << endrow;
    }
    catch (const std::exception &ex)
    {
        std::cout << "Exception was thrown: " << ex.what() << std::endl;
    }
}

TableMaker::~TableMaker()
{ delete [] arr; }