#include <iostream>
#include "Neuron.h"
#include "Layer.h"
#include "Matrix.h"


int main(int argc, char** argv) {

	Matrix* new_Matrix = new Matrix(3, 2, true);
	new_Matrix->printToConsole();

	delete new_Matrix;

}
