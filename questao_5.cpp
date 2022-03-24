#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int num, resultado;
	printf("Informe o número: ");
	scanf("%d", &num);
	//Processamento
	if(num > 0){
		resultado = num * 2;
		printf("O dobro desse número: %d", resultado);
	}
	else if (num < 0){
		resultado = num * 3;
		printf("O triplo desse número: %d", resultado);
	}
	//Saída
	return 0;
}
