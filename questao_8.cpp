//disciplina: programa��o estruturada
//matricula: UC21100014
//Nome: Maria Clara Rodrigues Silva
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada e processamento
	int num[3], troca;
	for(int i = 0; i < 3; i++){
		do{
			printf("Informe n�mero %d: ", i + 1);
			scanf("%d", &num[i]);
		}while(num[i] == num[i - 1] || num[i] == num[i - 2]);	
	}
	for(int i =0; i < 3 - 1; i++){
		for(int j = i+1; j< 3; j++){
			if(num[i]<num[j]){
				troca = num[i];
				num[i] = num[j];
				num[j] = troca;
			}
		}
	}
	//Sa�da
	printf("\nN�meros reordenados: ");
	for(int i = 0; i < 3; i++){
		printf("\n {%d�} - n�mero: %d", i + 1, num[i]);
	}
	return 0;
}
