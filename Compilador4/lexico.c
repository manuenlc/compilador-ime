/*
 * lexico.c
 *
 *  Created on: 21/10/2013
 *      Author: Emanuelle
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

#include "tokens.h"
#include "lexico.h"

extern token_no *token2_inicio = NULL;
extern token_no *token2_fim = NULL;
extern int contador_token2 = 0;
extern int eh_comentario;
extern FILE *arquivo;

char nome_lido[ID_TAM_MAX];
int nome_lido_tam;

/* declaração de funções */

token* next_token();
/*coloca o '\0' no fim de nome lido, preenche o token com as informações certas e retorna o token preenchido*/
token* fill_and_return_token(int token1);
void return_eof_next_time();
token* fill_and_return_token_id_or_reserved_word();
int get_token2(char* token_id);
void print_token(token* to_print);
void add_char_to_nome_lido(char c);


/* implementação das funções */

token* next_token()
{
	printf("to do");

	//comentário
	//inteiro
	//float
	//identificador
	//palavra reservada
	//'\n'
	return NULL;
}

token* fill_and_return_token(int token1)
{
	token* token_to_return = (token*) malloc(sizeof(token*));
	if(token_to_return)
	{
		printf("erro ao alocar memória");
		return NULL;
	}

	token_to_return->token1 = token1;

	switch (token1)
	{
		case T_INT_CONST:
			token_to_return->token_valor_int = atoi(nome_lido);
			break;
		case T_BOOLEAN_CONST:
			if(strcmp("false", nome_lido)) token_to_return->token_valor_boolean = true;
			else token_to_return->token_valor_boolean = false;
			break;
		case T_REAL_CONST:
			token_to_return->token_valor_real = (float) atof(nome_lido);
			break;
		case T_ID:
			strcpy(token_to_return->token_nome, nome_lido);
			token_to_return->token2 = get_token2(token_to_return->token_nome);
			break;
		case T_EOF:
			strcpy(token_to_return->token_nome, "eof");
			break;
		default:
			strcpy(token_to_return->token_nome, nome_lido);
			break;
	}
	return token_to_return;
}

void return_eof_next_time()
{
	printf("to do");

}

token* fill_and_return_token_id_or_reserved_word()
{
	printf("to do");
	return NULL;
}

int get_token2(char* token_id)
{
	printf("to do");
	return 0;
}

void print_token(token* to_print)
{
	if(to_print == NULL)
	{
		printf("token NULL");
		return;
	}

	printf("%d\t\t", to_print->token1);

	switch (to_print->token1)
	{
		case T_INT_CONST:
			printf(" \t\t%d", to_print->token_valor_int);
			break;
		case T_BOOLEAN_CONST:
			if(to_print->token_valor_boolean) printf(" \t\ttrue");
			else printf(" \t\tfalse");
			break;
		case T_REAL_CONST:
			printf(" \t\t%f", to_print->token_valor_real);
			break;
		case T_ID:
			printf("%d\t\t", to_print->token2);
			printf("%s", to_print->token_nome);
			break;
		default:
			printf("%s", to_print->token_nome);
			break;
	}

	printf("\n");
}

void add_char_to_nome_lido(char c)
{
	if(nome_lido_tam < ID_TAM_MAX - 1) printf("nome maior que o máximo permitido");
	else
	{
		nome_lido[nome_lido_tam++] = c;
	}
}

