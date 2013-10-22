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

	arquivo = fopen("teste_lexico_alex.txt", "r");
	int fim_de_arquivo = false;

	while(!fim_de_arquivo)
	{
		tk = next_token();
		print_token(tk);

		if(tk->token1 == T_EOF) fim_de_arquivo = true;
	}
/*	char c;
	int i = 0;
	while(i < 15)
	{
		c = fgetc(arquivo);
		if(c == EOF) printf("eof\n", c);
		else printf("%c\n", c);
		if(c == EOF)
		{
			fseek(arquivo, -1, SEEK_CUR);
			c = fgetc(arquivo);
			//c = fgetc(arquivo);
		}
		++i;
	}
*/
	fclose(arquivo);

	return 0;

}
