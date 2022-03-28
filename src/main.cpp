#include "../headers/BubbleSort.h"
#include "../headers/InsertionSort.h"
#include "../headers/MergeSort.h"
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

	// Brute force this. then automate it.
	// Bubble Sort
	// Remember to make 1000 elements change
	for (int numGen = 1000; numGen <= 100000; numGen*10)
{
	{
		TableMaker *ub1000 = new TableMaker("UnsortedBubble1000.csv", 10, 3);
		TableMaker *sb1000 = new TableMaker("SortedBubble1000.csv", 10, 3);
		ub1000->setupCSVHeaders("Unsorted Bubble Sort");
		sb1000->setupCSVHeaders("Sorted Bubble Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(numGen);m 
			BubbleSort<int> *ububble = new BubbleSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dububble = new DataAnalyzer(ububble);
			ub1000->insertRow(dububble);
			BubbleSort<int> *sbubble = new BubbleSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dsbubble = new DataAnalyzer(sbubble);
			sb1000->insertRow(dsbubble);
			testGen->changeSeed();

			delete testGen;
			delete ububble;
			delete sbubble;
			delete dububble;
			delete dsbubble;
		}
		ub1000->calculateAverages();
		sb1000->calculateAverages();
		delete ub1000;
		delete sb1000;
	}

	// Insertion Sort
	{
		TableMaker *ub1000 = new TableMaker("UnsortedInsertion1000.csv", 10, 3);
		TableMaker *sb1000 = new TableMaker("SortedInsertion1000.csv", 10, 3);
		ub1000->setupCSVHeaders("Unsorted Insertion Sort");
		sb1000->setupCSVHeaders("Sorted Insertion Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(numGen);
			InsertionSort<int> *uinsertion = new InsertionSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *duinsertion = new DataAnalyzer(uinsertion);
			ub1000->insertRow(duinsertion);
			InsertionSort<int> *sinsertion = new InsertionSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dsinsertion = new DataAnalyzer(sinsertion);
			sb1000->insertRow(dsinsertion);
			testGen->changeSeed();

			delete testGen;
			delete uinsertion;
			delete sinsertion;
			delete duinsertion;
			delete dsinsertion;
		}
		ub1000->calculateAverages();
		sb1000->calculateAverages();
		delete ub1000;
		delete sb1000;
	}

	// Merge Sort
	// {
	// 	TableMaker *ub1000 = new TableMaker("UnsortedMergeSort1000.csv", 10, 3);
	// 	TableMaker *sb1000 = new TableMaker("SortedMergeSort1000.csv", 10, 3);
	// 	ub1000->setupCSVHeaders("Unsorted MergeSort");
	// 	sb1000->setupCSVHeaders("Sorted MergeSort");
	// 	for (int i = 0; i < 10; i++){
	// 		NumberGenerator *testGen = new NumberGenerator(numGen);
	// 		MergeSort<int> *uMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
	// 		DataAnalyzer *duMergeSort = new DataAnalyzer(uMergeSort);
	// 		ub1000->insertRow(duMergeSort);
	// 		MergeSort<int> *sMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
	// 		DataAnalyzer *dsMergeSort = new DataAnalyzer(sMergeSort);
	// 		sb1000->insertRow(dsMergeSort);
	// 		testGen->changeSeed();

	// 		delete testGen;
	// 		delete uMergeSort;
	// 		delete sMergeSort;
	// 		delete duMergeSort;
	// 		delete dsMergeSort;
	// 	}
	// 	ub1000->calculateAverages();
	// 	sb1000->calculateAverages();
	// 	delete ub1000;
	// 	delete sb1000;
	// }
	// t->outputCSV();
}
	
	// InsertionSort<int> *insertion = new InsertionSort<int>(testGen->getArray(), testGen->getSize());
	// DataAnalyzer *dinsertion = new DataAnalyzer(insertion);
	// t->insertRow(dinsertion);t->insertRow(dinsertion);
	
	// Test if number gen will be copied and changed etc
	// NumberGenerator gen1 = NumberGenerator(10);
	// int uarr1[] = gen1.getArray();
	// bubbleSort<int> *testBubble1 = new BubbleSort<int>(gen1.getArray(), gen1.getSize());
	// int sarr1[] = gen1.getArray();

	// NumberGenerator gen2 = NumberGenerator(10);
	// int uarr2[] = gen2.getArray();
	// BubbleSort<int> *testBubble2 = new BubbleSort<int>(uarr2, uarr2.size());


	std::cout << "CSV File Outputted." << std::endl;
	return 0;
}