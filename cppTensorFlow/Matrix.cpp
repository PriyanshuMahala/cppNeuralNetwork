#include "Matrix.h"
#include <ctime>
#include <iomanip> 

void Matrix::printToConsole() {
	int width = 10;

	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numRows; j++) {
			std::cout << std::setw(width) << std::left << this->values.at(i).at(j);
			std::cout << "\t\t";
		}
		std::cout << std::endl;
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
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0, 1);

	return dis(gen);
}