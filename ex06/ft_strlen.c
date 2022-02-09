


int ft_strlen(char *str) {
  char *tmp = str; 
  while(*str++) ;
  return (int) (str - tmp) - 1; 
}
