#include "../headers/BubbleSort.h"
#include "../headers/DataAnalyzer.h"
#include "../headers/NumberGenerator.h"
#include <iostream>
#include <string>

int main(){
	int size = 10;
	NumberGenerator *n = new NumberGenerator(size);
	std::cout << "Array: " << n->getArray() << std::endl;
	n->getArrayContents();
	BubbleSort<int> *b = new BubbleSort<int>(n->getArray(), n->getSize());
	std::cout << "Array: " << n->getArray() << std::endl;
	n->getArrayContents();
	std::cout << "Array: " << b->getArray() << std::endl;
	// DataAnalyzer *d = new DataAnalyzer(b);
	std::cout << "Number of swaps: " << b->getSwaps() << std::endl;
	std::cout << "Number of comparisons: " << b->getComparisons() << std::endl;
	std::cout << "Number of runs: " << b->getNumRunTime() << std::endl;
	// std::cout << "Number of swaps: " << d->numSwaps << std::endl;
	// std::cout << "Number of comparisons: " << d->numComparisons << std::endl;
	// std::cout << "Number of runs: " << d->numRunTime << std::endl;
	return 0;
}