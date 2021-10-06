#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(void)
{
	char *s = "a\0ab\0abc\0abcd";
	char *ss[] = {s, s+2, s+5, s+9};
	t_stock_str *arr = ft_strs_to_tab(4, ss);
	ft_show_tab(arr);
	free(arr);
}
