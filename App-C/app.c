#include <stdio.h>

int main() {
	/*Informacoes de Isllan*/
	char* nome = "Isllan"; // Nome isllan
	int idade = 12; // Idade isllan
	char inicial = 'I'; // inicial isllan
	float dinheiro = 5.0; // dinheiro isllan

	/*informacoes do Surphie*/
	char* nome_2 = "Surphie";
	int idade_2 = 0;
	char inicial_2 = 'S';
	float dinheiro_2 = 0.0;

	printf("%s", nome);
	printf(" : Como que aciona o servidor?\n");
	printf("%s", nome_2);
	printf(" : Apenas acione: /server <comando> <argumento>\n");
	printf("%s", nome);
	printf(" : /server users getNames\n");
	printf("Server: %s", nome_2);
	printf(" and %s", nome);
	printf("%s", nome);
	printf(": Uau, incrivel\n");
	printf("%s", nome_2);
	printf(": /server users getInformationsFull\n");
	printf("Server: %s\n", nome);
	printf("idade: %d\n", idade);
	printf("inicial: %c\n", inicial);
	printf("dinheiro: %.2f\n", dinheiro);
	printf("Server: %s\n", nome_2);
	printf("Idade: %d\n", idade_2);
	printf("Inicial: %c\n", inicial_2);
	printf("dinheiro_2: %.2f\n", dinheiro);

	return 0;
	/* Fim */
}