template <typename T>
BubbleSort<T>::BubbleSort(T *arr, int size)
	: arr(arr)
	, size(size)
	, swaps(0)
	, comparisons(0)
	, numRunTime(0)
{ sort();
}

template <typename T>
void BubbleSort<T>::sort(){
	
	for (int i = 0; i < size-1; i++){
		int index = 0;
		for (index; index < size-1; index++){
			comparisons++;
			if (arr[index] > arr[index+1]){
				swap(index, index+1);
			}
		}
	}
}

template <typename T>
void BubbleSort<T>::swap(int currentIndex, int swapIndex){
	T temp = arr[currentIndex];
	arr[currentIndex] = arr[swapIndex];
	arr[swapIndex] = temp;
	swaps++;
}

template <typename T>
int* BubbleSort<T>::getArray() const { return arr; } // does this work?

template <typename T>
int BubbleSort<T>::getSize() const { return size; }

template <typename T>
int BubbleSort<T>::getSwaps() const { return swaps; }

template <typename T>
int BubbleSort<T>::getComparisons() const { return comparisons; }

template <typename T>
int BubbleSort<T>::getNumRunTime() const { return numRunTime; }


template <typename T>
BubbleSort<T>::~BubbleSort()
{
}