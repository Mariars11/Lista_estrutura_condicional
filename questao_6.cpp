#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 

	int num1, num2;
	
	printf("Informe o num1: ");
	scanf("%d", &num1);
	printf("Informe o num2: ");
	scanf("%d", &num2);
	
	if(num1 == 1 && num2 == 1){
		printf("\nAmbos são verdadeiros!");
	}
		else if((num1 == 1 && num2 == 0) || (num1 == 0 && num2 == 1)){
			printf("\nApenas um é verdadeiro!");
		}
			else{
				printf("\nAmbos são falsos!");	
			} 
	
	return 0;
}
