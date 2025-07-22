#include <unistd.h>
#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	cap = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' &&  str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (cap && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
			else if (!cap && (str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
                        {
                                str[i] = str[i] + 32;
			}
			cap = 0;

		}
		else cap = 1;
	i++;
	}
	return (str);
}
int main()
{
	char str[]="hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(str);
	printf("%s",str);
}
