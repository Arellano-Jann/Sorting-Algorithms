template <typename T>
DataAnalyzer<T>::DataAnalyzer(SortingAlgorithms<T> *algo){
	runTime = algo->getRunTime();
	numComparisons = algo->getComparisons();
	numSwaps = algo->getSwaps();
}

template <typename T>
double DataAnalyzer<T>::getRunTime(){ return runTime; }

template <typename T>
int DataAnalyzer<T>::getComparisons(){ return numComparisons; }

template <typename T>
int DataAnalyzer<T>::getSwaps(){ return numSwaps; }


template <typename T>
DataAnalyzer<T>::~DataAnalyzer()
{
}