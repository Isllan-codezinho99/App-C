#include <stdio.h>

int main() {
	/*Information of the Isllan*/

	// idade do Isllan
	int idade = 18;

	// Nome do Isllan
	char* nome = "Isllan";

	// Inicial do Isllan
	char inicial = 'I';

	/*Information of the Surphie*/

	// idade de surphie
	int idade_s = 18;

	// Nome de surphie
	char* nome_s = "Surphie";

	// Inicial de Surphie
	char inicial_s = 'S';

	/*Conversa*/
	
	printf("%s: Ola, com quem eu falo?\n", nome);
	printf("%s: Voce fala com %s\n", nome_s, nome_s);
	printf("%s: Entendo, qual eh o comando que exibe informacoes?\n", nome);
	printf("%s: O comando que usa informacoes eh: /server users GetInformation<Nome de usuario> /all <ou uma coisa especifica>\n", nome_s);
	printf("%s: /server users GetInformationIsllan /all\n", nome);
	printf("Server: information of the Isllan: \n");
	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("inicial: %c\n", inicial);
}