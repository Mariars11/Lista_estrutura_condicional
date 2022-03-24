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
	printf(" |1| -  À vista em dinheiro ou cheque, recebe 10%% de desconto\n");
	printf(" |2| -  À vista no cartão de crédito, recebe 15%% de desconto\n");
	printf(" |3| -  Em duas vezes, preço normal de etiqueta sem juro\n");
	printf(" |4| -  Em duas vezes, preço normal de etiqueta mais juros de 10%%\n");
	printf(" |0| -  Fechar a aplicação\n");
	printf(" ======================================================================\n");
	
	do{
		printf("\nInforme a opção desejada: ");
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
				printf("\nValor à pagar por mês: %.2f", valor_final);
			}
			break;
			case 4:{
				valor_final = (valor_etiqueta * 1.1) / 2;
				printf("\nValor à pagar por mês: %.2f", valor_final);
			}
			break;		
		}
	}while(aux != 0);
	//Saída
	return 0;
}
