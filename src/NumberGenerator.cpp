#include "../headers/NumberGenerator.h"

// NumberGenerator::NumberGenerator(int *arr, int size)
// 	: arr(arr)
// 	, size(size)
// {
// }

NumberGenerator::NumberGenerator(int size)
	: size(size)
	{ 
	arr = new int[size]; 
	  for (int i = 0; i < size; i++){
	  	arr[i] = rand() % 1000000;
	  }
	}

int* NumberGenerator::getArray() const{ return arr; } // does this work?

void NumberGenerator::getArrayContents() const{
	for (int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
 }

int NumberGenerator::getSize() const{ return size; }

NumberGenerator::~NumberGenerator(){
	delete[] arr; }