#pragma once

#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>


void printvector(std::vector<double> V) {
	for (int i = 0; i < V.size(); i++) {
		std::cout << V[i] << " ";
	}

}


//Media
double mean(const std::vector<double>& data) {


	double soma = 0;
	int n = data.size();

	for (int i = 0; i < n; i++) {
		soma = soma + data[i];
	}

	return soma / data.size();
}





