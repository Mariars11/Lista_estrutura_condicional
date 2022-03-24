#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int numero;
	
	printf("Informe um número inteiro: ");
	scanf("%d", &numero);
	//Processamento e saída
	if((numero % 2) == 0){
		printf("=============\n");
		printf("  %d é par!", numero);
		printf("\n=============\n");
	}
	else{
		printf("=============\n");
		printf(" %d é impar!", numero);
		printf("\n=============\n");
	} 
	return 0;
}

