// Intervalos de confianca.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "EX1.h"
#include"EX2.h"



int main()
{

    double x = 0.5;
    double y = 0.8;
    int  v = 2;

    /*
    //EXERCICIO 1
    double probx = normal_distribution_cdf(x, 0,1);
    double proby = normal_distribution_cdf(y, 0, 1);

   std::cout << "prob x:  "<< probx <<"   prob y:  "<<proby<< std::endl;

   std::cout << normal_distribution_cdf(x, y);

   */


    
    //EXERCICIO 2 

    std::cout << t_distribution_cdf(x, v)<<"     ";
    std::cout << t_distribution_cdf(y, v) <<std::endl;
    
    std::cout << t_distribution_cdf(x, y, v) << std::endl;
    std::cout << t_distribution_cdf(y, x, v) << std::endl;

    

    return 0;
}
