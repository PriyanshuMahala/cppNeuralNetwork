#include "Layer.h"

Layer::Layer(int val) {
	this->size = val;
	for (int i = 0; i < val; i++) {
		neurons.push_back(new Neuron(0.00));
	}
}