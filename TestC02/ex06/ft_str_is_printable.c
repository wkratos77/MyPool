#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
			return 0;
		i++;
	}
	return 1;
}
int main()
{
	char *str="sfaiskdof ";
	int r = ft_str_is_printable(str);
	printf("%d",r);
}
