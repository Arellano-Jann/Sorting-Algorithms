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
	NumberGenerator seedChanger = NumberGenerator(1);

	// Brute force this. then automate it.
	// Bubble Sort
	// Remember to make 1000 elements change
	// for (int numGen = 10; numGen <= 100; numGen*10)
{
	seedChanger.changeSeed(0);
	{
		TableMaker *ub1000 = new TableMaker("UnsortedBubble1000.csv", 10, 3);
		TableMaker *sb1000 = new TableMaker("SortedBubble1000.csv", 10, 3);
		ub1000->setupCSVHeaders("Unsorted Bubble Sort");
		sb1000->setupCSVHeaders("Sorted Bubble Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(1000);
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
	seedChanger.changeSeed(0);
	{
		TableMaker *ub1000 = new TableMaker("UnsortedInsertion1000.csv", 10, 3);
		TableMaker *sb1000 = new TableMaker("SortedInsertion1000.csv", 10, 3);
		ub1000->setupCSVHeaders("Unsorted Insertion Sort");
		sb1000->setupCSVHeaders("Sorted Insertion Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(1000);
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
	seedChanger.changeSeed(0);
	// {
	// 	TableMaker *ub1000 = new TableMaker("UnsortedMergeSort1000.csv", 10, 3);
	// 	TableMaker *sb1000 = new TableMaker("SortedMergeSort1000.csv", 10, 3);
	// 	ub1000->setupCSVHeaders("Unsorted MergeSort");
	// 	sb1000->setupCSVHeaders("Sorted MergeSort");
	// 	for (int i = 0; i < 10; i++){
	// 		NumberGenerator *testGen = new NumberGenerator(1000);
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
}

// 10000
if (false)
{
	seedChanger.changeSeed(0);
	{
		TableMaker *ub1000 = new TableMaker("UnsortedBubble1000.csv", 10, 3);
		TableMaker *sb1000 = new TableMaker("SortedBubble1000.csv", 10, 3);
		ub1000->setupCSVHeaders("Unsorted Bubble Sort");
		sb1000->setupCSVHeaders("Sorted Bubble Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(10000);
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
	seedChanger.changeSeed(0);
	{
		TableMaker *ub1000 = new TableMaker("UnsortedInsertion1000.csv", 10, 3);
		TableMaker *sb1000 = new TableMaker("SortedInsertion1000.csv", 10, 3);
		ub1000->setupCSVHeaders("Unsorted Insertion Sort");
		sb1000->setupCSVHeaders("Sorted Insertion Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(10000);
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
	seedChanger.changeSeed(0);
	// {
	// 	TableMaker *ub1000 = new TableMaker("UnsortedMergeSort1000.csv", 10, 3);
	// 	TableMaker *sb1000 = new TableMaker("SortedMergeSort1000.csv", 10, 3);
	// 	ub1000->setupCSVHeaders("Unsorted MergeSort");
	// 	sb1000->setupCSVHeaders("Sorted MergeSort");
	// 	for (int i = 0; i < 10; i++){
	// 		NumberGenerator *testGen = new NumberGenerator(10000);
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
}

// 100000
if (false)
{
	seedChanger.changeSeed(0);
	{
		TableMaker *ub1000 = new TableMaker("UnsortedBubble1000.csv", 10, 3);
		TableMaker *sb1000 = new TableMaker("SortedBubble1000.csv", 10, 3);
		ub1000->setupCSVHeaders("Unsorted Bubble Sort");
		sb1000->setupCSVHeaders("Sorted Bubble Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(100000);
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
	seedChanger.changeSeed(0);
	{
		TableMaker *ub1000 = new TableMaker("UnsortedInsertion1000.csv", 10, 3);
		TableMaker *sb1000 = new TableMaker("SortedInsertion1000.csv", 10, 3);
		ub1000->setupCSVHeaders("Unsorted Insertion Sort");
		sb1000->setupCSVHeaders("Sorted Insertion Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(100000);
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
	seedChanger.changeSeed(0);
	// {
	// 	TableMaker *ub1000 = new TableMaker("UnsortedMergeSort1000.csv", 10, 3);
	// 	TableMaker *sb1000 = new TableMaker("SortedMergeSort1000.csv", 10, 3);
	// 	ub1000->setupCSVHeaders("Unsorted MergeSort");
	// 	sb1000->setupCSVHeaders("Sorted MergeSort");
	// 	for (int i = 0; i < 10; i++){
	// 		NumberGenerator *testGen = new NumberGenerator(100000);
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
}
	
	// Test Code
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

	std::cout << "Finished generating data." << std::endl;
	std::cout << "Please wait. Calculating averages..." << std::endl;
	std::cout << "CSV File Outputted." << std::endl;
	return 0;
}