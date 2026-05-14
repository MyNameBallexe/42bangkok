#include <unistd.h>

void	output_length(int len)
{
	char out;
	if (len >= 10)
	{
		output_length(len / 10);
	}
	out = (len % 10) + '0';
	write(1, &out, 1);
}

void	ft_strlen(char *str)
{
	int length;
	length = 0;
	while(str[length] != '\0')
	{
		length++;
	}
	output_length(length);
}
