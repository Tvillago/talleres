/*
	Descripcion: functions file that contains the functions for counting words
	Last Modify: 2020-06-15
	Modify by: @rafariva
*/

#include "functions.h"
#include <stdio.h>
#define IN 1
#define OUT 0
int count_words(FILE *file){
	int count = -1, status;
	status= OUT;
	char character;
	count=0;
	while((character=fgetc(file))!=EOF){
		if(character==' ' || character=='\n' || character == '\n')
			status=OUT;
		else if(status==OUT){
			status=IN;
			count++;
		}
	}
	/* TODO: add code for counting words */
	/* TIP: use function fscanf for read file/words */

	return count;
}
