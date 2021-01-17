#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int a;
	int b;
	a = ft_printf("%x\n", 4294967295);
	b = printf("%x\n", 4294967295);
}