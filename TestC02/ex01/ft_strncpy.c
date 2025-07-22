#include <unistd.h>
#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int main()
{
	char *s="Ana walid";
	char d[5];
	ft_strncpy(d,s,5);

	printf(" %s\n", d);
}	
