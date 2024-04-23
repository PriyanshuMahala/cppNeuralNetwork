#pragma once

#include <iostream>
#include <vector>
#include "Neuron.h"


class Layer{
private:
	int size = 0;

	std::vector<Neuron* > neurons;

public:
	Layer(int size);
};

