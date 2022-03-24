#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int peso;
	float altura, resultado;
	
	printf("Informe o peso(em kg): ");
	scanf("%d", &peso);
	printf("Informe a altura: ");
	scanf("%f", &altura);
	//Processamento e saída
	resultado = (peso / (altura * altura));
	printf("\n%.2f\n", resultado);
	if(resultado > 30){
		printf("Obeso!");
	}
		else if(resultado < 30 && resultado > 25){
			printf("Acima do peso!");
		}
			else if(resultado < 25 && resultado > 18.5){
				printf("Peso normal!");
			}
				else if(resultado < 18.5){
					printf("Abaixo do peso!");
				}
	return 0;
}
