#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	char nome[255];
	int idade;
	
	printf("\nQual � o seu nome? ");
	scanf("%s",&nome);
	
	printf("\nQual a sua idade? ");
	scanf("%d",&idade);
	
	printf("\nNome: %s ",nome);
	printf("\nIdade: %d ",idade);
	
	printf("\nAguarde enquanto fazemos a leitura dos seus dados...");
	printf("\nA primeira letra do seu nome �: %c ",nome[0]);
	
	if(idade >= 18){
		
		printf("\nVoc� � adulto: ");
		
	}else if(idade <= 12){
		
		printf("\nVoc� � crian�a: ");
		
	}else if(idade <=15){
		
		printf("\nVoc� � um adolescente: ");
	}
	
	
	
	
	return 0;
}
