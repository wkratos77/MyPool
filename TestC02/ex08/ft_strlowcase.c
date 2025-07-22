#include <unistd.h>
#include <stdio.h>
char    *ft_strupcase(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                        str[i] = str[i] + 32;
                }
        i++;
        }
        return (str);
}
int main()
{
        char str[]="wiLl iT worK";
        ft_strupcase(str);
	printf("%s",str);	
}
