

BubbleSort::BubbleSort(T *arr, int size)
	: arr(arr)
	, size(size)
	, swaps(0)
	, comparisons(0)
{ sort();
}

BubbleSort::~BubbleSort()
{
}