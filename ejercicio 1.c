// Ejercicio 1: Sucesión de números -- 177523

#include <stdio.h>

int main(){
	system("cls");
	int num;
	int i;
	printf("\033[1;34m""Programa de sucesion de numeros\n");
	printf("\033[0;36m""177523\n\n");
	
	printf("\033[0;37m""Cuantos numeros de la sucesion le gustaria imprimir?:");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		printf("%d ", i);
		printf(" -%d  ", i);
	}
	
	return 0;
}



