//disciplina: programa��o estruturada
//matricula: UC21100014
//Nome: Maria Clara Rodrigues Silva
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//Entrada
	char nome[30], sexo, estado_civil[20];
	int tempo_casada;
	
	printf("Informe seu nome: ");
	fgets(nome,30,stdin);
	fflush(stdin);
	
	printf("Informe seu sexo(F|M): ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	printf("Estado c�vil:\n-> casado(a)\n-> solteiro(a)\n-> viuvo(a)");
	printf("\nQual seu estado civil(digite): ");
	fgets(estado_civil, 20, stdin);
	fflush(stdin);
	
	//Processamento e sa�da
	if((sexo == 'f' or sexo == 'F') && (strcmp(estado_civil, "Casada") || strcmp(estado_civil, "casada") || strcmp(estado_civil, "CASADA"))){	
		printf("Informe o tempo de casada(em anos): ");
		scanf("%d", &tempo_casada);
		
		printf("%s est� casada h� %d anos", nome, tempo_casada);
	}
	return 0;
}

