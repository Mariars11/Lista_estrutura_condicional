//disciplina: programação estruturada
//matricula: UC21100014
//Nome: Maria Clara Rodrigues Silva
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int numero, resultado;
	
	printf("Informe um número inteiro: ");
	scanf("%d", &numero);
	//Processamento e saída
	if((numero % 2) == 0){
		resultado = numero + 5;
		printf("Resultado: %d", resultado);
	}
	else{
		resultado = numero + 8;
		printf("Resultado: %d", resultado);
	} 
	//Processamento
	//Saída
	return 0;
}
