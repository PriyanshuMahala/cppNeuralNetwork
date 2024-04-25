#include "Neuron.h"

//CONSTRUCTOR

Neuron::Neuron(double val) {
	this->val = val;
	activate();
	derive();
}

//FAST SIGMOID FUNCTION
//f(x) =  x / (1 + |x|)

void Neuron::activate() {
	this->activatedVal = this->val / (1 + abs(this->val));
}


//f'(x) = f(x) * (1 - f(x))

void Neuron::derive() {
	this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}

void Neuron::setval(double val) {
	this->val = val;
	activate();
	derive();
}