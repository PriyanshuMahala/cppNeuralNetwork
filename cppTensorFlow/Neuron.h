#pragma once

#include <iostream>
#include <cmath>


class Neuron {
private:
	//1.5
	double val = 0.0;
	//0-1
	double activatedVal = 0.0;

	double derivedVal = 0.0;

public:
	Neuron(double dat);
	//FAST SIGMOID FUNCTION
	//f(x) =  x / (1 + |x|)
	void activate();
	//FAST SIGMOID FUNCTION
	//f'(x) = f(x) * (1 - f(x))

	void derive();

	double getNval()const { return this->val; }
	double getAval()const { return this->activatedVal; }
	double getDval()const { return this->derivedVal; }


};