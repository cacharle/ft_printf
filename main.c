#include <stdio.h>
#include "libft.h"
#include "header.h"

int main()
{
	int test;

	printf("bonjour");
    ft_printf("char: %c\n", 'r');
    ft_printf("string: %s\n", "bonjour");
    ft_printf("pointer: %p\n", &test);
    ft_printf("int: %d or %i\n", 45, 54);
    ft_printf("uint: %u\n", 1 << 31);
    ft_printf("hex lower: %x\n", 0xabcf012);
    ft_printf("hex upper: %X\n", 0xabcf012);
    ft_printf("percent: %%\n");

	ft_printf("precision        |%.9d|\n", 43);
	ft_printf("string precision |%.9s|\n", "jesuisbonjourbonjour");
	ft_printf("min width        |%9d|\n", 43);
	ft_printf("zero padding     |%09d|\n", 43);
	ft_printf("left adjusted    |%-9d|\n", 43);
	ft_printf("string padding   |%9s|\n", "bon");

	ft_printf("width wildcard           |%*d|\n", 5, 43);
	ft_printf("precision wildcard       |%.*d|\n", 5, 43);
	ft_printf("precision/width wildcard |%*.*d|\n", 5, 3, 43);
	ft_printf("left adjusted            |%*d|\n", -5, 43);

	/* ft_printf("overwrite |%*3d|\n", 5, 43); */
	/* ft_printf("overwrite |%*-1d|\n", 0, 43); */
    return 0;
}