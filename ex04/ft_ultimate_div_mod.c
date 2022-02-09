
void   ft_ultimate_div_mod(int *a, int *b) {
  int tmp1 = *a / *b; 
  int tmp2 = *a % *b; 
  *a = tmp1; 
  *b = tmp2;
}
