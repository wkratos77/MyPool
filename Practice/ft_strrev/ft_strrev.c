#include <unistd.h>

char    *ft_strrev(char *str)
{
	char rev;
	int i=0;
	int len = 0;

	while (str[len] != '\0')
	{
		len ++
	}

	while (str[i] <= len / 2)
	{
		rev=str[i];
		str[i]=str[len-1 -i];
		str[len -1 -i]=rev;
		i++;
	}
	return(str);
}
