template <typename T>
MergeSort<T>::MergeSort(T *arr, int size)
	: SortingAlgorithms<T>(arr, size)
{ 
	MergeSort<T>::arr = SortingAlgorithms<T>::getArray();
	MergeSort<T>::size = SortingAlgorithms<T>::getSize();
	sort();
}

template <typename T>
void MergeSort<T>::sort(){
	std::clock_t start = std::clock();
	for (int current = 0; current < size-1; current++){
		for (int comparison = size-2; comparison >= 0; comparison--){
			SortingAlgorithms<T>::incrementComparisons();
			if (arr[current] > arr[comparison]){
				SortingAlgorithms<T>::swap(current, comparison+1);
				SortingAlgorithms<T>::incrementSwaps();
			}
		}
	}
	std::clock_t end = std::clock();
	SortingAlgorithms<T>::setRunTime(1000.0 * (end-start) / CLOCKS_PER_SEC);
}

template <typename T>
MergeSort<T>::~MergeSort()
{
}