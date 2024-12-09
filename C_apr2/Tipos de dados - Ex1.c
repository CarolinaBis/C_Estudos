#include<stdio.h>

int main(){
	setbuf(stdout,NULL);
	int dia, mes, ano;

	printf("Digite o dia que você nasceu: ");
	scanf("%d", &dia);

	printf("Digite o mês que você nasceu: ");
	scanf("%d", &mes);

	printf("Digite o ano que você nasceu: ");
	scanf("%d", &ano);

	printf("Você nasceu em %02d/%02d/%04d", dia, mes, ano);

}
