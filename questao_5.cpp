//disciplina: programa��o estruturada
//matricula: UC21100014
//Nome: Maria Clara Rodrigues Silva
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int num, resultado;
	printf("Informe o n�mero: ");
	scanf("%d", &num);
	//Processamento
	if(num > 0){
		resultado = num * 2;
		printf("O dobro desse n�mero: %d", resultado);
	}
	else if (num < 0){
		resultado = num * 3;
		printf("O triplo desse n�mero: %d", resultado);
	}
	//Sa�da
	return 0;
}
