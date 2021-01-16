#include "./headers/ft_printf.h"
#include <stdio.h>

int main()
{
	int a = 10;
	int *b = &a;
	int c;
	c = ft_printf("%p\n", b);
	printf("%p\n", b);
	printf("%d\n", c);
}