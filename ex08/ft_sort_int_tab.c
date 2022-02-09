

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	key;
	int	j;

	i = 1;
	while (i < size)
	{
		key = tab[i];
		j = i - 1;
		while (j >= 0 && key < tab[j])
		{
			tab[j + 1] = tab[j];
			j--; 
		}
		tab[j + 1] = key;
		i++;
	}
}
