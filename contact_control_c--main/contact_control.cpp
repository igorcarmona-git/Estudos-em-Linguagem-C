#include <stdio.h>
#include <string.h>

#define LIMIT 250
#define FILE_NAME "contacts.ccf"

struct contact
{
	char name[51];
	char phone[16];
	char email[251];
};

contact contacts[LIMIT]; // Struct global para armazenar informações de contato.
int counter = 0;

void contactLoad()
{

	FILE *file = fopen(FILE_NAME, "r"); // Abrir arquivo para somente leitura.
	counter = 0;						// Contador de contatos

	if (!file == NULL) // Se arquivo não estiver vazio, executa.
	{
		rewind(file);

		while (!feof(file)) // Enquanto não chegar ao final do arquivo EOF (end of file), executa.
		{
			fgets(contacts[counter].name, 50, file);
			if (strlen(contacts[counter].name) > 1) // Verifica se tem contatos no arquivo, "> 1" porque o botão ENTER do usuário conta.
			{
				fgets(contacts[counter].phone, 15, file);
				fgets(contacts[counter].email, 250, file);
				counter++; // Incrementa o número de contatos.
			}
		}
	}
	else
	{
		printf("Erro ao carregar contatos.\n");
	}

	fclose(file); // Faz a gravação do arquivo, ao fechar.
}

void contactSave(contact ctt, FILE *file) // Salva as informações de contato
{
	fputs(ctt.name, file);
	fputs(ctt.phone, file);
	fputs(ctt.email, file);
}

bool fileRewrite(int ignore)
{
	bool r = false;
	contact temp[LIMIT]; // struct local temporária.
	int n = 0;			 // Novo contador temporário.

	remove(FILE_NAME); // Função da biblioteca
	FILE *file = fopen(FILE_NAME, "a+");

	if (!file == NULL)
	{
		for (int i = 0; i < counter; i++)
		{
			if (i != ignore)
			{
				contactSave(contacts[i], file);
				temp[n] = contacts[i];
				n++;
			}
		}

		for (int i = 0; i < n; i++)
		{
			contacts[i] = temp[i];
		}
		counter = n;
		r = true;
	}

	fclose(file);

	return r;
}

bool contactInsert(contact ctt)
{
	bool r = false;
	FILE *file = fopen(FILE_NAME, "a+"); //"a+" -> Leitura e Escrita. Os dados são adicionados no fim do arquivo.

	if (!file == NULL) // Se o arquivo não for estiver vazio, executa.
	{
		r = true;

		contactSave(ctt, file);	 // Salva as informações de contato no arquivo.
		contacts[counter] = ctt; // Recebe informações de contato da struct ctt.
		counter++;				 // Incrementa o número de contatos.
	}

	fclose(file);

	return r; // retorna a informação do bool. "true" ou "false".
}

void contactCreate()
{

	if (counter < LIMIT)
	{
		printf("\nNOVO CONTATO\n");

		contact ctt; // strcut local para info de contatos.

		printf("Nome: ");
		fgets(ctt.name, 50, stdin);
		fflush(stdin);

		printf("Telefone: ");
		fgets(ctt.phone, 15, stdin);
		fflush(stdin);

		printf("E-mail: ");
		fgets(ctt.email, 250, stdin);
		fflush(stdin);

		if (contactInsert(ctt)) // Executa apenas se for "true".
		{
			printf("\nContato salvo!\n");
		}
		else
		{
			printf("\nErro ao salvar contato.\n");
		}
	}
	else
	{
		printf("\nMemoria cheia.\n");
	}
}

void contactEdit(int i)
{
	contact ctt; // struct local temporária para editar contato.

	printf("\nEDITAR CONTATO\n");

	printf("%s", contacts[i].name);
	printf("Digite um novo nome: ");
	fgets(ctt.name, 50, stdin);
	fflush(stdin);

	if (strlen(ctt.name) > 1) // Se o tamanho da string digitada for > 1, significa que o usuário alterou. Se < 1, significa que usuário apertou ENTER.
	{
		strcpy(contacts[i].name, ctt.name); // Função de cópia de string.
											// Cópia do Conteúdo  //Conteúdo
	}

	printf("%s", contacts[i].phone);
	printf("Digite um novo telefone: ");
	fgets(ctt.phone, 15, stdin);
	fflush(stdin);

	if (strlen(ctt.phone) > 1)
	{
		strcpy(contacts[i].phone, ctt.phone);
	}

	printf("%s", contacts[i].email);
	printf("Digite um novo email: ");
	fgets(ctt.email, 250, stdin);
	fflush(stdin);

	if (strlen(ctt.email) > 1)
	{
		strcpy(contacts[i].email, ctt.email);
	}

	if (fileRewrite(-1))
	{
		printf("\nContato salvo.\n");
	}
	else
	{
		printf("\nErro ao atualizar arquivo.\n");
	}
}

bool confirm(char *message)
{
	char r;

	printf("%s | S para SIM, outro para NAO", message);
	scanf("%c", &r);

	if (r == 's' || r == 'S')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void contactDelete(int i)
{

	if (confirm("\nDeseja excluir este contato?"))
	{
		if (fileRewrite(i))
		{
			printf("\nContato excluido.\n\n");
		}
	}
}

void menuSelect()
{
	int selected = -1;
	int op = 0;

	printf("Informe o codigo do contato para selecionar | 0 para voltar ao menu : ");
	scanf("%i", &selected); // Ex.: usuário digita 3
	fflush(stdin);

	if (selected > 0)
	{
		if (selected <= LIMIT)
		{
			selected--; // Decrementa para pegar o índice correto do usuário pois foi incrementado anteriormente em "i+1".
						// Ex.: usuário digitou 3, vai ser a posição 2 do vetor. (selected--;)

			printf("\nSelecionado: %s\n", contacts[selected].name); // Posição do vetor de contacts para "name".
			printf("1 - Editar\n");
			printf("2 - Excluir\n");
			printf("Outro para sair\n");

			scanf("%i", &op);
			fflush(stdin); // Limpa a sujeira do teclado no buffer.

			switch (op)
			{
			case 1:
				contactEdit(selected);
				break;
			case 2:
				contactDelete(selected);
				break;
			}
		}
		else
		{
			printf("\nContato inexistente.\n\n");
		}
	}
}

void contactShow(int i)
{
	printf("[%i]\n", i + 1); // Foi incrementado em "i+1" para mostrar apartir do numero 1 a lista de contatos para o usuário.
	printf("%s", contacts[i].name);
	printf("%s", contacts[i].phone);
	printf("%s", contacts[i].email);
}

void contactList()
{
	printf("\nLISTA DE CONTATOS\n\n");

	for (int i = 0; i < counter; i++)
	{
		contactShow(i);
		printf("------------------------\n");
	}

	if (counter > 0) // Verifica se tem contatos para serem selecionados.
		menuSelect();
}

bool searchMatch(char *a, char *b, int i, int limit)
{
	if (a[i] == b[i])
	{
		i++;
		if (i < limit)
		{
			return searchMatch(a, b, i, limit);
		}
		else
		{
			return true; // Retorna "true" se encontrar MATCH de caracteres.
		}
	}
	else
	{
		return false; // Retorna "false" se não encontrar MATCH de caracteres.
	}
}

void contactSearch()
{
	char name[51] = {""};
	bool found = false;

	printf("BUSCA CONTATO\n\n");
	printf("Digite o nome para busca: ");
	fgets(name, 50, stdin);
	fflush(stdin);

	int limit = strlen(name);
	limit--; // "limit--;" -> para não contar o \0 do final da string.

	printf("\nRESULTADO\n\n");

	for (int i = 0; i < counter; i++) // Laço para percorrer os contatos.
	{
		if (strlen(contacts[i].name) >= limit) // Verifica se é possível encontrar contato, se sim, executa a busca.
		{
			if (searchMatch(name, contacts[i].name, 0, limit)) // Retorna "true" se encontrar MATCH de contato, retorna "false" se não encontrar. Se "false"
															   // não entra na condição.
			{
				contactShow(i);
				printf("----------------------------\n");
				found = true;
			}
		}
	}

	if (found) // Se achar o contato na busca, retorna "true", entra na condição para selecionar contatos.
	{
		menuSelect();
	}
}

void menuDefault()
{
	int op = 0;

	while (op != 9)
	{
		printf("Selecione a opcao desejada:\n");
		printf("1 - Novo contato:\n");
		printf("2 - Lista de contatos:\n");
		printf("3 - Buscar contato\n");
		printf("9 - Sair\n");

		scanf("%i", &op);
		fflush(stdin);

		if (op != 9)
		{
			switch (op)
			{
			case 1:
				contactCreate();
				break;
			case 2:
				contactList();
				break;
			case 3:
				contactSearch();
				break;
			default:
				printf("Opcao invalida.");
			}
		}
		else
		{
			printf("Goodbey!\n");
		}
	}
}

int main()
{
	contactLoad();
	menuDefault();
}
