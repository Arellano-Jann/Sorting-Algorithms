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
	bool first = false;
	bool second = false;
	bool third = false;
	// for (int numGen = 10; numGen <= 100; numGen*10)

			NumberGenerator *testGen = new NumberGenerator(1000);
			MergeSort<int> *uMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *duMergeSort = new DataAnalyzer(uMergeSort);
			MergeSort<int> *sMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dsMergeSort = new DataAnalyzer(sMergeSort);
			delete testGen;
			delete uMergeSort;
			delete duMergeSort;
			delete sMergeSort;
			delete dsMergeSort;

// 1000
if (first)
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
		TableMaker *ui1000 = new TableMaker("UnsortedInsertion1000.csv", 10, 3);
		TableMaker *si1000 = new TableMaker("SortedInsertion1000.csv", 10, 3);
		ui1000->setupCSVHeaders("Unsorted Insertion Sort");
		si1000->setupCSVHeaders("Sorted Insertion Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(1000);
			InsertionSort<int> *uinsertion = new InsertionSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *duinsertion = new DataAnalyzer(uinsertion);
			ui1000->insertRow(duinsertion);
			InsertionSort<int> *sinsertion = new InsertionSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dsinsertion = new DataAnalyzer(sinsertion);
			si1000->insertRow(dsinsertion);
			testGen->changeSeed();

			delete testGen;
			delete uinsertion;
			delete sinsertion;
			delete duinsertion;
			delete dsinsertion;
		}
		ui1000->calculateAverages();
		si1000->calculateAverages();
		delete ui1000;
		delete si1000;
	}

	// Merge Sort
	seedChanger.changeSeed(0);
	{
		TableMaker *um1000 = new TableMaker("UnsortedMergeSort1000.csv", 10, 3);
		TableMaker *sm1000 = new TableMaker("SortedMergeSort1000.csv", 10, 3);
		um1000->setupCSVHeaders("Unsorted MergeSort");
		sm1000->setupCSVHeaders("Sorted MergeSort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(1000);
			MergeSort<int> *uMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *duMergeSort = new DataAnalyzer(uMergeSort);
			um1000->insertRow(duMergeSort);
			MergeSort<int> *sMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dsMergeSort = new DataAnalyzer(sMergeSort);
			sm1000->insertRow(dsMergeSort);
			testGen->changeSeed();

			delete testGen;
			delete uMergeSort;
			delete sMergeSort;
			delete duMergeSort;
			delete dsMergeSort;
		}
		um1000->calculateAverages();
		sm1000->calculateAverages();
		delete um1000;
		delete sm1000;
	}
}

// 10000
if (second)
{
	seedChanger.changeSeed(0);
	{
		TableMaker *ub10000 = new TableMaker("UnsortedBubble10000.csv", 10, 3);
		TableMaker *sb10000 = new TableMaker("SortedBubble10000.csv", 10, 3);
		ub10000->setupCSVHeaders("Unsorted Bubble Sort");
		sb10000->setupCSVHeaders("Sorted Bubble Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(10000);
			BubbleSort<int> *ububble = new BubbleSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dububble = new DataAnalyzer(ububble);
			ub10000->insertRow(dububble);
			BubbleSort<int> *sbubble = new BubbleSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dsbubble = new DataAnalyzer(sbubble);
			sb10000->insertRow(dsbubble);
			testGen->changeSeed();

			delete testGen;
			delete ububble;
			delete sbubble;
			delete dububble;
			delete dsbubble;
		}
		ub10000->calculateAverages();
		sb10000->calculateAverages();
		delete ub10000;
		delete sb10000;
	}

	// Insertion Sort
	seedChanger.changeSeed(0);
	{
		TableMaker *ub10000 = new TableMaker("UnsortedInsertion10000.csv", 10, 3);
		TableMaker *sb10000 = new TableMaker("SortedInsertion10000.csv", 10, 3);
		ub10000->setupCSVHeaders("Unsorted Insertion Sort");
		sb10000->setupCSVHeaders("Sorted Insertion Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(10000);
			InsertionSort<int> *uinsertion = new InsertionSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *duinsertion = new DataAnalyzer(uinsertion);
			ub10000->insertRow(duinsertion);
			InsertionSort<int> *sinsertion = new InsertionSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dsinsertion = new DataAnalyzer(sinsertion);
			sb10000->insertRow(dsinsertion);
			testGen->changeSeed();

			delete testGen;
			delete uinsertion;
			delete sinsertion;
			delete duinsertion;
			delete dsinsertion;
		}
		ub10000->calculateAverages();
		sb10000->calculateAverages();
		delete ub10000;
		delete sb10000;
	}

	// Merge Sort
	seedChanger.changeSeed(0);
	// {
	// 	TableMaker *ub10000 = new TableMaker("UnsortedMergeSort10000.csv", 10, 3);
	// 	TableMaker *sb10000 = new TableMaker("SortedMergeSort10000.csv", 10, 3);
	// 	ub10000->setupCSVHeaders("Unsorted MergeSort");
	// 	sb10000->setupCSVHeaders("Sorted MergeSort");
	// 	for (int i = 0; i < 10; i++){
	// 		NumberGenerator *testGen = new NumberGenerator(10000);
	// 		MergeSort<int> *uMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
	// 		DataAnalyzer *duMergeSort = new DataAnalyzer(uMergeSort);
	// 		ub10000->insertRow(duMergeSort);
	// 		MergeSort<int> *sMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
	// 		DataAnalyzer *dsMergeSort = new DataAnalyzer(sMergeSort);
	// 		sb10000->insertRow(dsMergeSort);
	// 		testGen->changeSeed();

	// 		delete testGen;
	// 		delete uMergeSort;
	// 		delete sMergeSort;
	// 		delete duMergeSort;
	// 		delete dsMergeSort;
	// 	}
	// 	ub10000->calculateAverages();
	// 	sb10000->calculateAverages();
	// 	delete ub10000;
	// 	delete sb10000;
	// }
}

// 100000
if (third)
{
	seedChanger.changeSeed(0);
	{
		TableMaker *ub100000 = new TableMaker("UnsortedBubble100000.csv", 10, 3);
		TableMaker *sb100000 = new TableMaker("SortedBubble100000.csv", 10, 3);
		ub100000->setupCSVHeaders("Unsorted Bubble Sort");
		sb100000->setupCSVHeaders("Sorted Bubble Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(100000);
			BubbleSort<int> *ububble = new BubbleSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dububble = new DataAnalyzer(ububble);
			ub100000->insertRow(dububble);
			BubbleSort<int> *sbubble = new BubbleSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dsbubble = new DataAnalyzer(sbubble);
			sb100000->insertRow(dsbubble);
			testGen->changeSeed();

			delete testGen;
			delete ububble;
			delete sbubble;
			delete dububble;
			delete dsbubble;
		}
		ub100000->calculateAverages();
		sb100000->calculateAverages();
		delete ub100000;
		delete sb100000;
	}

	// Insertion Sort
	seedChanger.changeSeed(0);
	{
		TableMaker *ub100000 = new TableMaker("UnsortedInsertion100000.csv", 10, 3);
		TableMaker *sb100000 = new TableMaker("SortedInsertion100000.csv", 10, 3);
		ub100000->setupCSVHeaders("Unsorted Insertion Sort");
		sb100000->setupCSVHeaders("Sorted Insertion Sort");
		for (int i = 0; i < 10; i++){
			NumberGenerator *testGen = new NumberGenerator(100000);
			InsertionSort<int> *uinsertion = new InsertionSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *duinsertion = new DataAnalyzer(uinsertion);
			ub100000->insertRow(duinsertion);
			InsertionSort<int> *sinsertion = new InsertionSort<int>(testGen->getArray(), testGen->getSize());
			DataAnalyzer *dsinsertion = new DataAnalyzer(sinsertion);
			sb100000->insertRow(dsinsertion);
			testGen->changeSeed();

			delete testGen;
			delete uinsertion;
			delete sinsertion;
			delete duinsertion;
			delete dsinsertion;
		}
		ub100000->calculateAverages();
		sb100000->calculateAverages();
		delete ub100000;
		delete sb100000;
	}

	// Merge Sort
	seedChanger.changeSeed(0);
	// {
	// 	TableMaker *ub100000 = new TableMaker("UnsortedMergeSort100000.csv", 10, 3);
	// 	TableMaker *sb100000 = new TableMaker("SortedMergeSort100000.csv", 10, 3);
	// 	ub100000->setupCSVHeaders("Unsorted MergeSort");
	// 	sb100000->setupCSVHeaders("Sorted MergeSort");
	// 	for (int i = 0; i < 10; i++){
	// 		NumberGenerator *testGen = new NumberGenerator(100000);
	// 		MergeSort<int> *uMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
	// 		DataAnalyzer *duMergeSort = new DataAnalyzer(uMergeSort);
	// 		ub100000->insertRow(duMergeSort);
	// 		MergeSort<int> *sMergeSort = new MergeSort<int>(testGen->getArray(), testGen->getSize());
	// 		DataAnalyzer *dsMergeSort = new DataAnalyzer(sMergeSort);
	// 		sb100000->insertRow(dsMergeSort);
	// 		testGen->changeSeed();

	// 		delete testGen;
	// 		delete uMergeSort;
	// 		delete sMergeSort;
	// 		delete duMergeSort;
	// 		delete dsMergeSort;
	// 	}
	// 	ub100000->calculateAverages();
	// 	sb100000->calculateAverages();
	// 	delete ub100000;
	// 	delete sb100000;
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
