template <typename T>
MergeSort<T>::MergeSort(T *arr, int size)
	: SortingAlgorithms<T>(arr, size)
	// , finalArray(arr)
{ 
	MergeSort<T>::arr = SortingAlgorithms<T>::getArray();
	MergeSort<T>::size = SortingAlgorithms<T>::getSize();
	// finalArray[size];
	// MergeSort<T>::finalArray = new T[MergeSort<T>::size];
	sort();
}

template <typename T>
void MergeSort<T>::sort(){
	std::clock_t start = std::clock();
	splitArray(0, size-1);
	std::clock_t end = std::clock();
	SortingAlgorithms<T>::setRunTime(1000.0 * (end-start) / CLOCKS_PER_SEC);
}

template <typename T>
void MergeSort<T>::splitArray(int left, int right){
	if (left < right){
		// SortingAlgorithms<T>::incrementComparisons();
		int middle = (left+right) / 2;
		splitArray(left, middle);
		splitArray(middle+1, right);
		mergeArray(left, middle, right);
	}
}

template <typename T>
void MergeSort<T>::mergeArray(int left, int middle, int right){
	T finalArray[size]; // not sure if this works
	int l = left;
	int m = middle+1;
	int r = right;
	while(l <= middle && m <= right){
		// SortingAlgorithms<T>::incrementComparisons();
		if(arr[l] < arr[m]){
			finalArray[r] = arr[l];
			// SortingAlgorithms<T>::incrementSwaps();
			l++;
		}
		else{
			finalArray[r] = arr[m];
			// SortingAlgorithms<T>::incrementSwaps();
			m++;
		}
	}

	// only empties out one of the sides.
	while(l <= middle){ // empties out left side
		finalArray[r] = arr[l];
		// SortingAlgorithms<T>::incrementSwaps();
		l++;
		r++;
	}
	while(m <= right){ // empties out right side
		finalArray[r] = arr[m];
		// SortingAlgorithms<T>::incrementSwaps();
		m++;
		r++;
	}
	for(r = right; r <= left; r++){
		arr[r] = finalArray[r];
		// SortingAlgorithms<T>::incrementSwaps();
	}

}



// template <typename T>
// MergeSort<T>::~MergeSort()
// {
// }