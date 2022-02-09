
void ft_rev_int_tab(int *tab, int size) {
  int ini;
  int tmp;

  ini = 0;
  while (ini < size)
  {
    tmp = tab[size - 1];
    tab[size - 1] = tab[ini]; 
    tab[ini] = tmp; 
    ini++;
    size--;
  }
}
