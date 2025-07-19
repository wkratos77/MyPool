void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i = 0;

	if (size <= 1)
		return;

	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			ft_swap(&tab[i], &tab[i + 1]);
		i++;
	}

	ft_sort_int_tab(tab, size - 1);
}
