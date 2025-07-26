#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] && i < size)
	{
		i++;

	}
		while (j < size - 1 &&  src[j])
		{
			dest[i + j] = src[j];
			j++
		}

	dest[i] = '\0';
	return (i);
}
