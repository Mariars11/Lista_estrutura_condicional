//disciplina: programa��o estruturada
//matricula: UC21100014
//Nome: Maria Clara Rodrigues Silva
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int num1, num2;
	bool checar;
	
	printf("Informe o n�mero 1: ");
	scanf("%d", &num1);
	printf("Informe o n�mero 2: ");
	scanf("%d", &num2);
	
	if(num1 == num2){
		checar = 1;
	}
	else checar = 0;
	//Processamento
	if(checar == 1){
		printf("VERDADEIRO!");
	}
	else printf("FALSO!");
	//Sa�da
	return 0;
}
