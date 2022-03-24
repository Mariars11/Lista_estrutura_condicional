#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 
	//entrada
	int a, b, c, soma;
	//processamento
	printf("\t _________________________________\n");
	printf("\t| Informe os valores de A, B e C! |\n");
	printf("\n Informe A: ");
	scanf("%d", &a);
	printf(" Informe B: ");
	scanf("%d", &b);
	printf(" Informe C: ");
	scanf("%d", &c);
	
	soma = a + b;
	//Saída
	if(soma < c){
		printf("A + B é menor que C");
	}
	else printf("   [Falso!]");
	return 0;
}
