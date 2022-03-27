template <typename T>
TableMaker<T>::TableMaker(int rows, int columns)
	: rows(rows), columns(columns)
	, avgRunTime(0), avgComparisons(0), avgSwaps(0)
{}

template <typename T>
bool TableMaker<T>::insertRow(DataAnalyzer<T> *data){
	
}

template <typename T>
TableMaker<T>::~TableMaker()
{}