#include <unistd.h>
#include <stdio.h>
char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j] == '\0')
				return (&str[i]);
			j++;
		}
	
		i++;
	}

	return (NULL);
}
int main()
{
	char *str = "walid";
	char *f = "lid";
	char *s = ft_strstr(str,f);
	printf("%s",s);
}
