// Ejercicio 2: Suma de cuadrados de los primeros 100 números -- 177523

#include <stdio.h>

int main() {
    system("cls");
	int num = 100;
	int i;
    long long sumacuadrados = 0;
    
    printf("\033[0;31m""Programa de la suma de los cuadrados de los primeros 100 numeros enteros positivos\n");
    printf("\033[1;31m""177523\n\n");
	for (i = 1; i <= num; i++) {
        sumacuadrados+= (long long)i*i;
        
    }
    
    printf("\033[0;37m""La suma de los cuadrados del 1 al 100 es %lld", sumacuadrados );
    
    return 0;
}

