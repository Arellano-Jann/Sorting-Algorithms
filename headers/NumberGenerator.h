#pragma once
#define NUMBERGENERATOR_H

#include <stdlib.h>
#include <iostream>

class NumberGenerator{
private:
	int size;
	int *arr;
public:
	// NumberGenerator(int *arr, int size);
	NumberGenerator(int size);
	int* getArray() const;
	void getArrayContents() const;
	int getSize() const;
	~NumberGenerator();
};
