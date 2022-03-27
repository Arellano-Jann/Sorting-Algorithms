#include "../headers/DataAnalyzer.h"

// template <typename T>
// DataAnalyzer::DataAnalyzer(const SortingAlgorithms<T> *algo){
// 	runTime = algo->getRunTime();
// 	numComparisons = algo->getComparisons();
// 	numSwaps = algo->getSwaps();
// }

double DataAnalyzer::getRunTime(){ return runTime; }

int DataAnalyzer::getComparisons(){ return numComparisons; }

int DataAnalyzer::getSwaps(){ return numSwaps; }

DataAnalyzer::~DataAnalyzer()
{
}