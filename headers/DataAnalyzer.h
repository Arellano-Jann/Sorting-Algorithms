#pragma once

class DataAnalyzer
{
private:
	// generates data for one line
	int numRunTime;
	int numComparisons;
	int numSwaps;
	int totalRunTime;
	int totalComparisons;
	int totalSwaps;

public:
	DataAnalyzer(/* args */);
	~DataAnalyzer();
};

DataAnalyzer::DataAnalyzer(/* args */)
{
}

DataAnalyzer::~DataAnalyzer()
{
}
