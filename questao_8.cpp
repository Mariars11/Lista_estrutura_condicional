#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada e processamento
	int num[3], troca;
	for(int i = 0; i < 3; i++){
		do{
			printf("Informe número %d: ", i + 1);
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
	//Saída
	printf("\nNúmeros reordenados: ");
	for(int i = 0; i < 3; i++){
		printf("\n {%dº} - número: %d", i + 1, num[i]);
	}
	return 0;
}
