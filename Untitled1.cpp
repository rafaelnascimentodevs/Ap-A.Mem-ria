#include <stdio.h>
#include <conio.h>

int main (void)
{
	int v_num = 33;
	int v_num2 = 25;
	int*ptr;
	int*ptr2;
	ptr = &v_num;
	ptr2 = &v_num2;
	
	printf ("conteudo da variavel v_num/2 respectivamente : d%\n", v_num , v_num2);
	printf ("Endereço da variavel v_num/2 respectivamente: %x \n", &v_num, &v_num2);
	printf ("conteudo da variavel ponteiro ptr: %x", ptr);
	
	getch();
	return(0);
}
