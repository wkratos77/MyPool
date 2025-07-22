#include <unistd.h>
#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{	
	int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main()
{
	char dest[20] = "sterling";
	char src[] = "Halland";
	printf("%s",ft_strncat(dest,src,2));
}
