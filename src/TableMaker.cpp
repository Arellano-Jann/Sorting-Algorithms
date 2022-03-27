template <typename T>
TableMaker<T>::TableMaker(int rows, int columns)
	: rows(rows), columns(columns)
	, avgRunTime(0), avgComparisons(0), avgSwaps(0)
{}

template <typename T>
bool TableMaker<T>::insertRow(DataAnalyzer<T> *data){
	// check if rows are full
	double runTime = data->getRunTime();
	int comparisons = data->getComparisons();
	int swaps = data->getSwaps();

	avgRunTime += runTime;
	avgComparisons += comparisons;
	avgSwaps += swaps;

	

	return true;
}

template <typename T>
void TableMaker<T>::calculateAverages(){
	avgRunTime /= rows;
	avgComparisons /= rows;
	avgSwaps /= rows;
}

template <typename T>
TableMaker<T>::~TableMaker()
{}