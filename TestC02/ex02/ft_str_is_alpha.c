#include <unistd.h>
#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return 1;
	}
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <=  'z')))
			return 0;
		i++;
	}
	return 1;
}
int main()
{
	char *str= "123";
	int r=ft_str_is_alpha(str);
	printf("%d",r);
}
