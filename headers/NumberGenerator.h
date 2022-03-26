#pragma once
#define NUMBERGENERATOR_H

#include <stdlib.h>
class NumberGenerator{
private:
	int size;
	int *arr;
public:
	// NumberGenerator(int *arr, int size);
	NumberGenerator(int size);
	int* getArray() const;
	int getSize() const;
	~NumberGenerator();
};

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

int NumberGenerator::getSize() const{ return size; }

NumberGenerator::~NumberGenerator(){
	delete[] arr; }
