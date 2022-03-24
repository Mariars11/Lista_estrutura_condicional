#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int num1, num2;
	bool checar;
	
	printf("Informe o número 1: ");
	scanf("%d", &num1);
	printf("Informe o número 2: ");
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
	//Saída
	return 0;
}
