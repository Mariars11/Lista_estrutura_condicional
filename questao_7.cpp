//disciplina: programa��o estruturada
//matricula: UC21100014
//Nome: Maria Clara Rodrigues Silva
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int numero, resultado;
	
	printf("Informe um n�mero inteiro: ");
	scanf("%d", &numero);
	//Processamento e sa�da
	if((numero % 2) == 0){
		resultado = numero + 5;
		printf("Resultado: %d", resultado);
	}
	else{
		resultado = numero + 8;
		printf("Resultado: %d", resultado);
	} 
	//Processamento
	//Sa�da
	return 0;
}
