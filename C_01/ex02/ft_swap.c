#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	queue;

	queue = *a;
	*a = *b;
	*b = queue;
}
