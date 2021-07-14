#pragma once
#include <iostream>
#include <math.h>
#include <cmath>

// Funcao retirada do sita cplusplus  [http://www.cplusplus.com/forum/general/255896/]
double hypergeometric(double a, double b, double c, double x)
{
	const double TOLERANCE = 1.0e-10;
	double term = a * b * x / c;
	double value = 1.0 + term;
	int n = 1;

	while (abs(term) > TOLERANCE)
	{
		a++, b++, c++, n++;
		term *= a * b * x / c / n;
		value += term;
	}

	return value;
}


//Probabilidade de um ponto estar em uma distribuição-t com v graus de liberdade
double t_distribution_pdf(double x, int v) {

	double prob;
	const double pi = 3.14159;

	prob = (tgamma(v + 1 / 2) / sqrt(v * pi) * tgamma(v / 2)) * pow(1 + x * x / v, -1 * (v + 1) / 2);

	return prob;
}


//Probabilidade do valor estar entre menos infinito e um ponto em uma distribuição-t
double t_distribution_cdf(double x, int v) {

	double prob = (1 / 2) + (x * (tgamma((v + 1) / 2))) * hypergeometric(0.5, v/2 + 0.5, 1.5, -(x * x) / v);


	return prob;
}


//Probabilidade de um ponto estar entre os pontos x1 e x2 em uma distribuicao-t
double t_distribution_cdf(double x1, double x2, int v) {

	double prob;

	if (x2 > x1) {

		 prob = t_distribution_cdf(x2,v) - t_distribution_cdf(x1,v);
	}
	else {

		prob = t_distribution_cdf(x1,v) - t_distribution_cdf(x2, v);

	}

	return prob;


}