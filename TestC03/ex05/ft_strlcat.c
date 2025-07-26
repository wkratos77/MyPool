include <unistd.h>
//#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	l = 0;
	while (src[l])
		l++;
	i = 0;
	while (dest[i])
		i++;
	if (size <= i)
		return (size + l);
	j = 0;
	while (src[j] && j < size - i - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (l + i);
}
/*int main()
{
    char d1[20] = "abc";
    char s1[] = "def";
    printf("%d\n",ft_strlcat(d1,s1,20));
    printf("%s\n",d1);
}*/
