#include  <unistd.h>

void	turn_hex(unsigned char c)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef" [c / 16], 1);
	write(1, &"0123456789abcdef" [c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			turn_hex(str[i]);
		}
		else 
			write (1, &str[i], 1);
		i++;
	}
}
int main()
{
    ft_putstr_non_printable("Hello\nHow are you?");
    write(1, "\n", 1);
    return 0;
}
