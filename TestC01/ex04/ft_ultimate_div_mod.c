#include <unistd.h>
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int va = *a;
	int vb = *b;
	*a = va / vb;
	*b = va % vb;
}
int main()
{
	int x=12;
	int z=6;
	ft_ultimate_div_mod(&x,&z);
		printf("%d\n ",x);
		printf("%d\n ",z);
}
