#include "./headers/ft_printf.h"
#include <stdio.h>

int main()
{
	int a = 10;
	int *b = &a;
	printf("%p\n", b);
}