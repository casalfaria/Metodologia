// T de student.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>
#include "Funcoes.h"


int main()
{
   
	std::vector<double> data = { 5.6, 6.4, 5.1, 5.3, 4.5, 6.5, 4.4, 6.1, 5.8, 4 };
	std::vector<double> data1 = { 4.9, 4.4, 4.3, 4.1, 4.6, 4.6, 4.2, 4.3, 4.8, 4.8 };

	//Assumindo que n1 = n2
	int v = 2 * data.size() - 2;


	double T = t_student(data, data1);

	std::cout << "Estatistica t-student para: "<< T << std::endl;

}

