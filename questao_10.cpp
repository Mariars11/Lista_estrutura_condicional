//disciplina: programa��o estruturada
//matricula: UC21100014
//Nome: Maria Clara Rodrigues Silva
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int aux;
	float valor_etiqueta, valor_final;
	
	printf("Informe o valor: ");
	scanf("%f", &valor_etiqueta);
	//Processamento
	printf("-> MENU:");
	printf("\n ======================================================================\n");
	printf(" |1| -  � vista em dinheiro ou cheque, recebe 10%% de desconto\n");
	printf(" |2| -  � vista no cart�o de cr�dito, recebe 15%% de desconto\n");
	printf(" |3| -  Em duas vezes, pre�o normal de etiqueta sem juro\n");
	printf(" |4| -  Em duas vezes, pre�o normal de etiqueta mais juros de 10%%\n");
	printf(" |0| -  Fechar a aplica��o\n");
	printf(" ======================================================================\n");
	
	do{
		printf("\nInforme a op��o desejada: ");
		scanf("%d", &aux);
		switch(aux){
			case 0:
				break;
			case 1:
				valor_final = (valor_etiqueta * 0.9);
				printf("\nO resultado: %.2f", valor_final);
				break;
			case 2:{
				valor_final = (valor_etiqueta * 0.85);
				printf("\nO resultado: %.2f", valor_final);
				
			}
			break;
			case 3:{
				valor_final = valor_etiqueta / 2;
				printf("\nValor � pagar por m�s: %.2f", valor_final);
			}
			break;
			case 4:{
				valor_final = (valor_etiqueta * 1.1) / 2;
				printf("\nValor � pagar por m�s: %.2f", valor_final);
			}
			break;		
		}
	}while(aux != 0);
	//Sa�da
	return 0;
}
