#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	*t;
	*t = *a;
	*a = *b;
	*b = *t;
}
int main(){

	int x = 5, y = 10;
	int *ptr_x = &x
	int *ptr_y = &y;
    	ft_swap(&ptr_x, &ptr_y);
	
	printf("*ptr_x = %d, *ptr_y = %d\n", *ptr_x, *ptr_y);

}
