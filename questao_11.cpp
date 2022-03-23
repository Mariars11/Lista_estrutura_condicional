//disciplina: programação estruturada
//matricula: UC21100014
//Nome: Maria Clara Rodrigues Silva
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	int num_identificacao;
	float media_exercicios, media_aproveitamento, nota1, nota2, nota3;
	char conceito;
	
	printf("Informe o número de identificação: ");
	scanf("%d", &num_identificacao);
	printf("Informe a nota1: ");
	scanf("%f", &nota1);
	printf("Informe a nota2: ");
	scanf("%f", &nota2);
	printf("Informe a nota3: ");
	scanf("%f", &nota3);
	printf("Informe a média dos exercicios: ");
	scanf("%f", &media_exercicios);
	//Processamento
	media_aproveitamento = (nota1 + (nota2 * 2) + (nota3 * 3) + media_exercicios) / 7;
	
	if(media_aproveitamento >= 9.0){
		conceito = 'A';
	}
		else if(media_aproveitamento < 9.0 && media_aproveitamento >= 7.5){
			conceito = 'B';
		}
			else if(media_aproveitamento < 7.5 && media_aproveitamento >= 6.0){
				conceito = 'C';
			}
				else if(media_aproveitamento < 6.0 && media_aproveitamento >= 4.0){
					conceito = 'D';
				}
					else if(media_aproveitamento < 4.0){
						conceito = 'E';
				}
	//Saída
	printf("\n===================================\n");
	printf("	TABELA COM INFORMAÇÕES\n");
	printf("===================================\n");
	printf("[Número de identificação]: {%d}\n", num_identificacao);
	printf("[Nota1]: {%.2f}\n", nota1);
	printf("[Nota2]: {%.2f}\n", nota2);
	printf("[Nota3]: {%.2f}\n", nota3);
	printf("[Média dos exercícios]: {%.2f}\n", media_exercicios);
	printf("[Média de aproveitamento]: {%.2f}", media_aproveitamento);
	if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
		printf("\n\t[APROVADO!]");
	}
		else printf("\n\t[REPROVADO!]");
	printf("\n===================================\n");
	return 0;
}
