/*
 * lexico.h
 *
 *  Created on: 20/10/2013
 *      Author: Emanuelle
 */

#ifndef LEXICO_H_
#define LEXICO_H_

# include "tokens.h"
# include "boolean.h"


typedef struct token_no
{
	token *token_atual;
	struct token_no *proximo_token;
} token_no;

/** vari�veis globais */

token_no *token2_inicio = NULL;
token_no *token2_fim = NULL;
int contador_token2 = 0;
int eh_comentario = false;
FILE *arquivo;

/** fim das vari�veis globais */



/** fun��es */

/** retorna o token lido */
token* next_token();

/** imprime as informa��es do token no console*/
void print_token(token* to_print);

/** fim das fun��es */

/** fun��es privadas: tirar daqui!*/
token* fill_and_return_token(int token1);
/** fim das fun��es privadas */


#endif /* LEXICO_H_ */
