template <typename T>
BubbleSort::BubbleSort(T *arr, int size)
	: arr(arr)
	, size(size)
	, swaps(0)
	, comparisons(0)
{ sort();
}

template <typename T>
void BubbleSort::sort(){
	for (int i = 0; i < size-1; i++){
		int index = 0;
		for (index; index < size-1; index++){
			if (arr[index] > arr[index+1]){
				comparisons++;
				swap(index, index+1);
			}
		}
	}
}

template <typename T>
void BubbleSort::swap(currentIndex, swapIndex){
	T temp = arr[currentIndex];
	arr[currentIndex] = arr[swapIndex];
	arr[swapIndex] = temp;
	swaps++;
}

template <typename T>
BubbleSort::~BubbleSort()
{
}