#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int a, b, c;
	printf("Informe A: ");
	scanf("%d", &a);
	printf("Informe B: ");
	scanf("%d", &b);
	//Processamento e saída
	if(a == b){
		c = a + b;
		printf("O resultado: %d", c);
	}
	else{
		c = a * b;
		printf("O resultado: %d", c);
	}
	return 0;
}
