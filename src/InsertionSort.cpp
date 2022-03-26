template <typename T>
InsertionSort<T>::InsertionSort(T *arr, int size)
	: arr(arr)
	, size(size)
	, swaps(0)
	, comparisons(0)
{ sort();
}

template <typename T>
void InsertionSort<T>::sort(){
	for (int current = 0; i < size-1; current++){
		for (int comparison = size-2; comparison >= 0; comparison--){
			comparisons++;
			if (arr[current] > arr[comparison]){
				swap(current, comparison+1);
			}
		}
	}
}

template <typename T>
void InsertionSort<T>::swap(int currentIndex, int swapIndex){
	T temp = arr[currentIndex];
	arr[currentIndex] = arr[swapIndex];
	arr[swapIndex] = temp;
	swaps++;
}

template <typename T>
InsertionSort<T>::~InsertionSort()
{
}