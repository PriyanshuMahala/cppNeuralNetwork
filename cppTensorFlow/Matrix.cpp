#include "Matrix.h"
#include <ctime>

void Matrix::printToConsole() {
	for (int i = 0; i < numRows; i++) {
		std::cout << this->values;
	}
}

Matrix::Matrix(int nrow, int ncol, bool isRandom) {
	this->numRows = nrow;
	this->numCols = ncol;

	for (int i = 0; i < numRows; i++) {
		std::vector<double> colValues;
		for (int j = 0; j < numRows; j++) {
			double r = 0.0;
			if (isRandom) {
				r = this->generateRandom();
			}
			colValues.push_back(r);
		}
		this->values.push_back(colValues);
	}

}


double Matrix::generateRandom() {
	srand(time(NULL));
	return rand() % 2;
}