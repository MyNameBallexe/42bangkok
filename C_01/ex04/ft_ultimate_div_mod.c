#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int first, last;
	first = *a;
	last = *b;
	*a = first / last;
	*b = first % last;
}
