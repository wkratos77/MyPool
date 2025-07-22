#include <unistd.h>
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (src[i])
	{
		i++;
	}
	if (size == 0)
		return (i);
	else 
	{
		while(src[j] && j < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
		return (i);
	}
}
int main()
{
	char src[] = "Hello";
	char dest[10];
	printf("%d",ft_strlcpy(dest,src,10));
}
