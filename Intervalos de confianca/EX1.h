#pragma once
#include<math.h>

//Funcao de probabilidade normal para P(x<X)

//Para quando o usuário fornece todos os parametros
double normal_distribution_cdf(double x, double mu, double std_dev) {
	double prob;

	prob = (1 + erf(x - mu / std_dev * sqrt(2))) / 2;

	return prob;

}

//Para quando o usuário fornece apenas o valor x
double normal_distribution_cdf(double x) {
	double prob;

	prob = normal_distribution_cdf(x, 0, 1);
	
	return prob;
}




//Probabilidade de x estar entre dois pontos P(X1 < x < X2)

//Quando o usuario fornece todos os parametros
double normal_distribution_cdf(double x1, double x2, double mu, double std_dev){

	double bet = 0;

	if (x2 > x1) {
	double bet = normal_distribution_cdf(x2,mu,std_dev) - normal_distribution_cdf(x1,mu,std_dev);
	}
	else {
		double bet = normal_distribution_cdf(x1,mu,std_dev) - normal_distribution_cdf(x2,mu,std_dev);
	}

	return bet;
	}


//Quando o usuario fornece apenas os dois pontos
double normal_distribution_cdf(double x1, double x2) {
	double bet = 0;

		if (x2 > x1) {
			bet = normal_distribution_cdf(x2, 0, 1) - normal_distribution_cdf(x1, 0, 1);
		}
		else {
			bet = normal_distribution_cdf(x1, 0, 1) - normal_distribution_cdf(x2, 0, 1);
		}
		return bet;
	}