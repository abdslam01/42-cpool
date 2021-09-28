#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	printf("%d\n", ft_strncmp("aaa", "aza", 2));
	printf("%d\n", ft_strncmp("ff", "ffg", 2));
	printf("%d\n", ft_strncmp("aza", "aaa", 3));
}
