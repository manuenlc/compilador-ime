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
void print_token_info();
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

	switch (token1) {
		case T_INT_CONST:
		case T_BOOLEAN_CONST:
		case T_REAL_CONST:
		case T_ID:
		case T_EOF:
		default:
			break;
	}

	printf("to do");
	return NULL;
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

void print_token_info()
{
	printf("to do");
}

void add_char_to_nome_lido(char c)
{
	if(nome_lido_tam < ID_TAM_MAX - 1) printf("nome maior que o máximo permitido");
	else
	{
		nome_lido[nome_lido_tam++] = c;
	}
}

