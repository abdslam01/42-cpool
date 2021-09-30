#include <stdio.h>
int	ft_atoi_base(char *str, char *base);

int main()
{
	printf("%d", ft_atoi_base(" \t\v\r\f\n  ---+--+1234ab567", "0123456789"));
}
