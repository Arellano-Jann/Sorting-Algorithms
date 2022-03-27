#include "../headers/BubbleSort.h"
#include "../headers/InsertionSort.h"
#include "../headers/DataAnalyzer.h"
#include "../headers/NumberGenerator.h"
#include "../headers/TableMaker.h"
#include <iostream>
#include <string>

int main(){
	int size = 10;
	NumberGenerator *n = new NumberGenerator(size);
	// std::cout << "Array: " << n->getArray() << std::endl;
	// n->getArrayContents();
	BubbleSort<int> *b = new BubbleSort<int>(n->getArray(), n->getSize());
	// std::cout << "Array: " << n->getArray() << std::endl;
	// n->getArrayContents();
	// std::cout << "Array: " << b->getArray() << std::endl;
	// DataAnalyzer *d = new DataAnalyzer(b);
	std::cout << "Number of swaps: " << b->getSwaps() << std::endl;
	std::cout << "Number of comparisons: " << b->getComparisons() << std::endl;
	std::cout << "Runtime: " << b->getRunTime() << std::endl;

	DataAnalyzer *d = new DataAnalyzer(b);
	std::cout << "Number of swaps: " << d->getSwaps() << std::endl;
	std::cout << "Number of comparisons: " << d->getComparisons() << std::endl;
	std::cout << "Runtime: " << d->getRunTime() << std::endl;
	
	TableMaker *t = new TableMaker("output.csv", 12, 3);
	// t->setupTableHeaders();
	// for (int i = 0; i < 10; i++){
		t->insertRow(d);t->insertRow(d);
		t->insertRow(d);t->insertRow(d);
		t->insertRow(d);t->insertRow(d);t->insertRow(d);t->insertRow(d);
		t->insertRow(d);t->insertRow(d);t->insertRow(d);t->insertRow(d);
	// }
	t->calculateAverages();
	t->outputCSV();





	NumberGenerator *one = new NumberGenerator(size);
	// std::cout << "Array: " << one->getArray() << std::endl;
	// one->getArrayContents();
	NumberGenerator *two = new NumberGenerator(size);
	// std::cout << "Array: " << two->getArray() << std::endl;
	// two->getArrayContents();
	two->changeSeed();
	NumberGenerator *three = new NumberGenerator(size);
	// std::cout << "Array: " << three->getArray() << std::endl;
	// three->getArrayContents();
	// std::cout << "Number of swaps: " << d->numSwaps << std::endl;
	// std::cout << "Number of comparisons: " << d->numComparisons << std::endl;
	// std::cout << "Number of runs: " << d->numRunTime << std::endl;
	return 0;
}