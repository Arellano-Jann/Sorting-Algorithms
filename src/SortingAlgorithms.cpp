template <typename T>
SortingAlgorithms<T>::SortingAlgorithms(T *arr, int size)
	: arr(arr)
	, size(size)
	, swaps(0)
	, comparisons(0)
	, runTime(0)
{
}

template <typename T>
void SortingAlgorithms<T>::swap(int currentIndex, int swapIndex){
	T temp = arr[currentIndex];
	arr[currentIndex] = arr[swapIndex];
	arr[swapIndex] = temp;
}

template <typename T>
int* SortingAlgorithms<T>::getArray() const { return arr; }

template <typename T>
int SortingAlgorithms<T>::getSize() const { return size; }

template <typename T>
int SortingAlgorithms<T>::getSwaps() const { return swaps; }

template <typename T>
int SortingAlgorithms<T>::getComparisons() const { return comparisons; }

template <typename T>
double SortingAlgorithms<T>::getRunTime() const { return runTime; }

template <typename T>
void SortingAlgorithms<T>::incrementComparisons(){ comparisons++; }

template <typename T>
void SortingAlgorithms<T>::incrementSwaps(){ swaps++; }

template <typename T>
void SortingAlgorithms<T>::setRunTime(double newRunTime){ runTime = newRunTime; }


template <typename T>
SortingAlgorithms<T>::~SortingAlgorithms()
{
}