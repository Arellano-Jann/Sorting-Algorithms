#include "../headers/BubbleSort.h"
#include "../headers/InsertionSort.h"
#include "../headers/DataAnalyzer.h"
#include "../headers/NumberGenerator.h"
#include "../headers/TableMaker.h"
#include <iostream>
#include <string>

int main(){
	std::cout << "Please wait. Generating data..." << std::endl;
	// NumberGenerator 10x
	// Naming: sortLetter seed# Size
	// NumberGenerator seedChanger = NumberGenerator(1);
	// NumberGenerator *ufirst1000 = new NumberGenerator(1000);
	// NumberGenerator *ufirst10000 = new NumberGenerator(10000);
	// NumberGenerator *ufirst100000 = new NumberGenerator(100000);

	// seedChanger.changeSeed(1);
	// NumberGenerator *usecond1000 = new NumberGenerator(1000);
	// NumberGenerator *usecond10000 = new NumberGenerator(10000);
	// NumberGenerator *usecond100000 = new NumberGenerator(100000);
	// seedChanger.changeSeed(2);
	// NumberGenerator *uthird1000 = new NumberGenerator(1000);
	// NumberGenerator *uthird10000 = new NumberGenerator(10000);
	// NumberGenerator *uthird100000 = new NumberGenerator(100000);
	// seedChanger.changeSeed(3);
	// NumberGenerator *ufourth1000 = new NumberGenerator(1000);
	// NumberGenerator *ufourth10000 = new NumberGenerator(10000);
	// NumberGenerator *ufourth100000 = new NumberGenerator(100000);
	// seedChanger.changeSeed(4);
	// NumberGenerator *ufifth1000 = new NumberGenerator(1000);
	// NumberGenerator *ufifth10000 = new NumberGenerator(10000);
	// NumberGenerator *ufifth100000 = new NumberGenerator(100000);
	// seedChanger.changeSeed(5);
	// NumberGenerator *usixth1000 = new NumberGenerator(1000);
	// NumberGenerator *usixth10000 = new NumberGenerator(10000);
	// NumberGenerator *usixth100000 = new NumberGenerator(100000);
	// seedChanger.changeSeed(6);
	// NumberGenerator *useventh1000 = new NumberGenerator(1000);
	// NumberGenerator *useventh10000 = new NumberGenerator(10000);
	// NumberGenerator *useventh100000 = new NumberGenerator(100000);
	// seedChanger.changeSeed(7);
	// NumberGenerator *ueighth1000 = new NumberGenerator(1000);
	// NumberGenerator *ueighth10000 = new NumberGenerator(10000);
	// NumberGenerator *ueighth100000 = new NumberGenerator(100000);
	// seedChanger.changeSeed(8);
	// NumberGenerator *uninth1000 = new NumberGenerator(1000);
	// NumberGenerator *uninth10000 = new NumberGenerator(10000);
	// NumberGenerator *uninth100000 = new NumberGenerator(100000);
	// seedChanger.changeSeed(9);
	// NumberGenerator *utenth1000 = new NumberGenerator(1000);
	// NumberGenerator *utenth10000 = new NumberGenerator(10000);
	// NumberGenerator *utenth100000 = new NumberGenerator(100000);

	// // BubbleSort - sorted/unsorted algorithmType size
	// BubbleSort<int> *ububble1000;
	// BubbleSort<int> *ububble10000;
	// BubbleSort<int> *ububble100000;
	// BubbleSort<int> *sbubble1000;
	// BubbleSort<int> *sbubble10000;
	// BubbleSort<int> *sbubble100000;
	std::cout << "Finished generating data." << std::endl;
	std::cout << "Please wait. Calculating averages..." << std::endl;
	// for (int i = 0; i < 10; i++){
	// 	seedChanger.changeSeed(i);
	// 	NumberGenerator *seed1000 = new NumberGenerator(1000);
	// 	NumberGenerator *seed10000 = new NumberGenerator(10000);
	// 	NumberGenerator *seed100000 = new NumberGenerator(100000);
	// 	ububble1000 = new BubbleSort<int>(seed1000->getArray(), seed1000->getSize());





	// 	delete seed1000;
	// 	delete seed10000;
	// 	delete seed100000;
	// }	


	NumberGenerator *testGen = new NumberGenerator(100);
	BubbleSort<int> *test = new BubbleSort<int>(testGen->getArray(), testGen->getSize());
	DataAnalyzer *d = new DataAnalyzer(test);
	
	TableMaker *t = new TableMaker("output.csv", 3, 3);
	t->insertRow(d);
	t->insertRow(d);t->insertRow(d);
	t->calculateAverages();
	// t->outputCSV();
	std::cout << "CSV File Outputted." << std::endl;
	return 0;
}