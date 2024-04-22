#include <iostream>
#include "Neuron.h"


int main(int argc, char** argv) {
	//Input
	Neuron* n = new Neuron(0.9);
	std::cout << "Val: " << n->getNval() << std::endl;
	std::cout << "Activated Val: " << n->getAval() << std::endl;
	std::cout << "Derived Val: " << n->getDval() << std::endl;
	return 0;
}
