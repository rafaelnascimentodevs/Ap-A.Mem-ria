#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void * calloc (size_t count, size_t eltSize);

int main (void)

{
	int v_num = 33;
	int v_num2 = 25;
	int*ptr;
	int*ptr2;
	ptr = &v_num;
	ptr2 = &v_num2;
	
	printf ("conteudo da variavel v_num : d%\n", v_num);
	printf ("conteudo da variavel v_num2 : d%\n", v_num2);
	printf ("Endereço da variavel v_num : %x \n",&v_num);
	printf ("Endereço da variavel v_num2 : %x \n",&v_num2);
	printf ("conteudo da variavel ponteiro ptr: %x", ptr);
		
	getch();
	return(0);
}
