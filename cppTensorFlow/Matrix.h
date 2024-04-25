#pragma once

#include <iostream>
#include <vector>

class Matrix {

private:
	int numRows = 0;
	int numCols = 0;
	std::vector<std::vector<double >> values;

public:
	Matrix(int numRows, int numCols, bool isRandom);

	Matrix* transpose();
	void setValue(int row, int col, int val);
	double getValue(int row, int col);
	double generateRandom();
	void printToConsole();

	int getRows()const { return this->numRows; }
	int getCols()const { return this->numCols; }
};



