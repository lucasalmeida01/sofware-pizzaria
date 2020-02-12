#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct cadastroPizzaria 
{
	char nomePizzaria[30];
	char emailPizzaria[30];
	char bairro1[40];
	char bairro2[40];
	char bairro3[40];
	int cpf, telefone;
} cadastroPizzaria1;

struct pizzaria2 {
	
	int cod;
	char saborPizza[100]; 
	float valorPizza;	

}pizza2;

struct bordas{
	
	int cod;
	char nome[100];
	float valorBorda; 
	
}borda;

struct bebidas{
	
	int codigo;
	char nome[100];
	float valorBebida;
	
}bebida;

struct pizzaria {
	
	int dia;
	int mes;
	int ano;
	int numero;
	int cpf;
	int codigo;
	int telefone;
	int celular;
	char email[100];
	char nome[100]; 
	char endereco[100];
	char cargo[100];
	
}pizza;

struct ingredientes1{
	int cod;
	char ingredientes[100];
}ingredientes2;


struct fornecedor{
	int cod;
	char fornecedores[100];
}fornecedor2;


struct notas{
	int cod;
	char notas[100];
}notas2;

void cadastroDados2 ();

void loginPizzaria ();
void menuPrincipal ();
void manual ();
void suporte ();

void menuestoque ();
void cadastroIngredientes ();
void cadastroNota ();
void cadastroFornecedor ();

void menuRelatorios ();
void desenvolvedores ();

void pedidoPizzaria ();
void menuPercas ();

void cadastroPizza ();
void cadastroBebida ();
void cadastroBorda ();
void cadastroAlimentos();
void cadastroTaxas ();

void excluirPizza ();
void excluirbebida();
void excluirborda();
void excluirtaxa();

void listarpizza();
void listarbebida();
void listarborda();
void listartaxa();

void alterarPedido ();
void menu();
void cadastro();
void pesquisa();

void excluircadastro();
void alterarcadastro();
void listar();

void cadastroIngredientes ();
void listaringredientes ();
void excluiringredientes ();

void cadastroNotas ();
void listarnotas ();
void excluirnotas ();

void cadastrofornecedores ();
void listarfornecedores ();
void excluirfornecedores ();

void menuestoque ();

FILE *cadastroborda;
FILE *auxborda;

FILE *cadastrobebida;
FILE *auxbebida;

FILE *pp;
FILE *aux2;

FILE *cadastrotaxa;
FILE *auxtaxa;

FILE *p;
FILE *aux;
int opcao;

int op, a;

void abrir_arq2() {
	pp = fopen ("cadastroPizzas.txt", "a+b");
	aux2 = fopen ("auxiliar2.txt", "ab");
		if (pp == NULL || aux2 == NULL) {
		printf("ERRO NA ABERTURA DO ARQUIVO\n");
		system("pause");
		exit(1);
	}
	
}

void abrir_arq3() {
	cadastroborda = fopen ("Cadastro de borda.txt", "a+b");
	auxborda = fopen ("Auxiliar borda.txt", "ab");
		if (cadastroborda == NULL || auxborda == NULL) {
		printf("ERRO NA ABERTURA DO ARQUIVO\n");
		system("pause");
		exit(1);
	}
	
}

void abrir_arq4 () {
	cadastrobebida = fopen ("Cadastro de bebidas.txt", "a+b");
	auxbebida = fopen ("Auxiliar bebidas.txt", "ab");
		if (cadastrobebida == NULL || auxbebida == NULL) {
		printf("ERRO NA ABERTURA DO ARQUIVO\n");
		system("pause");
		exit(1);
	}
	
}

FILE *cadastroingredientes;
FILE *auxingredientes;

FILE *cadastrofurnecedoresdeproduto;
FILE *auxfornecedor;

FILE *cadastronotas;
FILE *auxnotas;

void abrir_arq6(){
	
	cadastroingredientes = fopen ("cadastro Ingredientes.txt","a+b");
	auxingredientes = fopen ("auxiliar Ingredientes.txt", "ab");
		if (cadastroingredientes == NULL || auxingredientes == NULL) {
		printf("ERRO NA ABERTURA DO ARQUIVO\n");
		system("pause");
		exit(1);
	}
	
}

void abrir_arq7(){
	
	 cadastrofurnecedoresdeproduto = fopen ("cadastro Fornecedores.txt","a+b");
	auxfornecedor = fopen ("auxiliar Fornecedores.txt", "ab");
		if (cadastrofurnecedoresdeproduto == NULL || auxfornecedor == NULL) {
		printf("ERRO NA ABERTURA DO ARQUIVO\n");
		system("pause");
		exit(1);
		
	}
	
}

void abrir_arq8(){
	
	cadastronotas = fopen ("cadastro Notas.txt","a+b");
	auxnotas = fopen ("auxiliar Notas.txt", "ab");
		if (cadastronotas == NULL || auxnotas == NULL) {
		printf("ERRO NA ABERTURA DO ARQUIVO\n");
		system("pause");
		exit(1);
		
	}
	
}





int main (void) {
	loginPizzaria();
	
}
	
	
void loginPizzaria () {
	char login[15]= "PIZZARIA";
	char login1[15];
	char senha[15] = "123456";
	char senha1[15];
	setlocale (LC_ALL, "Portuguese");
	
	printf ("------------------------------------------------------------------------------\n");
	printf ("___________             _____________    ______________           /\\    \n");        
	printf ("|          |    |                   /                 /          /  \\    \n");
	printf ("|          |    |                  /                /           /    \\     \n");
	printf ("|__________|    |                /                /            /      \\    \n");
	printf ("|               |               /               /             /--------\\ \n");
	printf ("|               |             /               /              /          \\ \n");
	printf ("|               |            /              /               /            \\ \n");
	printf ("|               |          /              /                /              \\ \n");
	printf ("|               |        /____________   /____________    /                \\ \n");
	printf ("-------------------------------------------------------------------------------");
	printf ("\n\nSOFTWARE DE PIZZARIA\n\n");
	printf ("-------------------------------------------------------------------------------\n");
	
	
	for (int x=0; x<3; x++) {
	printf ("\nDIGITE O LOGIN: ");
	fflush (stdin);
	gets (login1);
	
	
	printf ("DIGITE A SENHA: ");
	fflush (stdin);
	gets (senha1);
	
	
		
		if (strcmp(login,login1)==0&&strcmp (senha,senha1)==0) {
		x=2;
		printf ("BEM VINDO AO SISTEMA!\n\n");
		printf ("VOCÊ SERÁ REDIRECIONADO AO MENU PRINCPAL DO SISTEMA, APÓS ISSO APERTE 9 PARA TER ACESSO AO MANUAL.\n\n");
		system ("pause");
		system ("cls");
		menuPrincipal ();
		}
	 
	 	else {
		printf ("\nERRO\n");
		}
	}
	
 }
 
 
 void menuPrincipal () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("SELECIONE A OPÇÃO DESEJADA: \n\n");
	printf ("1 - INICIAR PEDIDO\n");
	printf ("2 - ALTERAR PEDIDO\n");
	printf ("3 - CADASTRAR DADOS PRINCIPAIS\n");
	printf ("4 - CADASTRAR PIZZAS, BEBIDAS, BORDAS E TAXAS\n");
	printf ("5 - CADASTRAR FUNCIONÁRIOS\n");
	printf ("6 - CONTROLE DE ESTOQUE\n");
	printf ("7 - TELA DE RELATÓRIOS\n");
	printf ("8 - ADICIONAR PERCAS E CANCELAMENTOS\n");
	printf ("9 - MANUAL\n");
	printf ("10 - SUPORTE, ELOGIOS E RECLAMAÇÕES\n");
	printf ("11 - DESENVOLVEDORES\n");
	printf ("12 - FINALIZAR SESSÃO\n");
	scanf ("%d", &op);
	
	switch (op) {
		case 1:
		pedidoPizzaria ();
		break;
		
		case 2:
		alterarPedido ();
		break;
		
		case 3:
		system ("cls");
		cadastroDados2 ();
		break;	

		case 4:
		system ("cls");
		cadastroAlimentos ();
		break;
		
		case 5:
		system ("cls");
		menu ();
		break;
		
		case 6:
		system ("cls");
		menuestoque ();
		break;
		
		case 7:
		system ("cls");
		menuRelatorios ();
		break;
		
		case 8:
		system ("cls");
		menuPercas ();
		break;
		
		case 9:
		system ("cls");
		manual ();
		break;
		
		case 10:
		system ("cls");
		suporte ();
		break;
		
		case 11:
		system ("cls");
		desenvolvedores ();
		break;
			
		case 12:
		exit (1);
		default:
		printf ("ERRO\n\n");
		system ("pause");
		system ("cls");
		menuPrincipal ();
		
	}

}


void menuestoque () {
	setlocale (LC_ALL, "Portuguese");
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------PÁGINA DE CADASTRO DE ESTOQUE DA PIZZARIA----------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf ("\nSELECIONE A OPÇÃO DESEJADA: \n\n");
	printf ("1 - CADASTRAR INGREDIENTES\n\n");
	printf ("2 - CADASTRAR FORNECEDORES\n\n");
	printf ("3 - CADASTRAR NOTA FISCAL\n\n");
	printf ("OUTRO VALOR PARA RETORNAR AO MENU\n\n");
	scanf ("%d", &op);
	system ("cls");
	
	switch (op) {
		case 1: 
		printf ("SELECIONE A OPÇÃO DESEJADA: \n\n");
		printf ("1 - CADASTRAR INGREDIENTES\n\n2 - LISTAR INGREDIENTES\n\n3- EXCLUIR INGREDIENTE\n\n");
		scanf ("%d", &op);
		switch (op) {
			case 1:
			cadastroIngredientes ();	
			break;
			
			case 2:
			listaringredientes ();
			break;
			
			case 3:
			excluiringredientes ();
			
			default:
			menuestoque ();
			}
		break;
		
		case 2:
		printf ("SELECIONE A OPÇÃO DESEJADA: \n\n");
		printf ("1 - CADASTRAR FORNECEDORES\n\n2 - LISTAR FORNECEDORES\n\n3- EXCLUIR FORNECEDORES\n\n");
		scanf ("%d", &op);
			switch (op) {
			case 1:
			cadastrofornecedores ();
			break;
			
			case 2:
			listarfornecedores ();
			break;
			
			case 3:
			excluirfornecedores ();
			break;
			
			default:
			menuestoque ();	
			}
			
		break;	
			
		case 3:
		printf ("SELECIONE A OPÇÃO DESEJADA: \n\n");
		printf ("1 - CADASTRAR NOTAS FISCAIS\n2 - LISTAR NOTAS FISCAIS\n3- EXCLUIR NOTA FISCAIL\n\n");
		scanf ("%d", &op);
			switch (op) {
			case 1:
			cadastroNotas ();
			break;
			
			case 2:
			listarnotas ();
			break;
			
			case 3:
			excluirnotas ();
			break;
			
			default:
			menuestoque ();	
			}
		default:
		system ("cls");
		menuPrincipal ();
		}	
}


void cadastroIngredientes() {
		system ("cls");
		abrir_arq6();

	
	do{
		printf ("\nDIGITE O CÓDIGO DO INGREDIENTE: \n");
		scanf ("%d", &ingredientes2.cod);	
		printf("\nDIGITE O NOME DO INGREDIENTE: \n");
		fflush (stdin);
		gets (ingredientes2.ingredientes);		
		fseek(cadastroingredientes,SEEK_END,1);
		fwrite(&ingredientes2,sizeof(ingredientes1),1,cadastroingredientes);

		fflush (stdin);
			
		printf("\nDIGITE 1 PARA CONTINUAR CADASTRANDO OU OUTRO VALOR PARA RETORNAR AO MENU:\n");
		scanf("%d",&op);
		system("cls");
		}while(op==1); 
		
	fclose (cadastroingredientes);
	fclose (auxingredientes);
	system("cls");
	menuestoque ();	

}


void listaringredientes (){
	
	int a;
	abrir_arq6();
	
	
		fseek(cadastroingredientes,SEEK_SET,1);
		while(fread(&ingredientes2,sizeof(ingredientes1),1,cadastroingredientes)==1){
			
			a++;
			
			printf("CODIGO DO INGREDIENTE: %d\n", ingredientes2.cod);
			printf("INGREDIENTE: %s\n",ingredientes2.ingredientes);
			printf("--------------------------------------------------------------------------------\n");
			getchar();
			system("pause");
		}
	fclose(cadastroingredientes);
	fclose(auxingredientes);
	system("cls");
	menuestoque ();
}

void excluiringredientes () {
	system ("cls");
	
	abrir_arq6 ();

	int cod,a;
	
	printf ("DIGITE O CODIGO DO INGREDIENTE QUE DESEJA EXCLUIR: ");
	scanf ("%d", &cod);
	
	fseek(cadastroingredientes,SEEK_SET,1);
	fread(&ingredientes2,sizeof(ingredientes1),1,cadastroingredientes);
	while(!feof(cadastroingredientes)) {
		if(ingredientes2.cod==cod) a++;
		else fwrite(&ingredientes2,sizeof(ingredientes1),1,auxingredientes);
		fread(&ingredientes2,sizeof(ingredientes1),1,cadastroingredientes);
	}
	if(a==0)printf("INGREDIENTE NÃO ENCONTRADO\n");
		else printf("INGREDIENTE FOI EXCLUIDO COM SUCESSO\n");
		
		fclose(cadastroingredientes);
		fclose(auxingredientes);
		
		remove("cadastro Ingredientes.txt");
		rename("auxiliar Ingredientes.txt","cadastro Ingredientes.txt");
		remove("auxiliar Ingredientes.txt");
		
		system("pause");
		system ("cls");	
	menuestoque ();
	}
	
	
	
void cadastrofornecedores() {
		system ("cls");
		abrir_arq7();

		do{
		printf ("\nDIGITE O CÓDIGO DO FORNECEDOR: \n");
		scanf ("%d", &fornecedor2.cod);	
		printf("\nDIGITE O NOME DO INGREDIENTE: \n");
		fflush (stdin);
		gets (fornecedor2.fornecedores);	
		fseek(cadastrofurnecedoresdeproduto,SEEK_END,1);
		fwrite(&fornecedor2,sizeof(fornecedor),1,cadastrofurnecedoresdeproduto);
		fflush (stdin);
			
		printf("\nDIGITE 1 PARA CONTINUAR CADASTRANDO OU OUTRO VALOR PARA RETORNAR AO MENU:\n");
		scanf("%d",&op);
		system("cls");
		}while(op==1); 
		
	fclose (cadastrofurnecedoresdeproduto);
	fclose (auxfornecedor);
	system("cls");
	menuestoque ();	
}


void listarfornecedores (){
	
	int a;
	abrir_arq7();
	
	
		fseek(cadastrofurnecedoresdeproduto,SEEK_SET,1);
		while(fread(&fornecedor2,sizeof(fornecedor),1,cadastrofurnecedoresdeproduto)==1){
			
			a++;
			
			printf("CODIGO DO FORNECEDOR: %d\n", fornecedor2.cod);
			printf("FORNECEDOR: %s\n",fornecedor2.fornecedores);
			printf("--------------------------------------------------------------------------------\n");
			getchar();
			system("pause");
		}
	fclose(cadastrofurnecedoresdeproduto);
	fclose(auxfornecedor);
	system("cls");
	menuestoque ();
}

void excluirfornecedores () {
	system ("cls");
	
	abrir_arq7 ();

	int cod,a;
	
	printf ("DIGITE O CODIGO DO FORNECEDOR QUE DESEJA EXCLUIR: ");
	scanf ("%d", &cod);
	
	fseek(cadastrofurnecedoresdeproduto,SEEK_SET,1);
	fread(&fornecedor2,sizeof(fornecedor),1,cadastrofurnecedoresdeproduto);
	
	while(!feof(cadastrofurnecedoresdeproduto)) {
		
		if(fornecedor2.cod==cod) a++;
		else fwrite(&fornecedor2,sizeof(fornecedor),1,auxfornecedor);
		fread(&fornecedor2,sizeof(fornecedor),1,cadastrofurnecedoresdeproduto);
	}
	if(a==0)printf("FORNECEDOR NÃO ENCONTRADO\n");
		else printf("FORNECEDOR FOI EXCLUIDO COM SUCESSO\n");
		
		fclose(cadastrofurnecedoresdeproduto);
		fclose(auxfornecedor);
		
		remove("cadastro Fornecedores.txt");
		rename("auxiliar Fornecedores.txt","cadastro Fornecedores.txt");
		remove("auxiliar Fornecedores.txt");
		
		system("pause");
		system ("cls");
		menuestoque ();
	
}


void cadastroNotas() {
		system ("cls");
		abrir_arq8();

	
	do{
		printf ("\nDIGITE O CÓDIGO DA NOTA FISCAL: \n");
		scanf ("%d", &notas2.cod);	
		printf("\nDIGITE A NOTA FISCAL: \n");
		fflush (stdin);
		gets (notas2.notas);
		fseek(cadastronotas,SEEK_END,1);
		fwrite(&notas2,sizeof(notas),1,cadastronotas);
		fflush (stdin);
			
		printf("\nDIGITE 1 PARA CONTINUAR CADASTRANDO OU OUTRO VALOR PARA RETORNAR AO MENU:\n");
		scanf("%d",&op);
		system("cls");
		}while(op==1); 
		
	fclose (cadastronotas);
	fclose (auxnotas);
	system("cls");
	menuestoque ();	

}


void listarnotas (){
	
	int a;
	abrir_arq8();
	
	
		fseek(cadastronotas,SEEK_SET,1);
		while(fread(&notas2,sizeof(notas),1,cadastronotas)==1){
			
			a++;
			
			printf("CODIGO DA NOTA FISCAL %d\n", notas2.cod);
			printf("NOTA FISCAL: %s\n",notas2.notas);
			printf("--------------------------------------------------------------------------------\n");
			getchar();
			system("pause");
		}
	fclose(cadastronotas);
	fclose(auxnotas);
	system("cls");
	menuestoque ();
}

void excluirnotas () {
	system ("cls");
	
	abrir_arq8 ();

	int cod,a;
	
	printf ("DIGITE O CODIGO DA NOTA FISCAL QUE DESEJA EXCLUIR: ");
	scanf ("%d", &cod);
	
	fseek(cadastronotas,SEEK_SET,1);
	fread(&notas2,sizeof(notas),1,cadastronotas);
	while(!feof(cadastronotas)) {
		if(notas2.cod==cod) a++;
		else fwrite(&notas2,sizeof(notas),1,auxnotas);
		fread(&notas2,sizeof(notas),1,cadastronotas);
	}
	if(a==0)printf("NOTA FISCAL NÃO ENCONTRADA\n");
		else printf("A NOTA FISCAL FOI EXCLUIDA COM SUCESSO\n");
		
		fclose(cadastronotas);
		fclose(auxnotas);
		
		remove("cadastro Notas.txt");
		rename("auxiliar Notas.txt","cadastroNotas.txt");
		remove("auxiliar Notas.txt");
		
		system("pause");
		system ("cls");
		
		menuestoque ();
}


void manual () {
	setlocale (LC_ALL, "Portuguese");
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("----------------------------MANUAL DO USUÁRIO-----------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n\n\n");
	
printf ("BEM VINDO AO MANUAL DO USUÁRIO\n\n\n");
printf ("PRIMEIRO VOCÊ PRECISA CADASTRAR OS DADOS PRINCIPAIS DA SUA PIZZARIA, TAIS COMO NOME, ENDEREÇO DAS 3 UNIDADES, TELEFONE, EMAIL E CPF DO PROPRIETÁRIO.");
printf (" PARA CADASTRAR SEUS PRODUTOS ACESSE O MENU PRINCIPAL E ESCOLHA A OPÇÃO 3.");
printf (" VOCÊ PODERÁ\nCADASTRAR PIZZAS, ESCOLHENDO SEU SABOR E SEU TAMANHO, P PARA BROTO, M PARA PIZZAS MÉDIAS");
printf ("E G PARA GRANDES, TAMANHO FAMÍLIATAMBÉM É POSSÍVEL CADASTRAR BEBIDAS, BORDAS E TAXAS DE ENTREGA.");
printf (" SÃO ATÉ 3 TAXAS DE ENTREGA, VARIANDO DE ACORDO COM A \nDISTÂNCIA.");
printf ("\nNA OPÇÃO 5 VOCÊ CADASTRA SEUS FUNCIONÁRIOS, COLOCANDO INFORMAÇÕES PRINCIPAIS COMO CPF, NOME E O CARGO");
printf (" NA PIZZARIA. É \nPOSSÍVEL FAZER A BUSCA DOS FUNCIONÁRIOS, EDITAR E EXCLUIR.");
printf (" NO CONTROLE DE ESTOQUE VOCÊ CADASTRA INGREDIENTES, NOTAS \nFISCAIS E FORNECEDORES, LEMBRANDO QUE TUDO FICA SALVO. ");
printf ("\nPARA REALIZAR UM PEDIDO ACESSE A OPÇÃO 1, 'INICIAR PEDIDO'. O PROGRAMA CALCULA O VALOR DO PEDIDO, E SE");
printf (" NECESSÁRIO CALCULAO TROCO.\nA TELA DE RELATÓRIOS, NA OPÇÃO 7 CALCULA SABORES MAIS VENDIDOS, UNIDADE QUE ");
printf ("MAIS VENDE, ALÉM DA TOTALIZAÇÃO DIÁRIA E\nMENSAL, MAS PARA QUE SE UTILIZE ALGUM DESSES RECURSOS É PRECISO UTILIZAR O SOFTWARE A PELO MENOS UMA SEMANA. NA OPÇÃO 8 VOCÊ ADICIONA PERCAS E CANCELAMENTOS.");
printf (" PARA ADICIONAR PROMOÇÕES, BASTA MUDAR O VALOR DA PIZZA EM PROMOÇÃO NA TELA DE \nCADASTRO DE ALIMENTOS. ATRAVÉS DA OPÇÃO 9 VOCÊ ACESSA ESSE MESMO MANUAL. CASO POSSUA MAIS ALGUMA DÚVIDA ENTRE EM CONTATOCOM O SUPORTE, NA OPÇÃO 10. NA OPÇÃO 11 VOCÊ VISUALIZA O NOME DOS DESENVOLVEDORES. \n\nOBRIGADO POR UTILIZAR O SOFTWARE.\n\n");



system ("pause");
system ("cls");
menuPrincipal ();
}


void suporte () {
	setlocale (LC_ALL, "Portuguese");
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------PÁGINA DE SUPORTE E ELOGIOS/RECLAMAÇÕES------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n\n\n");
	
printf ("O SUPORTE SERVER PARA ENVIO DE ELOGIOS OU RECLAMAÇÕES DE CLIENTES. INFORME O EMAIL DA PIZZARIA AO CLIENTE PARA ISSO.\n");
printf ("E PARA O ESCLARECIMENTO DE DÚVIDAS, ENVIE UMA MESSAGEM COM SEU NOME E TELEFONE PARA NOSSO EMAI:\n'XX@HOTMAIL.COM");
printf ("\nRESPONDEREMOS O MAIS RÁPIDO POSSÍVEL. OBRIGADO.\n\n");

system ("pause");
system ("cls");
menuPrincipal ();
}

void cadastroDados2	() {
setlocale (LC_ALL, "Portuguese");


	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("------------------PÁGINA DE CADASTRO DE DADOS PRINCIPAIS------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n\n");
	

	printf ("SELECIONE A OPÇÃO DESEJADA:\n");
	printf ("1 - ADICIONAR DADOS PRINCIPAIS DA PIZZARIA.\n");
	printf ("2 - VISUALIZAR DADOS PRINCIPAIS DA PIZZARIA.\n");
	printf ("OUTRO VALOR PARA RETORNAR AO MENU PRINCIPAL\n");
	scanf ("%d", &op);
	
	
	switch (op) {
		
	case 1:
	system ("cls");
	FILE* cadastroDados;  
	cadastroDados = fopen ("cadastroDados.txt", "a");
	
	if (cadastroDados == NULL) {
		printf ("Erro");
		getchar ();
		exit (0);
		}	
	
	printf ("\nDIGITE O NOME DE SUA PIZZARIA: \n");
	fflush (stdin);
	gets (cadastroPizzaria1.nomePizzaria);	
	printf ("DIGITE O BAIRRO DA PRIMEIRA UNIDADE DA PIZZARIA: \n");
	fflush (stdin);
	gets (cadastroPizzaria1.bairro1);
	printf ("DIGITE O BAIRRO DA SEGUNDA UNIDADE DA PIZZARIA: \n");
	fflush (stdin);
	gets (cadastroPizzaria1.bairro2);
	printf ("DIGITE O BAIRRO DA TERCEIRA UNIDADE DA PIZZARIA: \n");
	fflush (stdin);
	gets (cadastroPizzaria1.bairro3);
	printf ("DIGITE O EMAIL PRINCIPAL PARA A PIZZARIA: \n");
	fflush (stdin);
	gets (cadastroPizzaria1.emailPizzaria);
	printf ("DIGITE O CPF PRINCIPAL: \n");
	scanf ("%d", &cadastroPizzaria1.cpf);
	printf ("DIGITE O TELEFONE DA PIZZARIA: \n");
	scanf ("%d", &cadastroPizzaria1.telefone);
	
	fprintf (cadastroDados, "\nNOME DA PIZZARIA: %s\nEMAL PRINCIPAL DA PIZZARIA: %s\nCPF DO PROPIETÁRIO: %d\nTELEFONE: %d\nBAIRRO DA PRIMEIRA UNIDADE: %s\nBAIRRO DA SEGUNDA UNIDADE: %s\nBAIRRO DA TERCEIRA UNIDADE: %s", cadastroPizzaria1.nomePizzaria, cadastroPizzaria1.emailPizzaria, cadastroPizzaria1.cpf, cadastroPizzaria1.telefone,cadastroPizzaria1.bairro1, cadastroPizzaria1.bairro2, cadastroPizzaria1.bairro3);
	fclose (cadastroDados);
	printf ("INFORMAÇOES CADASTRADAS COM SUCESSO: \n");
	system ("pause");
	system ("cls");
	cadastroDados2 ();
	break;
	
	case 2:
	system ("cls");
	printf ("INFORMAÇOES CADASTRADAS: \n");

	cadastroDados = fopen ("cadastroDados.txt", "r");
	
	if (cadastroDados == NULL) {
	printf ("ERRO");
	getchar ();
	system ("cls");
	cadastroDados2 ();
	}	

	char frase [100];
	while (fgets(frase,100, cadastroDados) !=NULL) {
			printf ("%s", frase);	
	} 
	fclose (cadastroDados);
	printf ("\n\n");
	system ("pause");
	system ("cls");	
	menuPrincipal ();
	break;
	
	
	default:
	system ("cls");
	menuPrincipal ();

	}
}

void menuRelatorios () {
	setlocale (LC_ALL, "Portuguese");
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("----------------------------TELA DE RELATÓRIOS----------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf ("\nSELECIONE A OPÇÃO DESEJADA: \n\n");
	printf ("1 - SABORES MAIS VENDIDOS POR UNIDADE DA REDE\n");
	printf ("2 - UNIDADE DA REDE QUE MAIS VENDE\n");
	printf ("3 - TOTALIZAÇÃO DIÁRIA\n");
	printf ("4 - TOTALIZAÇÃO MENSAL\n");
	printf ("5 - FATURAMENTO POR UNIDADE\n");
	printf ("6 - FATURAMENTO TOTAL DA REDEn");
	printf ("OUTRO VALOR PARA RETORNAR AO MENU\n");
	scanf ("%d", &op);
	system ("cls");
	
	switch (op) {
		case 1:
		printf ("PARA UTILIZAR ESSE RECURSO É PRECISO ESTAR USANDO O SOFTWARE A PELO MENOS UMA SEMANA.\n\n\n");
		system ("pause");
		menuRelatorios ();
		break;
		
		case 2:
		printf ("PARA UTILIZAR ESSE RECURSO É PRECISO ESTAR USANDO O SOFTWARE A PELO MENOS UMA SEMANA.\n\n\n");
		system ("pause");
		menuRelatorios ();
		break;
			
		case 3:
		printf ("TOTALIZAÇÃO DIÁRIA\n");
			FILE* cadastroPedidos;
		cadastroPedidos = fopen ("cadastroPedidos.txt", "r");
	
		if (cadastroPedidos == NULL) {
		printf ("Erro");
		getchar ();
		exit (0);
		}
		
		char frase [100];
		while (fgets(frase,100, cadastroPedidos) !=NULL) {
				printf ("%s", frase);	
		} 
		fclose (cadastroPedidos);
		
		system ("pause");
		system ("cls");
		menuRelatorios ();
		break;
				
		case 4:
		printf ("PARA UTILIZAR ESSE RECURSO É PRECISO ESTAR USANDO O SOFTWARE A PELO MENOS UMA SEMANA.\n\n\n");
		system ("pause");
		menuRelatorios ();
		break;
					
		case 5:
		printf ("PARA UTILIZAR ESSE RECURSO É PRECISO ESTAR USANDO O SOFTWARE A PELO MENOS UMA SEMANA.\n\n\n");
		system ("pause");
		menuRelatorios ();
		break;
						
		case 6:
		printf ("PARA UTILIZAR ESSE RECURSO É PRECISO ESTAR USANDO O SOFTWARE A PELO MENOS UMA SEMANA.\n\n\n");
		system ("pause");
		menuRelatorios ();
		break;
							
		default:
		system ("cls");
		menuPrincipal ();
	}
}
	
void desenvolvedores () {
	setlocale (LC_ALL, "Portuguese");
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------------------DESENVOLVEDORES------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n\n\n");
	
	
printf ("LUCAS ALMEIDA SANTOS - RA:F112AA5\n");
printf ("RAUL LOPES DA SILVA - RA:F1229G8\n");
printf ("RICARDO SALES QUAGLIO JUNIOR - RA:F107035\n");
printf ("ORIENTADOR - MARCELO SANTOS\n\n");	
printf ("UNIP - UNIVERSIDADE PAULISTA\n\n");

system ("pause");
system ("cls");
menuPrincipal ();

}
	
void cadastroAlimentos () {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------PÁGINA DE CADASTRO DE ALIMENTOS E TAXAS------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	
	printf ("1 - CADASTRO DE PIZZAS\n\n");
	printf ("2 - CADASTRO DE BEBIDAS\n\n");
	printf ("3 - CADASTRO DE BORDAS\n\n");
	printf ("4 - CADASTRO DE TAXAS DE ENTREGA\n\n");
	printf ("OUTRO VALOR PARA RETORNAR AO MENU\n\n");
	printf ("SELECIONE A OPÇÃO DESEJADA:\n\n");

	scanf ("%d", &op);
	system ("cls");
	
	switch (op) {
		case 1:
			
		printf ("\nSELECIONE A OPÇÃO DESEJADA:\n\n");
		printf ("1 - CADASTRAR PIZZA\n\n");
		printf ("2 - EXCLUIR PIZZA CADASTRADA\n\n");
		printf ("3 - VISULIAZAR PIZZAS CADASTRADAS\n\n");
		printf ("OUTRO VALOR PARA RETORNAR AO MENU\n\n");

		scanf ("%d", &op);
		system ("cls");
		
			switch (op) {
			case 1: 
			cadastroPizza ();
			break;
			
			case 2:
			excluirPizza ();	
			break;
			
			case 3:
			listarpizza();
			break;
			
			default:
			cadastroAlimentos ();
		}
				
		
		case 2:
		
		printf ("\nSELECIONE A OPÇÃO DESEJADA:\n\n");	
		printf ("1 - CADASTRAR BEBIDA\n\n");
		printf ("2 - EXCLUIR BEBIDA CADASTRADA\n\n");
		printf ("3 - VISULIAZAR BEBIDAS CADASTRADAS\n\n");
		printf ("OUTRO VALOR PARA RETORNAR AO MENU\n\n");

		scanf ("%d", &op);
		system ("cls");
		
			switch (op) {
			case 1:
			cadastroBebida ();
			break;
			
			case 2:
			excluirbebida();	
			break;

			case 3:
			listarbebida();
			break;
			
			default:
			cadastroAlimentos();
			}
		break;
		
		case 3:
		printf ("\nSELECIONE A OPÇÃO DESEJADA:\n\n");
		printf ("1 - CADASTRAR BORDA\n\n");
		printf ("2 - EXCLUIR BORDA CADASTRADA.\n\n");
		printf ("3 - VISULIAZAR BORDAS CADASTRADAS\n\n");
		printf ("OUTRO VALOR PARA RETORNAR AO MENU\n\n");
		scanf ("%d", &op);
		system ("cls");
			switch (op) {
			case 1: 
			cadastroBorda ();
			break;
			
			case 2:
			excluirborda();
			break;
			
			case 3:
			listarborda();
			break;
			
			default:
			cadastroAlimentos();
			}
			break;
		
		case 4:
		cadastroTaxas();
		break;
		
		default:
		menuPrincipal ();
		}
}



void cadastroPizza() {
	system ("cls");
	abrir_arq2();
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------PÁGINA DE CADASTRO DE SABORES DE PIZZAS------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
		do {
			printf ("DIGITE O CÓDIGO DA PIZZA (EX:101)\n\n");
			scanf ("%d", &pizza2.cod);
			fflush (stdin);
			printf("DIGITE O SABOR DA PIZZA E O TAMANHO, SENDO P PARA BROTO, M PARA MÉDIO E G PARA GRANDE (EX: CALABRESA_P):\n\n");
			gets (pizza2.saborPizza);
			fflush (stdin);
			printf("DIGITE O VALOR:\n\n");
			scanf ("%f",&pizza2.valorPizza);
			fflush (stdin);
			
			fseek(pp,SEEK_END,1);
			fwrite(&pizza2,sizeof(pizzaria2),1,pp);
			
			fflush (stdin);
			
			printf("\nDIGITE 1 PARA CONTINUAR CADASTRANDO OU OUTRO VALOR PARA RETORNAR AO MENU:\n");
			scanf("%d",&op);
			system("cls");
		}while(op==1); 
		
	fclose (pp);
	fclose (aux2);
	cadastroAlimentos ();
}
	
	
void cadastroBebida () {
	
	abrir_arq4();
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("----------------------PÁGINA DE CADASTRO DE BEBIDAS-----------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	do{
		printf("DIGITE UM CODIGO PARA BEBIDA:\n\n");
		scanf("%d",&bebida.codigo);
		fflush (stdin);
		printf ("DIGITE O NOME DA BEBIDA:\n\n");
		fflush (stdin);
		gets (bebida.nome);
		fflush (stdin);
		printf ("DIGITE O VALOR DA BEBIDA:\n\n");
		scanf ("%f",&bebida.valorBebida);
		
		fseek(cadastrobebida,SEEK_END,1);
		fwrite(&bebida,sizeof(bebidas),1,cadastrobebida);

		printf ("\nDIGITE 1 PARA CONTINUAR CADASTRANDO OU OUTRO VALOR PARA RETORNAR AO MENU DE CADASTRO:\n");
		scanf ("%d", &op);
		system ("cls");
		
	}while (op==1);
	
	fclose(cadastrobebida);
	fclose(auxbebida);
	cadastroAlimentos ();
}

void cadastroBorda() {
	
	abrir_arq3();
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------------PÁGINA DE CADASTRO DE BORDAS ----------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	do {
		
		fflush (stdin);
		printf("DIGITE UM CODIGO PARA BORDA:\n\n");
		scanf("%d",&borda.cod);
		fflush (stdin);
		printf("DIGITE O SABOR DA BORDA:\n\n");
		gets(borda.nome);
		fflush (stdin);
		printf("DIGITE O VALOR:\n\n");
		scanf ("%f",&borda.valorBorda);
		fflush (stdin);
		
		fseek(cadastroborda,SEEK_END,1);
		fwrite(&borda,sizeof(bordas),1,cadastroborda);
		
		printf("\n\nDIGITE 1 PARA CONTINUAR CADASTRANDO OU OUTRO VALOR PARA RETORNAR AO MENU DE CADASTRO:\n");
		scanf("%d",&op);
		system("cls");
		
	}while(op==1);
	fclose (cadastroborda);
	fclose (auxborda);
	cadastroAlimentos ();
	
}
	
void cadastroTaxas () {
	setlocale (LC_ALL, "Portuguese");
	float taxa1, taxa2, taxa3;

	FILE *cadastroTaxas;
	cadastroTaxas = fopen ("cadastroTaxas.txt", "w");
		
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("------------------PÁGINA DE CADASTRO DE TAXAS DE ENTREGA------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf ("DIGITE O VALOR PARA AS TAXAS CONFORME AS DISTÂNCIAS:\n\n");
	printf ("\nDE 0 A 3km\n");
	scanf ("%f", &taxa1);
	
	printf ("\nDE 3km A 5km\n");
	scanf ("%f",&taxa2);
	
	printf ("\nACIMA DE 5km\n\n");
	scanf ("%f",&taxa3);
	
	fprintf (cadastroTaxas, "TAXA 1 DE ATÉ 3km: %.2f\nTAXA 2 DE 3km A 5km: %.2f\nTAXA 3 ACIMA DE 5km: %.2f\n",taxa1, taxa2, taxa3); 
	fclose(cadastroTaxas);
	
	system ("pause");
	system ("cls");
	cadastroAlimentos ();
}	

void excluirPizza () {
	system ("cls");
	
	abrir_arq2 ();

	int cod,a;
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-------------------PÁGINA DE EXCLUIR CADASTRO DE PIZZAS-------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf ("DIGITE O CODIGO DA PIZZA QUE DESEJA EXCLUIR: ");
	scanf ("%d", &cod);
	
	fseek(pp,SEEK_SET,1);
	fread(&pizza2,sizeof(pizzaria2),1,pp);
	while(!feof(pp)) {
		if(pizza2.cod==cod) a++;
		else fwrite(&pizza2,sizeof(pizzaria2),1,aux2);
		fread(&pizza2,sizeof(pizzaria2),1,pp);
	}
	if(a==0)printf("PIZZA NÃO ENCONTRADA\n");
		else printf("PIZZA FOI EXCLUIDA COM SUCESSO\n");
		
		fclose(pp);
		fclose(aux2);
		
		remove("cadastroPizzas.txt");
		rename("auxiliar2.txt","cadastroPizzas.txt");
		remove("auxiliar2.txt");
		
		system("pause");
		system ("cls");
		cadastroAlimentos ();
}

void excluirbebida() {
	system ("cls");
	
	abrir_arq4 ();

	int cod,a;
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-------------------PÁGINA DE EXCLUIR CADASTRO DE BEBIDAS------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf ("DIGITE O CODIGO DA BEBIDA QUE DESEJA EXCLUIR: ");
	scanf ("%d", &cod);
	
	fseek(cadastrobebida,SEEK_SET,1);
	fread(&bebida,sizeof(bebidas),1,cadastrobebida);
	while(!feof(cadastrobebida)) {
		if(bebida.codigo==cod) a++;
		else fwrite(&bebida,sizeof(bebidas),1,auxbebida);
		fread(&bebida,sizeof(bebidas),1,cadastrobebida);
	}
	if(a==0)printf("BEBIDA NÃO ENCONTRADA\n");
		else printf("BEBIDA FOI EXCLUIDO COM SUCESSO\n");
		
		fclose(cadastrobebida);
		fclose(auxbebida);
		
		remove("Cadastro de bebidas.txt");
		rename("auxiliar bebidas.txt","Cadastro de bebidas.txt");
		remove("auxiliar bebidas.txt");
		
		system("pause");
		system ("cls");
		
		cadastroAlimentos ();
}
void excluirborda () {
	system ("cls");
	
	abrir_arq3 ();

	int cod,a;
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("------------------PÁGINA DE EXCLUIR CADASTRO DE BORDA---------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	
	printf ("DIGITE O CODIGO DA BORDA QUE DESEJA EXCLUIR: ");
	scanf ("%d", &cod);
	
	fseek(cadastroborda,SEEK_SET,1);
	fread(&borda,sizeof(bordas),1,cadastroborda);
	while(!feof(cadastroborda)) {
		if(borda.cod==cod) a++;
		else fwrite(&borda,sizeof(bordas),1,auxborda);
		fread(&borda,sizeof(bordas),1,cadastroborda);
	}
	if(a==0)printf("BORDA NÃO ENCONTRADA\n");
		else printf("BORDA FOI EXCLUIDA COM SUCESSO\n");
		
		fclose(cadastroborda);
		fclose(auxborda);
		
		remove("Cadastro de borda.txt");
		rename("auxiliar borda.txt","Cadastro de borda.txt");
		remove("auxiliar borda.txt");

		system("pause");
		system ("cls");
		
		cadastroAlimentos ();
}
void listarpizza (){
	
	int a;
	
	abrir_arq2();
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("------------------------LISTAGEM DOS SABORES DE PIZZA---------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
		fflush (stdin);
		fseek(pp,SEEK_SET,1);
		while(fread(&pizza2,sizeof(pizzaria2),1,pp)==1){
			
			a++;
			
			printf("PIZZA ENCONTRADA\n\n");
			printf("CODIGO DA PIZZA: %d\n", pizza2.cod);
			printf("SABOR E TAMANHO: %s\n", pizza2.saborPizza);
			printf("VALOR: %.2f\n", pizza2.valorPizza);
			printf("--------------------------------------------------------------------------------\n");
			getchar();
			system ("pause");
		}
		
	fclose(pp);
	fclose(aux2);
	cadastroAlimentos ();
}

void listarbebida (){
	
	int a;
	abrir_arq4();
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------LISTAGEM DAS BEBIDAS----------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
		fseek(cadastrobebida,SEEK_SET,1);
		while(fread(&bebida,sizeof(bebidas),1,cadastrobebida)==1){
			
			a++;
			
			printf("BEBIDA ENCONTRADA\n\n");
			printf("CODIGO DA BEBIDAS: %d\n",bebida.codigo);
			printf("NOME: %s\n", bebida.nome);
			printf("VALOR: %.2f\n", bebida.valorBebida);
			printf("--------------------------------------------------------------------------------\n");
			getchar();
			system("pause");
		}
		
	fclose(cadastrobebida);
	fclose(auxbebida);
	cadastroAlimentos ();
	
}

void listarborda (){
	
	int a;
	abrir_arq3();
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------------LISTAGEM DOS SABORES DE BORDA----------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
		fseek(cadastroborda,SEEK_SET,1);
		while(fread(&borda,sizeof(bordas),1,cadastroborda)==1){
			
			a++;
			
			printf("BORDA ENCONTRADA\n\n");
			printf("CODIGO DA BORDA: %d\n",borda.cod);
			printf("SABOR: %s\n",borda.nome);
			printf("VALOR: %.2f\n",borda.valorBorda);
			printf("--------------------------------------------------------------------------------\n");
			getchar();
			system("pause");
		}
	fclose(cadastroborda);
	fclose(auxborda);
	cadastroAlimentos ();
}



void pedidoPizzaria () {
	int telCliente, cpfCliente, numeroPedido;
	float valorPizza1=0, valorPizza2=0, valorPizza3=0, valorPizza4=0, valorPizza5=0, valorPizza6=0, valorPizza7=0, valorPizza8=0, valorPizza9=0, valoresPizza=0, valoresPizza2=0, valoresPizza3=0, valorBorda, valorBebida, valorBebida2=0, valorBebida3=0, valorTaxa, valorCliente, total, troco;
	char nomeCliente [30], enderCliente [50]; 
	
	setlocale (LC_ALL, "Portuguese");
	system ("cls");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-------------------------------TELA DE PEDIDOS----------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n\n\n");
	
	FILE* cadastroPedidos;
	cadastroPedidos = fopen ("cadastroPedidos.txt", "a");
	
	if (cadastroPedidos == NULL) {
		printf ("Erro");
		getchar ();
		exit (0);
		}	
	
	printf ("DIGITE O NUMERO DO PEDIDO (EX: 0001) \n");
	scanf ("%d", &numeroPedido);
	printf ("DIGITE 1 PARA REALIZAR O CADASTRO DO CLIENTE OU OUTRO TECLA CASO O CLIENTE JA TENHA CADASTRO.\n");
	scanf ("%d", &op);
	
	switch (op) {	
		case 1:
		system ("cls");
		FILE *cadastroCliente;
		cadastroCliente = fopen ("cadastroCliente.txt", "a");
		
		if (cadastroCliente == NULL) {
		printf ("Erro");
		getchar ();
		exit (0);
		}
		
		printf ("DIGITE O NOME COMPLETO DO CLIENTE: \n");
		fflush (stdin);
		gets (nomeCliente);
		printf ("DIGITE O CPF DO CLIENTE: \n");
		scanf ("%d", &cpfCliente);
		printf ("DIGITE O ENDEREÇO DO CLIENTE: \n");
		fflush (stdin);
		gets (enderCliente);
		printf ("DIGITE O TELEFONE DO CLIENTE: \n");
		scanf ("%d", &telCliente);
		fprintf (cadastroCliente, "NOME :%s\nCPF :%d\nENDEREÇO :%s\nTELEFONE: %d\n", nomeCliente, cpfCliente, enderCliente, telCliente);
		fclose (cadastroCliente);
		system ("cls");
		break;
		
		default:
		system ("cls");
		printf ("CLIENTE JÁ POSSUI CADASTRO, CONTINUAR COM O PEDIDO.\n");
		}
	
 
	printf ("ESCOLHA A PIZZA E O TAMANHO (P,M ou G)\n");
	printf ("PIZZAS CADASTRADAS:\n");
	abrir_arq2();

	fflush (stdin);
		fseek(pp,SEEK_SET,1);
		while(fread(&pizza2,sizeof(pizzaria2),1,pp)==1){
			
		a++;
		printf("CODIGO DA PIZZA: %d\n", pizza2.cod);
		printf("SABOR E TAMANHO: %s\n", pizza2.saborPizza);
		printf("VALOR: %.2f\n", pizza2.valorPizza);
		printf("--------------------------------------------------------------------------------\n");
		}
	fclose(pp);
	fclose(aux2);
	
	
	printf ("\nDIGITE 1 PARA ADICONAR UMA PIZZA DE UM SABOR, 2 PARA DOIS SABORES OU OUTRA TECLA PARA CONTINUAR: ");
	scanf ("%d", &op);
	switch (op) {
		case 1:
		printf ("\nDIGITE O VALOR DA PIZZA: ");
		scanf ("%f", &valorPizza1);
		break;
		
		case 2:
		printf ("\nDIGITE O VALOR DO PRIMEIRO SABOR: ");
		scanf ("%f", &valorPizza2);
		printf ("\nDIGITE O VALOR DO SEGUNDO SABOR: ");
		scanf ("%f", &valorPizza3);
		valoresPizza = (valorPizza2 + valorPizza3) / 2;
		break;
		
		default:
		printf ("\nERRO\n");
		system ("pause");
		system ("cls");
		pedidoPizzaria ();
		}
	
	printf ("\nDIGITE 1 PARA ADICONAR UMA PIZZA DE UM SABOR, 2 PARA DOIS SABORES OU OUTRA TECLA PARA CONTINUAR: ");
	scanf ("%d", &op);
	switch (op) {
		case 1:
		printf ("\nDIGITE O VALOR DA PIZZA: ");
		scanf ("%f", &valorPizza4);
		break;
		
		case 2:
		printf ("\nDIGITE O VALOR DO PRIMEIRO SABOR: ");
		scanf ("%f", &valorPizza5);
		printf ("\nDIGITE O VALOR DO SEGUNDO SABOR: ");
		scanf ("%f", &valorPizza6);
		valoresPizza2 = (valorPizza5 + valorPizza6) / 2;
		break;
		
		default:
		printf ("\n\n");
		}
		
	
	printf ("\nDIGITE 1 PARA ADICONAR UMA PIZZA DE UM SABOR, 2 PARA DOIS SABORES OU OUTRA TECLA PARA CONTINUAR: ");
	scanf ("%d", &op);
	switch (op) {
		case 1:
		printf ("\nDIGITE O VALOR DA PIZZA: ");
		scanf ("%f", &valorPizza7);
		break;
		
		case 2:
		printf ("\nDIGITE O VALOR DO PRIMEIRO SABOR: ");
		scanf ("%f", &valorPizza8);
		printf ("\nDIGITE O VALOR DO SEGUNDO SABOR: ");
		scanf ("%f", &valorPizza9);
		valoresPizza3 = (valorPizza8 + valorPizza9) / 2;
		break;
		
		default:
		printf ("\n\n");
		}
	
	system ("cls");
	printf ("DIGITE 1 PARA BORDA EXTRA OU OUTRA TECLA SE NÃO ACOMPANHA: \n");
	scanf ("%d", &op);
	
	switch (op) {
		case 1:
			printf ("ESCOLHA A BORDA: \n");
			printf ("BORDAS CADASTRADAS: \n");
			abrir_arq3();

			fseek(cadastroborda,SEEK_SET,1);
			while(fread(&borda,sizeof(bordas),1,cadastroborda)==1){
			a++;
			printf("CODIGO DA BORDA: %d\n",borda.cod);
			printf("SABOR: %s\n",borda.nome);
			printf("VALOR: %.2f\n",borda.valorBorda);
			printf("--------------------------------------------------------------------------------\n");
			}
			fclose(cadastroborda);
			fclose(auxborda);
		
			printf ("INFORME O VALOR DA BORDA ESCOLHIDA: \n");
			scanf ("%f", &valorBorda);
		break;
	
		default:
		printf ("\n");
		}
	
	system ("cls");
	printf ("DIGITE 1 SE ACOMPANHA BEBIDA OU OUTRA TECLA SE NÃO ACOMPANHA: \n");
	scanf ("%d", &op);
	
	switch (op) {
		case 1:
			printf ("BEBIDAS CADASTRADAS: \n");
			abrir_arq4();
		
			fseek(cadastrobebida,SEEK_SET,1);
			while(fread(&bebida,sizeof(bebidas),1,cadastrobebida)==1){
			a++;
					
			printf("CODIGO DA BEBIDAS: %d\n",bebida.codigo);
			printf("NOME: %s\n", bebida.nome);
			printf("VALOR: %.2f\n", bebida.valorBebida);
			printf("--------------------------------------------------------------------------------\n");
			}
			fclose(cadastrobebida);
			fclose(auxbebida);
					
			printf ("INFORME O VALOR DA BEBIDA ESCOLHIDA: \n");
			scanf ("%f", &valorBebida);
			printf ("INFORME O VALOR DA SEGUNDA BEBIDA, CASO NÃO SEJA PRECISO DIGITGE 0 \n");
			scanf ("%f", &valorBebida2);
			printf ("INFORME O VALOR DA TERCEIRA BEBIDA, CASO NÃO SEJA PRECISO DIGITE 0 \n");
			scanf ("%f", &valorBebida3);

		break;
		
		default:
			printf ("\n");
		}
	
	
	system ("cls");
	printf ("DIGITE 1 CASO O PEDIDO SEJA DELIVERY OU OUTRA TECLA CASO NÃO SEJA.\n");
	scanf ("%d", &op);
	
	switch (op) {
		case 1:
			
			FILE *cadastroTaxas;
			cadastroTaxas = fopen ("cadastroTaxas.txt", "r");
	
			if (cadastroTaxas == NULL) {
			printf ("ERRO");
			getchar ();
			exit (0);
			}	

			char frase [100];
			while (fgets(frase,100, cadastroTaxas) !=NULL) {
			printf ("%s", frase);	
			} 
			fclose (cadastroTaxas);
		
		
	
		printf ("INFORME O VALOR DA TAXA DE ENTREGA: ");
		scanf ("%f", &valorTaxa);
		break;		
	
		default:
		printf ("PEDIDO VAI SER RETIRADO NA PIZZARIA.\n");
		
	}
		
	total = valorPizza1 + valorPizza4 + valorPizza7 + valoresPizza + valoresPizza2 + valoresPizza3 + valorBorda + valorBebida + valorBebida2 + valorBebida3 + valorTaxa;	
	
	
	fprintf (cadastroPedidos, "PEDIDO NÚMERO: %d\nVALOR TOTAL DE: %f\n\n", numeroPedido, total);
	fclose (cadastroPedidos);

	printf ("DIGITE 1 SE A FORMA DE PAGAMENTO FOR DINHEIRO COM NECESSIDADE DE TROCO, 2 PARA DINHEIRO SEM TROCO E 3 PARA CARTÃO:\n");
	scanf ("%d", &op);
	
	switch (op) {

		case 1:
			printf ("DIGITE O VALOR QUE O CLIENTE PAGARÁ: \n");
			scanf ("%f", &valorCliente);
			troco = valorCliente - total;
			printf ("TOTAL = %.2f \nÉ PRECISO LEVAR TROCO DE %.2f.\n\n",total, troco);
			system ("pause");
			system ("cls");
			menuPrincipal ();
			break;
			
		case 2:
			printf ("TOTAL DE %2.f", total);
			printf ("\nPAGAMENTO EM DINHEIRO.\n\n");
			system ("pause");
			system ("cls");
			menuPrincipal ();
			break;
			
		case 3:
			printf ("TOTAL DE %.2f \nPAGAMENTO ATRAVÉS DE CARTÃO DE CRÉDITO OU DÉBITO, LEVAR A MAQUININHA.\n\n", total);
			system ("pause");
			system ("cls");
			menuPrincipal ();
			break;
			
		default:
		printf ("ERRO, VOCÊ SERÁ REDIRECIONADO PARA REFAZER O PEDIDO.\n\n");
		system ("pause");
		system ("cls");
		pedidoPizzaria ();
		}
}
	
void alterarPedido () {
	system ("cls");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------------------ALTERAÇÃO DE PEDIDOS-------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n\n");
	printf ("EM CASO DE ALTERAÇÃO OU CANCELAMENTO, ACESSE A OPÇÃO 10 DO MENU, CANCELE O PEDIDO E RETORNE PARA INICIAR OUTRO.\n\n");
	system ("pause");
	system ("cls");
	menuPrincipal ();	
}

void menuPercas () {
	setlocale (LC_ALL, "Portuguese");
	int op, pedidoCanc, cpf1;
	float valorPerca;
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("----------------------------PERCAS E CANCELAMENTOS------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf ("\nSELECIONE A OPÇÃO DESEJADA: \n\n");
	printf ("1 - ADICIONAR PERCAS\n");
	printf ("2 - ADICIONAR CANCELAMENTOS\n");
 	printf ("OUTRO VALOR PARA RETORNAR AO MENU\n");
	scanf ("%d", &op);
	system ("cls");
	
	switch (op) {
		case 1:	
		printf ("DIGITE O CPF DO FUNCIONÁRIO RESPONSÁVEL PELA PERCA:\n");
		scanf ("%d", &cpf1);
		printf ("PARA CONFIRMAR DIGITE 1 OU OUTRA TECLA PARA RETORNAR AO MENU: ");
		scanf ("%d", &op);
			switch (op) {
				case 1:
				printf ("CONFIRMADO, DIGITE O VALOR DA PERCA: ");
				scanf ("%f", &valorPerca);
				printf ("\nCANCELAMENTO ADICIONADO COM SUCESSO AO SISTEMA.\n");
				system ("pause");
				system ("cls");
				menuPercas ();
				break;
				
				default:
				system ("pause");
				system ("cls");
				menuPercas ();
			}
		case 2:
		FILE* cadastroPedidos;
		cadastroPedidos = fopen ("cadastroPedidos.txt", "r");
	
		if (cadastroPedidos == NULL) {
		printf ("Erro");
		getchar ();
		exit (0);
		}
		
		char frase [100];
		while (fgets(frase,100, cadastroPedidos) !=NULL) {
				printf ("%s", frase);	
		} 
		fclose (cadastroPedidos);
	
		
		printf ("\nDIGTE O NÚMERO DO PEDIDO CANCELADO:\n");
		scanf ("%d", &pedidoCanc);
		printf ("\nCANCELAMENTO ADICIONADO AO SISTEMA.\n");
		system ("pause");
		system ("cls");
		menuPercas ();
		break;
		
		default:
		system ("cls");
		menuPrincipal ();
	}
}


void menu(){
			system ("cls");
			printf("--------------------------------------------------------------------------------\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("-----------------PAGINA DE CADASTRO DE FUNCIONARIOS DA PIZZARIA-----------------\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("\n1 - CADASTRAR FUNCIONARIOS\n\n2 - PROCURAR CADASTRO DE FUNCIONARIOS\n\n3 - EXCLUIR CADASTRO DE FUNCIONARIOS\n\n4 - ALTERAR CADASTRO DO FUNCIONARIO\n\n5 - LISTAR TODOS OS FUNCIONARIO\n\nOUTRO VALOR PARA RETORNAR AO MENU\n\n");
			printf("\n\nESCOLHA A OPÇÃO QUE DESEJA ACESSAR: ");
			scanf("%d",&opcao);
			system("cls");
			
			switch(opcao){
				case 1:
					cadastro ();
					break;
				case 2:
					pesquisa ();
					break;
				case 3: 
					excluircadastro();
					break;
				case 4:
					alterarcadastro();
					break;
				case 5:
					listar();
				default:
					system ("cls");
					menuPrincipal ();
			}

}

void abrir_arq(){
	
	p = fopen("Funcionarios.txt","a+b");
	aux = fopen("Auxiliar.txt", "ab");
	if (p == NULL || aux == NULL) {
		printf("ERRO NA ABERTURA DO ARQUIVO\n");
		system("pause");
		exit(1);
	}
}

void cadastro(){
	system("cls");
	abrir_arq();
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-------------------CADASTRO DE FUNCIONARIOS DA PIZZARIA-------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf("DIGITE QUANTOS FUNCIONARIOS DESEJA CADASTAR: ");
	scanf("%d",&opcao);
	system("cls");
	
	for(int i=0; i<opcao; i++){
	
		fflush(stdin);
		printf("DIGITE UM CODIGO PARA O FUNCIONARIO:\n\n");
		scanf("%d",&pizza.codigo);
		fflush(stdin);
		printf("DIGITE O NOME DO FUNCIONARIO:\n\n");
		fflush(stdin);
		gets(pizza.nome);
		printf("DIGITE O DIA DE NASCIMENTO DO FUNCIONARIO:\n\n");
		scanf("%d",&pizza.dia);
		fflush(stdin);
		printf("DIGITE O MÊS DE NASCIMENTO DO FUNCIONARIO:\n\n");
		scanf("%d",&pizza.mes);
		fflush(stdin);
		printf("DIGITE O ANO DE NASCIMENTO DO FUNCIONARIO:\n\n");
		scanf("%d",&pizza.ano);
		fflush(stdin);
		printf("DIGITE O CPF DO FUNCIONARIO:\n\n");
		scanf("%d",&pizza.cpf);
		fflush(stdin);
		printf("DIGITE O TELEFONE RESIDENCIAL DO FUNCIONARIO:\n\n");
		scanf("%d",&pizza.telefone);
		fflush(stdin);
		printf("DIGITE O TELEFONE CELULAR DO FUNCIONARIO:\n\n");
		scanf("%d",&pizza.celular);
		fflush(stdin);
		printf("DIGITE O ENDEREÇO DO FUNCIONARIO:\n\n");
		fflush(stdin);
		gets(pizza.endereco);
		printf("DIGITE O NUMERO DA CASA OU APARTAMENTO DO FUNCIONARIO:\n\n");
		scanf("%d",&pizza.numero);
		fflush(stdin);
		printf("DIGITE O EMAIL DO FUNCIONARIO:\n\n");
		gets(pizza.email);
		fflush(stdin);
		printf("DIGITE O CARGO DO FUNCIONARIO:\n\n");
		fflush(stdin);
		gets(pizza.cargo);
		fseek(p,SEEK_END,1);
		fwrite(&pizza,sizeof(pizzaria),1,p); 
		system("cls");
	}
	fclose(p);
	fclose(aux);
	printf("FUNCIONARIO CADASTRADO COM SUCESSO\n");
	system("pause");
	menu ();
}

void pesquisa () {
	system("cls");
	abrir_arq ();
	int cpf, a;
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-------------------PESQUISA DE FUNCIONARIOS DA PIZZARIA-------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	
	printf("DIGITE O CPF DO FUNCIONARIO: ");
	scanf("%d",&cpf);
	fseek(p,SEEK_SET,1);
	fread(&pizza,sizeof(pizzaria),1,p);
	while(!feof(p)) {
		if(pizza.cpf==cpf) {
			
			a++;
			printf("FUNCIONARIO ENCONTRADO\n\n");
			printf("CODIGO DO FUNCIONARIO: %d\n", pizza.codigo);
			printf("NOME: %s\n", pizza.nome);
			printf("DIA DE NASCIMENTO: %d\n", pizza.dia);
			printf("MÊS DE NASCIMENTO: %d\n", pizza.mes);
			printf("ANO DE NASCIMENTO: %d\n", pizza.ano);
			printf("CPF: %d\n", pizza.cpf);
			printf("TELEFONE RESIDENCIAL: %d\n", pizza.telefone);
			printf("TELEFONE CELULAR: %d", pizza.celular);
			printf("ENDEREÇO: %s\n", pizza.endereco);
			printf("NUMERO DA CASA OU APARTAMENTO: %d\n", pizza.numero);
			printf("EMAIL: %s\n", pizza.email);
			printf("CARGO: %s\n", pizza.cargo);
			printf("--------------------------------------------------------------------------------\n");
		}
		fread(&pizza,sizeof(pizzaria),1,p);
			
		}
		if (a==0) printf("FUNCIONARIO NÃO ENCOTRADO\n");
		fclose(p);
		fclose(aux);
		system("pause");
		system ("cls");
		menu ();

}

void excluircadastro(){
	system("cls");
	
	abrir_arq ();
	int cpf, a;
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------------EXCLUIR FUNCIONARIOS DA PIZZARIA-------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf("DIGITE O CPF DO FUNCIONARIO QUE DESEJA EXCLUIR: ");
	scanf("%d",&cpf);
	
	fseek(p,SEEK_SET,1);
	fread(&pizza,sizeof(pizzaria),1,p);
	
	while(!feof(p)) {
		if(pizza.cpf==cpf) a++;
		else fwrite(&pizza,sizeof(pizzaria),1,aux);
		fread(&pizza,sizeof(pizzaria),1,p);
	}
	if(a==0)printf("FUNCIONARIO NÃO ENCONTRADO\n");
		else printf("FUNCIONARIO FOI EXCLUIDO COM SUCESSO\n");
		
		fclose(p);
		fclose(aux);
		
		remove("Funcionarios.txt");
		rename("auxiliar.txt","Funcionarios.txt");
		remove("auxiliar.txt");
		system("pause");
		system ("cls");
		menu ();

}

void alterarcadastro () {
	system("cls");
		
	abrir_arq ();
	int cpf, a;
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-----------------ALTERAR DADOS DO FUNCIONARIOS DA PIZZARIA----------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
	printf("DIGTE O CPF DO FUNCIONARIO QUE DESEJA ALTERA OS DADOS: ");
	scanf("%d",&cpf);
	
	fseek(p,SEEK_SET,1);
	fread(&pizza,sizeof(pizzaria),1,p);
	while(!feof(p)) {
		if(pizza.cpf==cpf) {
			
			 a++;
			 	printf("DIGITE O NOVO CODIGO DO FUNCIONARIO:\n\n");
			 	scanf("%d",&pizza.codigo);
			 	fflush(stdin);
			 	printf("DIGITE O NOVO NOME DO FUNCIONARIO:\n\n");
				gets(pizza.nome);
				fflush(stdin);
				printf("DIGITE O NOVO DIA DE NASCIMENTO DO FUNCIONARIO:\n\n");
				scanf("%d",&pizza.dia);
				fflush(stdin);
				printf("DIGITE O NOVO MÊS DE NASCIMENTO DO FUNCIONARIO:\n\n");
				scanf("%d",&pizza.mes);
				fflush(stdin);
				printf("DIGITE O NOVO ANO DE NASCIMENTO DO FUNCIONARIO:\n\n");
				scanf("%d",&pizza.ano);
				fflush(stdin);
				printf("DIGITE O NOVO CPF DO FUNCIONARIO:\n\n");
				scanf("%d",&pizza.cpf);
				fflush(stdin);
				printf("DIGITE O NOVO TELEFONE RESIDENCIAL DO FUNCIONARIO:\n\n");
				scanf("%d",&pizza.telefone);
				fflush(stdin);
				printf("DIGITE O NOVO TELEFONE CELULAR DO FUNCIONARIO:\n\n");
				scanf("%d",&pizza.celular);
				fflush(stdin);
				printf("DIGITE O NOVO ENDEREÇO DO FUNCIONARIO:\n\n");
				gets(pizza.endereco);
				fflush(stdin);
				printf("DIGITE O NOVO NUMERO DA CASA OU APARTAMENTO DO FUNCIONARIO:\n\n");
				scanf("%d",&pizza.numero);
				fflush(stdin);
				printf("DIGITE O NOVO EMAIL DO FUNCIONARIO:\n\n");
				gets(pizza.email);
				fflush(stdin);
				printf("DIGITE O NOVO CARGO DO FUNCIONARIO:\n\n");
				gets(pizza.cargo);
				fwrite(&pizza,sizeof(pizzaria),1,aux);
				fread(&pizza,sizeof(pizzaria),1,p);
					menu ();

		}
		
	}
	if(a==0){
		printf("FUNCIONARIO NÃO ENCONTRADO\n\n");
		menu ();

	}
	
	else printf("FUNCIONARIO ALTERADO COM SUCESSO\n");
	fclose(aux);
	fclose(p);
	remove("Funcionarios.txt");
	rename("auxiliar.txt","Funcionarios.txt");
	remove("auxiliar.txt");
	system("cls");
	getchar();
	system ("cls");
	menu ();

}
void listar(){
	int a;
	system("cls");
	abrir_arq();
	
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("---------------------LISTAGEM DOS FUNCIONARIOS DA PIZZARIA----------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------\n");
	
		fseek(p,SEEK_SET,1);
		while(fread(&pizza,sizeof(pizzaria),1,p)==1){
			
			a++;
			
			printf("FUNCIONARIO ENCONTRADO\n\n");
			printf("CODIGO DO FUNCIONARIO: %d\n", pizza.codigo);
			printf("NOME: %s\n", pizza.nome);
			printf("DIA DE NASCIMENTO: %d\n", pizza.dia);
			printf("MÊS DE NASCIMENTO: %d\n", pizza.mes);
			printf("ANO DE NASCIMENTO: %d\n", pizza.ano);
			printf("CPF: %d\n", pizza.cpf);
			printf("TELEFONE RESIDENCIAL: %d\n", pizza.telefone);
			printf("TELEFONE CELULAR: %d\n", pizza.celular);
			printf("ENDEREÇO: %s\n", pizza.endereco);
			printf("NUMERO DA CASA OU APARTAMENTO: %d\n", pizza.numero);
			printf("EMAIL: %s\n", pizza.email);
			printf("CARGO: %s\n", pizza.cargo);
			printf("--------------------------------------------------------------------------------\n");
			system("pause");
		}
		
	fclose(p);
	fclose(aux);
}
