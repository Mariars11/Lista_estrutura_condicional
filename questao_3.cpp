//disciplina: programa��o estruturada
//matricula: UC21100014
//Nome: Maria Clara Rodrigues Silva
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int numero;
	
	printf("Informe um n�mero inteiro: ");
	scanf("%d", &numero);
	//Processamento e sa�da
	if((numero % 2) == 0){
		printf("=============\n");
		printf("  %d � par!", numero);
		printf("\n=============\n");
	}
	else{
		printf("=============\n");
		printf(" %d � impar!", numero);
		printf("\n=============\n");
	} 
	return 0;
}

