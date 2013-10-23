/*
 * main.c
 *
 *  Created on: 20/10/2013
 *      Author: Emanuelle
 */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "lexico.h"
#include "tokens.h"
#include "boolean.h"

extern FILE *arquivo;

int main()
{
	printf("tk1 \t\ttk2 \t\tvalor\n");
	token *tk;

	tk = fill_and_return_token(T_ID);

	print_token(tk);

	/*arquivo = fopen("teste_lexico_alex.txt", "r");
	int fim_de_arquivo = false;

	while(!fim_de_arquivo)
	{
		tk = next_token();
		print_token(tk);

		if(tk->token1 == T_EOF) fim_de_arquivo = true;
	}

	fclose(arquivo);
*/
	return 0;

}
