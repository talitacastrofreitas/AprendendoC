#include <iostream>
using namespace std;

int main(){
    float valorReal, valorDolar;
printf ("Digite o valor em reais a ser convertido: ");
scanf("%f", &valorReal);
valorDolar= valorReal/5.08;
printf ("Valor em dolar $%.2f\n", valorDolar);
    
    return 0;
}
