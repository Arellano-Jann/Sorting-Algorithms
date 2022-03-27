template <typename T>
BubbleSort<T>::BubbleSort(T *arr, int size)
	: SortingAlgorithms<T>(arr, size)
{ 
	BubbleSort<T>::arr = SortingAlgorithms<T>::getArray();
	BubbleSort<T>::size = SortingAlgorithms<T>::getSize();
	sort();
}

template <typename T>
void BubbleSort<T>::sort(){
	// const std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
	
	std::clock_t start = std::clock();
	for (int i = 0; i < size-1; i++){
		int index = 0;
		for (index; index < size-1; index++){
			SortingAlgorithms<T>::incrementComparisons();
			// if (SortingAlgorithms<T>::getArray()[index] > SortingAlgorithms<T>::getArray()[index+1]){
			if (arr[index] > arr[index+1]){
				SortingAlgorithms<T>::swap(index, index+1);
				SortingAlgorithms<T>::incrementSwaps();
			}
		}
	}
	std::clock_t end = std::clock();
	SortingAlgorithms<T>::setRunTime(1000.0 * (end-start) / CLOCKS_PER_SEC);

	// const std::chrono::time_point<std::chrono::high_resolution_clock> end = std::chrono::high_resolution_clock::now();
	// SortingAlgorithms<T>::setRunTime(std::chrono::duration<double, std::milli>(end-start).count());
	//Alternative way to get time using duration_cast
	// SortingAlgorithms<T>::setRunTime(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

}


template <typename T>
BubbleSort<T>::~BubbleSort()
{
}