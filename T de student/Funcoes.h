#pragma once
#include <vector>


//Imprimir vetor

void printvector(std::vector<double> A) {

	for (int i = 0; i < A.size(); i++){
		std::cout << A[i] << "  ";
	}
	std::cout << std::endl;
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


//Variancia
double variance(const std::vector<double>& data) {
	double media = mean(data);
	double var = 0, aux;

	for (int i = 0; i < data.size(); i++) {
		aux = (data[i] - media) * (data[i] - media);
		var = var + aux;
	}

	var = var / data.size();

	return var;
}


//Desvio Padrao
double std_dev(const std::vector<double>& data) {
	double sd, var;

	var = variance(data);
	sd = sqrt(var);

	return sd;
}


double t_student(const std::vector<double>& data, const std::vector<double>& data1) {

	//Dados normalizados

	std::vector<double> V1;  // Normalizacao data
	std::vector<double> V2;  // Normalizacao data1

	double M1 = mean(data);
	double M2 = mean(data1);
	double S1 = std_dev(data);
	double S2 = std_dev(data1);


	for (int i = 0; i < data.size(); i++) {
		
		double z = (data[i] - M1) / S1;

		V1.push_back(z);
		
	}

	printvector(V1);

	for (int i = 0; i < data.size(); i++) {

		double z = (data[i] - M2) / S2;

		V2.push_back(z);
	}

	printvector(V2);

	std::cout << std::endl  << M1 << "    " << S1 << std::endl;

	//Assumindo que n1 = n2
	int n = V1.size();
	int v = 2*data.size() - 2;

	double T = (mean(V1) - mean(V2)) / sqrt((variance(V1) + variance(V2)/ n));

	return T;
}