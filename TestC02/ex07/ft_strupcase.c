#include <unistd.h>
#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}
int main()
{
	char str[]="will it work";
	ft_strupcase(str);
	printf("%s",str);
}
